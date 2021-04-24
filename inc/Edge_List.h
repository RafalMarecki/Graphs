#pragma once
#include "Edge.h"


class Edge_List
{
private:

	int ListSize;
	Edge* head;

public:

	void DeleteEdgeList();

	Edge_List() : ListSize(0), head(nullptr) {};

	const Edge* get_head() { return head; };

	const int get_EdgeListSize() { return ListSize; };

	void AddEdge(const int& StartVertice, const int& EndVertice, const int& weigth);

	void Delete_Minimal_Weight_Edge(int min_weight);

	int Find_Minimal_Weight();



	void DisplayEdgeList();


};
