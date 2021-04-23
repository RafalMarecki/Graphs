#include "Adjacency_Matrix.h"
#include <iostream>





 void A_Matrix::Get_Random_Graph()
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
			_adj_matrix[StartVer_tmp][EndVer_tmp] = Weigth_tmp;
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















