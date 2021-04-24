#include <iostream>
#include "Adjacency_List.h"
#include "Adjacency_Matrix.h"





int main()
{
	/*A_List Graph_list(20,1.0f);

	A_Matrix Graph_Matrix(20,0.7f);

	std::cout << "Graph implemented using edge list:" << std::endl;

	Graph_list.Get_Random_Undirected_Graph();

	Graph_list.DisplayGraph();

	std::cout << std::endl <<  "Graph implemented using adjacency matrix:" << std::endl;

	Graph_Matrix.Get_Random_Undirected_Graph();

	Graph_Matrix.DisplayGraph();*/

	Edge_List list;

	int min;
	list.AddEdge(2, 1, 4);
	list.AddEdge(3, 4, 6);
	list.AddEdge(3, 9, 5);
	list.AddEdge(5, 8, 8);
	list.AddEdge(5, 2, 2);
	list.AddEdge(5, 9, 7);

	min = list.Find_Minimal_Weight();
	std::cout << min;
	list.Delete_Minimal_Weight_Edge(min);

	list.DisplayEdgeList();
	



	return 0;
}












