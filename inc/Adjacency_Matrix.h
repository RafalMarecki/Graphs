#pragma once

#include "Graph.h"
#include "Edge_List.h"




class A_Matrix: public Graph
{
private:
	int** _adj_matrix;
public:

	A_Matrix(const int& Vertices, const float& Density);
	

	void DisplayRow(const int& Vertice);

	virtual void DisplayGraph() override;

	virtual void Get_Random_Directed_Graph() override;

	virtual void Get_Random_Undirected_Graph() override;

	virtual void Prim_Algoritm() override;



};

















