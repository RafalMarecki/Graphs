#include <iostream>
#include "Adjacency_List.h"
#include "Adjacency_Matrix.h"
#include <time.h>
#include "cstdlib"



int main()
{
	clock_t start, stop;
	clock_t start1, stop1;
	long double czas, czas1;

	//A_List Graph_list(20,1.0f);

	A_Matrix Graph_Matrix(1000,1.0f);

	A_Matrix MSTree(100, 1.0f);


	//std::cout << "Graph implemented using edge list:" << std::endl;

	/*Graph_list.Get_Random_Undirected_Graph();

    Graph_list.DisplayGraph();*/

	std::cout << std::endl <<  "Graph implemented using adjacency matrix:" << std::endl;

	Graph_Matrix.Get_Random_Undirected_Graph();

	//Graph_Matrix.DisplayGraph();
	

	start = clock();
	Graph_Matrix.DijkstraAlgoritm(0, false);
	stop = clock();
	czas = (long double)(stop-start)/CLOCKS_PER_SEC;
	std:: cout << "Czas operacji: " << czas << std::endl << std:: endl;


	start1 = clock();
	Graph_Matrix.Prim_Algoritm(MSTree);
	stop1 = clock();
	czas1 = (long double)(stop1 - start1) / CLOCKS_PER_SEC;
	std::cout << "Czas operacji: " << czas1 << std::endl << std::endl;



	return 0;
}












