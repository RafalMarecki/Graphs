
#include "Adjacency_List.h"
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

	 void A_List::Get_Random_Undirected_Graph()
		{
		 int Size = get_Vertices();

		 float Density = get_Density();

		 int Edges = (Density * Size * (Size - 1)) / 2;


		 int** tmp_arr = new int* [Size];
			 for (int i = 0; i < Size; i++)
				{
				 tmp_arr[i] = new int[Size];
				}


		 for (int i = 0; i < Size; i++)
			{
			 for (int j = 0; j < Size; j++)
				{
					tmp_arr[i][j] = 0;
				}
			}

		 srand(time(NULL));
		 for (int i = 0; i < Edges; i++)
		 {

			 int StartVer_tmp = std::rand() % Size;
			 int EndVer_tmp = std::rand() % Size;
			 int Weigth_tmp = std::rand() % 100 - 50;


			 if (tmp_arr[EndVer_tmp][StartVer_tmp] != 1 && tmp_arr[StartVer_tmp][EndVer_tmp] != 1 && StartVer_tmp != EndVer_tmp)
			 {
				 _adj_List[StartVer_tmp].AddVertice(EndVer_tmp, Weigth_tmp);

				 _adj_List[EndVer_tmp].AddVertice(StartVer_tmp, Weigth_tmp);

				 tmp_arr[EndVer_tmp][StartVer_tmp] = 1;
				 tmp_arr[StartVer_tmp][EndVer_tmp] = 1;
			 }
			 else
				 i--;

		 }
}


	void A_List::Get_Random_Directed_Graph()
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

			_adj_List[StartVer_tmp].AddVertice( EndVer_tmp, Weigth_tmp);
		}
	}


	 void A_List::DisplayGraph()
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

			 _adj_List[i].DisplayVertList(i);
		 }

	 }































