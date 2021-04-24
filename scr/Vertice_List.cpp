#include "Vertice_List.h"

#include <iostream>





void Ver_List::DeleteVertList()
{
	Vertice* tmp = head;

	while (tmp)
		{
		Vertice* next_vertice = tmp->get_NextVertice();
			delete tmp;
			tmp = next_vertice;
		}
}

void Ver_List::AddVertice(const int& EndVertice, const int& weigth)
{
	Vertice* new_vertice = new Vertice;

	new_vertice->set_VerticeValues(EndVertice, weigth);

	if (head == nullptr)
		{
			head = new_vertice;
		}

	else
		{
			Vertice* tmp = head;
			head = new_vertice;
			new_vertice->set_NextVertice(tmp);
		}

	ListSize++;
}

void Ver_List::DisplayVertList(int num)
	{
	Vertice* tmp = head;
	while (tmp)
		{
			std::cout << num << "->" << "Weight:" << tmp->get_Weight() << "->" << tmp->get_EndVertice() << std::endl;
			tmp = tmp->get_NextVertice();
		}

	}


