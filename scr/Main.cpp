#include <iostream>
#include "Adjacency_List.h"
#include "Adjacency_Matrix.h"





int main()
{
	A_List Graph_list(20,0.5f);

	A_Matrix Graph_Matrix(20,0.5f);

	std::cout << "Graph implemented using edge list:" << std::endl;

	Graph_list.Get_Random_Undirected_Graph();

	Graph_list.DisplayGraph();

	std::cout << std::endl <<  "Graph implemented using adjacency matrix:" << std::endl;

	Graph_Matrix.Get_Random_Undirected_Graph();

	Graph_Matrix.DisplayGraph();

	return 0;
}












