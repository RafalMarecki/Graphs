#include "List.h"
#include <iostream>





void List::DeleteList()
{
	Edge* tmp = head;

	while (tmp)
		{
			Edge* next_edge = tmp->get_NextEdge();
			delete tmp;
			tmp = next_edge;
		}
}




void List::AddEdge(const int& StartVertice, const int& EndVertice, const int& weigth)
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


void List::RemoveEdge(const int& StartVertice, const int& EndVertice) {}


void List::DisplayList()
	{
	Edge* tmp = head;

	while (tmp)
		{
			std::cout << tmp->get_StartVertice() << "->" << "Weight:" << tmp->get_Weight() << "->" << tmp->get_EndVertice() << std::endl;
			tmp = tmp->get_NextEdge();
		}

	}


