#pragma once

#include "Edge_List.h"
#include "Vertice_List.h"
#include "Graph.h"


class A_List: public Graph
{
private:
	Ver_List* _adj_List;
public:

	~A_List() {};

	A_List(const int& Vertices, const float& Density);

	virtual void DisplayGraph() override;

	virtual void Get_Random_Undirected_Graph() override;

	virtual int Read_Graph_From_File(std::string FileName) override { return 0; };

	virtual void DijkstraAlgoritm(int Vertice, bool ifPrint) override;

	void DisplayShortestPaths(int* tmp_dist, int* parent);

	int getNearest(int* tmp_dist, bool* visited);

	void DisplaySingleList(const int& Vertice);

};




