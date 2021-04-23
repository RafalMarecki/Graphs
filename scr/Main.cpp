#include <iostream>
#include "Edge_List.h"
#include "Adjacency_Matrix.h"


int main()
{

	Edge_List Graph_Edge_list(5,0.5f);

	A_Matrix Graph_Matrix(5,0.5f);

	std::cout << "Graph implemented using edge list:" << std::endl;

	Graph_Edge_list.Get_Random_Graph();

	Graph_Edge_list.DisplayGraph();

	std::cout << std::endl <<  "Graph implemented using adjacency matrix:" << std::endl;

	Graph_Matrix.Get_Random_Graph();

	Graph_Matrix.DisplayGraph();

	return 0;
}




