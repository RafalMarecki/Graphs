#include "Edge_List.h"
#include <iostream>


void Edge_List::DeleteEdgeList()
{
	Edge* tmp = head;

	while (tmp)
	{
		Edge* next_edge = tmp->get_NextEdge();
		delete tmp;
		tmp = next_edge;
	}
}


void Edge_List::AddEdge(const int& StartVertice, const int& EndVertice, const int& weigth)
{
	Edge* new_edge = new Edge;

	new_edge->set_EdgeValues(StartVertice, EndVertice, weigth);

	if (head == nullptr)
	{
		head = new_edge;
	}

	else
	{
		Edge* tmp = head;
		head = new_edge;
		new_edge->set_NextEdge(tmp);
	}

	ListSize++;
}

void Edge_List::DisplayEdgeList()
{
	Edge* tmp = head;

	while (tmp)
	{
		std::cout << tmp->get_StartVertice() << "->" << "Weight:" << tmp->get_Weight() << "->" << tmp->get_EndVertice() << std::endl;
		tmp = tmp->get_NextEdge();
	}

}


int Edge_List::Find_Minimal_Weight()
{
	int minimal_value = head->get_Weight();
	Edge* tmp = head;

	while (tmp)
		{
			if (minimal_value > tmp->get_Weight())
					minimal_value = tmp->get_Weight();
					

			tmp = tmp->get_NextEdge();
		}
	return minimal_value;
}



void Edge_List::Delete_Minimal_Weight_Edge(int min_weight)
	{
	Edge* tmp = new Edge;
	tmp = head;
	Edge* prev = head;


		while (tmp->get_NextEdge()->get_Weight() != min_weight)
		{	
				prev = tmp;
				tmp = tmp->get_NextEdge();		
		}
		prev = tmp;
		tmp = tmp->get_NextEdge();

		prev->set_NextEdge(tmp->get_NextEdge());

		
		delete tmp;

	}





