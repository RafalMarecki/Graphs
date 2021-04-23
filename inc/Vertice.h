#pragma once


class Vertice
{
private:
	int _EndVertice;
	int _weight;
	Vertice* _NextVertice;

public:

	Vertice(): _EndVertice(0), _weight(0), _NextVertice(nullptr) {};

	Vertice(const int& EndVertice, const int& weight) : _EndVertice(EndVertice), _weight(weight), _NextVertice(nullptr) {};

	const int& get_EndVertice() const { return _EndVertice; };

	const int& get_Weight() const { return _weight; };

	Vertice* get_NextVertice()  { return _NextVertice; };

	void set_EndVertice(const int& EndVertice) { _EndVertice = EndVertice; };

	void set_WeightVertice(const int& weight) { _weight = weight; };

	void set_NextVertice(Vertice* NextVertice) { _NextVertice = new Vertice;  _NextVertice = NextVertice; };

	void set_VerticeValues( const int& EndVertice, const int& weight)
	{
		_EndVertice = EndVertice;
		_weight = weight;
	};
				

};






















