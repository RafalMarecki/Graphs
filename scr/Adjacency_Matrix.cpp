#include "Adjacency_Matrix.h"
#include <iostream>





A_Matrix::A_Matrix(const int& Vertices, const float& Density): Graph(Vertices, Density)
{
	_adj_matrix = new int* [Vertices];
	for (int i = 0; i < Vertices; i++)
	{
		_adj_matrix[i] = new int[Vertices];
	}


	for (int j = 0; j < Vertices; j++)
	{
		for (int i = 0; i < Vertices; i++)
		{
			_adj_matrix[j][i] = -100;
		}
	}
};










void A_Matrix::Get_Random_Undirected_Graph()
{

	int Size = get_Vertices();

	float Density = get_Density();

	int Edges = (Density * Size * (Size - 1)) / 2;


	for (int j = 0; j < Size; j++)
	{
		for (int i = 0; i < Size; i++)
		{
			_adj_matrix[j][i] = -100;
		}
	}


	srand(time(NULL));
	for (int i = 0; i < Edges; i++)
	{
		int StartVer_tmp = std::rand() % Size;
		int EndVer_tmp = std::rand() % Size;
		int Weigth_tmp = std::rand() % 100 - 50;

		
			if (_adj_matrix[StartVer_tmp][EndVer_tmp] == -100 && _adj_matrix[EndVer_tmp][StartVer_tmp] == -100 && StartVer_tmp != EndVer_tmp)
				{
					_adj_matrix[StartVer_tmp][EndVer_tmp] = Weigth_tmp;
					_adj_matrix[EndVer_tmp][StartVer_tmp] = Weigth_tmp;
				}
			else
				i--;
	}
 }




 void A_Matrix::Get_Random_Directed_Graph()
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
			_adj_matrix[StartVer_tmp][EndVer_tmp] = Weigth_tmp;
		}

}



 void A_Matrix::Prim_Algoritm()
 {
	 int Size = get_Vertices();

	 int Vertice = std::rand() % Size;

	 float Density = get_Density();

	 Edge_List* edge_list = new Edge_List;

	 int** tmp_arr = new int* [Size];
		for (int i = 0; i < Size; i++)
			 tmp_arr[i] = new int[Size];

	 for (int i = 0; i < Size; i++)
	 {
		 for (int j = 0; j < Size; j++)
				 tmp_arr[i][j] = 0;    
	 }



	 while (1)
	 {
		 int lowest_weight;
		 for (int i = 0; i < Size; i++)
		 {
			 if (_adj_matrix[Vertice][i] != -100)
				 edge_list->AddEdge(Vertice, i, _adj_matrix[Vertice][i]);
		 }

		 for (int i = 0; i < Size - 1; i++)
		 {
			 if (_adj_matrix[Vertice][i] < _adj_matrix[Vertice][i + 1])
				 lowest_weight = _adj_matrix[Vertice][i];
			 else
				 lowest_weight = _adj_matrix[Vertice][i + 1];
		 }

	 }
	 
 }

















 void A_Matrix::DisplayRow(const int& Vertice)
 {
	 int Vertices = get_Vertices();

	 for (int i = 0; i < Vertices; i++)
		{
		 if(_adj_matrix[Vertice][i] != -100)
			std::cout << Vertice << "->" << "Weight:" << _adj_matrix[Vertice][i] << "->" << i << std::endl;
		}
 }


 void A_Matrix::DisplayGraph()
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

		 DisplayRow(i);

		 }
 }















