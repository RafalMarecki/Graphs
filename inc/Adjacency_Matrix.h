#pragma once

#include "Graph.h"
#include "EdgePriorityQueue.h"




class A_Matrix: public Graph
{
private:
	int** _adj_matrix;
public:

	~A_Matrix();

	A_Matrix(): _adj_matrix(nullptr) {};

	A_Matrix(const A_Matrix& new_matrix) { _adj_matrix = new_matrix._adj_matrix; };
	
	A_Matrix(const int& Vertices, const float& Density);

	int** get_matrix() { return _adj_matrix; };

	void DisplayRow(const int& Vertice);

	virtual void DisplayGraph() override;

	virtual void Get_Random_Undirected_Graph() override;

	virtual int Read_Graph_From_File(std::string FileName) override;

	virtual void DijkstraAlgoritm(std::string FileName,int Vertice, bool ifPrint, bool ifSave) override;

	virtual void save_dijskra_result_to_file(std::string FileName, int* tmp_dist, int* parent) override;

	void DisplayShortestPaths(int* tmp_dist, int* parent);

	int getNearest(int* tmp_dist, bool* visited);

	void Reset();



};

















