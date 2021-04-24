#pragma once

#include "Vertice.h"



class Ver_List
{
private:

	int ListSize;
	Vertice* head;

public:

	void DeleteVertList();

	Ver_List() : ListSize(0), head(nullptr) {};

	const Vertice* get_head() { return head; };

	const int get_VerListSize() { return ListSize; };

	void AddVertice( const int& EndVertice, const int& weigth);

	void DisplayVertList(int num);


};























