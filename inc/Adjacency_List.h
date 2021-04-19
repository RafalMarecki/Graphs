#pragma once
#ifndef ADJACENCY_LIST_HH
#define ADJACENCY_LIST_HH

#include "List.h"
#include "Graph.h"


class A_List: public Graph
{
private:
	List* _Adj_List;
public:


	A_List(const int& Vertices, const int& Density) : Graph(Vertices, Density) { _Adj_List = new List[Vertices]; };

	virtual void DisplayGraph() override;

	virtual void Get_Random_Graph() override;

	void AddGraphEdge(const int& StartVertice, const int& EndVertice, const int& weigth);

	int get_SizeOfList(const int& Vertices) { return _Adj_List[Vertices].get_ListSize(); };

};


#endif

