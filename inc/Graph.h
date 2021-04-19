#pragma once
#ifndef GRAPH_HH
#define GRAPH_HH

class Graph
{
protected:
	int _Vertices;
	int _Density;
public:

	Graph() : _Vertices(0), _Density(0) {};

	Graph(const int& Vertices, const int& Density) : _Vertices(Vertices), _Density(Density)  {};

	void set_Vertices(const int& Vertices) { _Vertices=Vertices; };

	//void set_Edges(const int& Edges) { _Edges = Edges; };

	void set_Density(const int& Density) { _Density = Density; }

	int get_Vertices() { return _Vertices; };

	//int get_Edges() { return _Edges; };

	int get_Density() { return _Density; }

	virtual void DisplayGraph() = 0;

	virtual void Get_Random_Graph() = 0;


};



















#endif








