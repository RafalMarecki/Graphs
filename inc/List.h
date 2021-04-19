#pragma once
#ifndef LIST_HH
#define LIST_HH
#include "Edge.h"



class List
{
private:

	int ListSize;
	Edge* head;

public:

	~List() {};

	List() : ListSize(0), head(nullptr) {};

	const Edge* get_head() { return head; };

	const int get_ListSize() { return ListSize; };

	void AddEdge(const int& StartVertice, const int& EndVertice, const int& weigth);

	void RemoveEdge(const int& StartVertice, const int& EndVertice);

	void DisplayList();


};
































#endif