#include "EdgePriorityQueue.h"






void Edge_Priority_Queue::Enqueue(const int& StartVertice, const int& EndVertice, const int& weigth)
{
	_edge_list.Add_Edge_by_Priority(StartVertice, EndVertice, weigth);
}


void Edge_Priority_Queue::Dequeue()
{
	_edge_list.DeleteEdge();
}


void Edge_Priority_Queue::DisplayQueue()
{
	_edge_list.DisplayEdgeList();
}


const Edge* Edge_Priority_Queue::get_first()
{
	return _edge_list.get_head();
}

const int Edge_Priority_Queue::get_begin_from_first()
{
	return _edge_list.get_head()->get_StartVertice();
}

const int Edge_Priority_Queue::get_end_from_first()
{
	return _edge_list.get_head()->get_EndVertice();
}

const int Edge_Priority_Queue::get_weight_from_first()
{
	return _edge_list.get_head()->get_Weight();
}



