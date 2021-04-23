#pragma once

#include "Vertice.h"



class List
{
private:

	int ListSize;
	Vertice* head;

public:

	void DeleteList();

	List() : ListSize(0), head(nullptr) {};

	const Vertice* get_head() { return head; };

	const int get_ListSize() { return ListSize; };

	void AddVertice( const int& EndVertice, const int& weigth);

	void DisplayList(int num);


};























