#include "Vertice_List.h"
#include <iostream>
constexpr auto HIGH = 999999;




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
		if (tmp->get_Weight() != HIGH)
				std::cout << num << "->" << "Weight:" << tmp->get_Weight() << "->" << tmp->get_EndVertice() << std::endl;
			
		tmp = tmp->get_NextVertice();
		}
	}


int Ver_List::operator[](int position)
{
	Vertice* tmp = new Vertice;
	tmp = head;

	for (int i = 0; i < position; i++)
			tmp = tmp->get_NextVertice();

	return tmp->get_Weight();

}


void Ver_List::ChangeWeight(int EndVer, int weight)
{

	Vertice* tmp = new Vertice;
	tmp = head;

	for (int i = 0; i < EndVer; i++)
	{
		tmp = tmp->get_NextVertice();
	}

	tmp->set_WeightVertice(weight);

}
