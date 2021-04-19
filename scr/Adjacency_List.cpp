
#include "Adjacency_List.h"
#include <iostream>
#include <cstdlib>





	void A_List::AddGraphEdge(const int& StartVertice, const int& EndVertice, const int& weigth)
	{
		_Adj_List[StartVertice].AddEdge(StartVertice, EndVertice, weigth);
	}


	void A_List::Get_Random_Graph()
	{
		int Size = get_Vertices();

		int Density = get_Density();

		int Edges = (Density * Size * (Size - 1)) / 2;




		for (int i = 0; i < Edges; i++)
		{
			int StartVer_tmp = std::rand() % Size;
			int EndVer_tmp = std::rand() % Size;
			int Weigth_tmp = std::rand() % 50;



			_Adj_List[StartVer_tmp].AddEdge(StartVer_tmp, EndVer_tmp, Weigth_tmp);

		}
	}

	 void A_List::DisplayGraph()
	 {

		 int Vertices = get_Vertices();

		 for (int i = 0; i < Vertices; i++)
		 {
			 _Adj_List[i].DisplayList();
			 std::cout << std::endl << "Nastepna lita: " << std::endl;
		 }

	 }































