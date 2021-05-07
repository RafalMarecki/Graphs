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

	A_List() : _adj_List(nullptr) {};

	A_List(const int& Vertices, const float& Density);

	virtual void DisplayGraph() override;

	virtual void Get_Random_Undirected_Graph() override;

	virtual int Read_Graph_From_File(std::string FileName) override;

	virtual void DijkstraAlgoritm(std::string FileName,int Vertice, bool ifPrint, bool ifSave) override;

	virtual void save_dijskra_result_to_file(std::string FileName, int* tmp_dist, int* parent) override {};

	void DisplayShortestPaths(int* tmp_dist, int* parent);

	int getNearest(int* tmp_dist, bool* visited);

	void DisplaySingleList(const int& Vertice);

};




