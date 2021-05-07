#pragma once
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>
constexpr auto HIGH = 999999;


class Graph
{
protected:
	int _Vertices;
	float _Density;
public:

	Graph() : _Vertices(0), _Density(0) {};

	Graph(const int& Vertices, const float& Density) : _Vertices(Vertices), _Density(Density)  {};

	void set_Vertices(const int& Vertices) { _Vertices=Vertices; };

	void set_Density(const float& Density) { _Density = Density; }

	int get_Vertices() { return _Vertices; };

	float get_Density() { return _Density; }

	virtual void DisplayGraph() = 0;

	virtual void Get_Random_Undirected_Graph() = 0;

	virtual void DijkstraAlgoritm(std::string FileName,int Vertice, bool ifPrint, bool ifSave) = 0;

	virtual int Read_Graph_From_File(std::string FileName) = 0;

	virtual void save_dijskra_result_to_file(std::string FileName, int* tmp_dist, int* parent) = 0;

};


























