#pragma once

#include "Edge_List.h"
#include "Vertice_List.h"
#include "Graph.h"


class A_List: public Graph
{
private:
	Ver_List* _adj_List;
public:

	~A_List() {};

	A_List(const int& Vertices, const float& Density) : Graph(Vertices, Density) { _adj_List = new Ver_List[Vertices]; };

	virtual void DisplayGraph() override;

	virtual void Get_Random_Directed_Graph() override;

	virtual void Get_Random_Undirected_Graph() override;

	void Prim_Algoritm() {};



};




