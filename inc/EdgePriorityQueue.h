#pragma once
#include "Edge_List.h"





class Edge_Priority_Queue
{
private:
	Edge_List _edge_list;
public:

	Edge_Priority_Queue() : _edge_list() {};

	const Edge* get_first();

	const int get_begin_from_first();

	const int get_end_from_first();

	const int get_weight_from_first();

	void Enqueue(const int& StartVertice, const int& EndVertice, const int& weigth);

	void Dequeue();

	void DisplayQueue();







};















