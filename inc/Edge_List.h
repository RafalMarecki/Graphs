#pragma once


#include "List.h"
#include "Graph.h"


class Edge_List: public Graph
{
private:
	List* _edge_List;
public:

	~Edge_List() {};

	Edge_List(const int& Vertices, const float& Density) : Graph(Vertices, Density) { _edge_List = new List[Vertices]; };

	virtual void DisplayGraph() override;

	virtual void Get_Random_Graph() override;

	void AddGraphEdge(const int& StartVertice, const int& EndVertice, const int& weigth);

	int get_SizeOfList(const int& Vertices) { return _edge_List[Vertices].get_ListSize(); };

};




