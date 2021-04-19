#include "List.h"
#include <iostream>


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

	while (tmp->get_NextEdge() != nullptr)
		{
			std::cout << tmp->get_StartVertice() << "->" << "Weight: " << tmp->get_Weight() << "->" << tmp->get_EndVertice() << std::endl;
			tmp = tmp->get_NextEdge();
		}

	std::cout << tmp->get_StartVertice() << "->" << "Weight: " << tmp->get_Weight() << "->" << tmp->get_EndVertice() <<  std::endl;
	}


