#pragma once

#include "Graph.h"
#include "EdgePriorityQueue.h"




class A_Matrix: public Graph
{
private:
	int** _adj_matrix;
public:

	A_Matrix(const A_Matrix& new_matrix)
	{
		_adj_matrix = new_matrix._adj_matrix;
	}

	A_Matrix(const int& Vertices, const float& Density);

	int** get_matrix() { return _adj_matrix; };
	
	bool isComplete();

	void DisplayRow(const int& Vertice);

	virtual void DisplayGraph() override;

	virtual void Get_Random_Directed_Graph() override;

	virtual void Get_Random_Undirected_Graph() override;

	int getNearest(int* tmp_dist, bool* visited);

	void DijkstraAlgoritm(int Vertice, bool ifPrint);

	void DisplayShortestPaths(int* tmp_dist, int* parent);

	//A_Matrix Prim_Algoritm(A_Matrix& MSTree);
};

















