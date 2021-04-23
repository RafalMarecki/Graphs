#pragma once

#include "Graph.h"





class A_Matrix: public Graph
{
private:
	int** _adj_matrix;
public:


	A_Matrix(const int& Vertices, const float& Density) : Graph(Vertices, Density)
	{
		_adj_matrix = new int* [Vertices];
		for (int i = 0; i < Vertices; i++)
		{
			_adj_matrix[i] = new int[Vertices];
		}
	};

	void DisplayRow(const int& Vertice);

	virtual void DisplayGraph() override;

	virtual void Get_Random_Graph() override;


};

















