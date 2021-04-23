
#include "Edge_list.h"
#include <iostream>
#include <cstdlib>
#include <ctime>






//Nie dziala po indeksach
	//Edge_List::~Edge_List()
	//{
	//	int Vertices = get_Vertices();

	//	for (int i = 0; i < Vertices; i++)
	//		_edge_List[Vertices].DeleteList();


	//	delete[] _edge_List;
	//}





	void Edge_List::AddGraphEdge(const int& StartVertice, const int& EndVertice, const int& weigth)
	{
		_edge_List[StartVertice].AddEdge(StartVertice, EndVertice, weigth);
	}


	void Edge_List::Get_Random_Graph()
	{
		int Size = get_Vertices();

		float Density = get_Density();

		int Edges = (Density * Size * (Size - 1)) / 2;



		srand(time(NULL));
		for (int i = 0; i < Edges; i++)
		{

			int StartVer_tmp = std::rand() % Size;
			int EndVer_tmp = std::rand() % Size;
			int Weigth_tmp = std::rand() % 100 - 50;

			AddGraphEdge(StartVer_tmp, EndVer_tmp, Weigth_tmp);
		}
	}

	 void Edge_List::DisplayGraph()
	 {

		 int Vertices = get_Vertices();

		 for (int i = 0; i < Vertices; i++)
		 {
			 if (i == 0)
				 std::cout << std::endl << "First Edge" << std::endl;

			 else if (i != Vertices - 1)
				 std::cout << std::endl << "Next Edge: " << std::endl;

			 else
				 std::cout << std::endl << "Last Edge: " << std::endl;

			 _edge_List[i].DisplayList();
		 }

	 }































