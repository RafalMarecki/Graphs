#pragma once


#include "List.h"
#include "Graph.h"


class A_List: public Graph
{
private:
	List* _adj_List;
public:

	~A_List() {};

	A_List(const int& Vertices, const float& Density) : Graph(Vertices, Density) { _adj_List = new List[Vertices]; };

	virtual void DisplayGraph() override;

	virtual void Get_Random_Directed_Graph() override;

	virtual void Get_Random_Undirected_Graph() override;

	int get_SizeOfList(const int& Vertices) { return _adj_List[Vertices].get_ListSize(); };





};




