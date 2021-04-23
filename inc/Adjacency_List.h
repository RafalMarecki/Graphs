#pragma once
#include "List.h"
#include "Graph.h"






class A_List: public Graph
{
private:
	List* arr;
public:

	A_List(const int& Vertices, const float& Density) : Graph(Vertices, Density) { arr = new List[Vertices]; };


	virtual void DisplayGraph() override;

	virtual void Get_Random_Graph() override;








};