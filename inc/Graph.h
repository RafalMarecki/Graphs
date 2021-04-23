#pragma once


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

	virtual void Get_Random_Graph() = 0;


};


























