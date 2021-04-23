#pragma once

#include "Edge.h"



class List
{
private:

	int ListSize;
	Edge* head;

public:

	void DeleteList();

	List() : ListSize(0), head(nullptr) {};

	const Edge* get_head() { return head; };

	const int get_ListSize() { return ListSize; };

	void AddEdge(const int& StartVertice, const int& EndVertice, const int& weigth);

	void RemoveEdge(const int& StartVertice, const int& EndVertice);

	void DisplayList();


};























