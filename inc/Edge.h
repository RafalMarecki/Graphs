#pragma once


class Edge
{
private:

	int _StartVertice;
	int _EndVertice;
	int _weight;
	Edge* _NextEdge;

public:

	Edge():_StartVertice(0), _EndVertice(0), _weight(0), _NextEdge(nullptr) {};

	Edge(const int& StartVertice, const int& EndVertice, const int& weight) : _StartVertice(StartVertice), _EndVertice(EndVertice), _weight(weight), _NextEdge(nullptr) {};

	const int& get_StartVertice() const { return _StartVertice; };

	const int& get_EndVertice() const { return _EndVertice; };

	const int& get_Weight() const { return _weight; };

	 Edge* get_NextEdge()  { return _NextEdge; };


	void set_StartVertice(const int& StartVertice) { _StartVertice = StartVertice; };

	void set_EndVertice(const int& EndVertice) { _EndVertice = EndVertice; };

	void set_WeightVertice(const int& weight) { _weight = weight; };

	void set_NextEdge(Edge* NextEdge) { _NextEdge = new Edge;  _NextEdge = NextEdge; };

	void set_EdgeValues(const int& StartVertice, const int& EndVertice, const int& weight)
	{
		_StartVertice = StartVertice;
		_EndVertice = EndVertice;
		_weight = weight;
	};
				

};






















