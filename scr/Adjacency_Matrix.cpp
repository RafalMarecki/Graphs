#include "Adjacency_Matrix.h"
#include <iostream>
constexpr auto HIGH = 999999;


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
			_adj_matrix[j][i] = HIGH;
		}
	}



};


void A_Matrix::Get_Random_Undirected_Graph()
{

	int Size = get_Vertices();

	float Density = get_Density();

	int Edges = (Density * Size * (Size - 1)) / 2;

	srand(time(NULL));
	for (int i = 0; i < Edges; i++)
	{
		int StartVer_tmp = std::rand() % Size;
		int EndVer_tmp = std::rand() % Size;
		int Weigth_tmp = std::rand() % 10000+1;

		
			if (_adj_matrix[StartVer_tmp][EndVer_tmp] == HIGH && _adj_matrix[EndVer_tmp][StartVer_tmp] == HIGH && StartVer_tmp != EndVer_tmp)
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
			int Weigth_tmp = std::rand() % 10000 +1;
			_adj_matrix[StartVer_tmp][EndVer_tmp] = Weigth_tmp;
		}

}


 int A_Matrix::getNearest(int* tmp_dist, bool* visited)
 {
	 int Size = get_Vertices();

	 int minValue = HIGH;
	 int minNode = 0;

	 for (int i = 0; i < Size; i++)
		{
		 if (!visited[i] && tmp_dist[i] < minValue)
			{
				minValue = tmp_dist[i];
				minNode = i;
			}
		 }
	 return minNode;
 }


 void A_Matrix::DijkstraAlgoritm(int Vertice, bool ifPrint)
 {
	 int Size = get_Vertices();

	 int* parent = new int[Size];
	 int* tmp_dist = new int[Size];
	 for (int i = 0; i < Size; i++)
		{
			parent[i] = 0;
			tmp_dist[i] = HIGH;
		}
	 tmp_dist[Vertice] = 0;
	 parent[Vertice] = -1;


	 bool* visited = new bool[Size];
	 for (int i = 0; i < Size; i++)
			visited[i] = false;
	 


	 for (int i = 0; i < Size; i++)
	 {
		 int Nearest = getNearest(tmp_dist, visited);
		 visited[i] = true;

		 for (int j = 0; j < Size; j++)
			{
			 if (_adj_matrix[Nearest][j] != HIGH && tmp_dist[j] > tmp_dist[Nearest] + _adj_matrix[Nearest][j])
				{
					tmp_dist[j] = tmp_dist[Nearest] + _adj_matrix[Nearest][j];
					parent[j] = Nearest;
				}
			}

	 }
	 if(ifPrint == true)
	 DisplayShortestPaths(tmp_dist, parent);


	 delete[] visited;
	 delete[] tmp_dist;
	 delete[] parent;
 }

 void A_Matrix::DisplayShortestPaths(int* tmp_dist, int* parent)
 {
	 int Size = get_Vertices();

	 for (int i = 0; i < Size; i++) {
		 int temp = parent[i];
		 std::cout << i << " <- ";
		 while (temp != -1)
		 {
			 std::cout << temp << " <- ";
			 temp = parent[temp];
		 }
		 std::cout << "Distance: " << tmp_dist[i];
		 std::cout << std::endl;
	 }
 }


 void A_Matrix::DisplayRow(const int& Vertice)
 {
	 int Vertices = get_Vertices();

	 for (int i = 0; i < Vertices; i++)
		{
		 if(_adj_matrix[Vertice][i] != HIGH)
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



 /*
 A_Matrix A_Matrix::Prim_Algoritm(A_Matrix& MSTree)
 {
	 int Size = get_Vertices();

	 float Density = get_Density();

	 int Vertice = rand() % Size;

	 Edge_Priority_Queue* edge_priority_queue = new Edge_Priority_Queue;

	 bool** tmp_arr = new bool* [Size];
	 for (int i = 0; i < Size; i++)
		 tmp_arr[i] = new bool[Size];

	 for (int i = 0; i < Size; i++)
	 {
		 for (int j = 0; j < Size; j++)
			 tmp_arr[i][j] = false;
	 }


	 for (int j = 0; j < Size - 1; j++)
	 {
		 for (int i = 0; i < Size; i++)
		 {
			 if (_adj_matrix[Vertice][i] != -100 && tmp_arr[Vertice][i] == false && tmp_arr[i][Vertice] == false)
			 {
				 edge_priority_queue->Enqueue(Vertice, i, _adj_matrix[Vertice][i]);
			 }
		 }


		 int actual_begin = edge_priority_queue->get_begin_from_first();
		 int actual_end = edge_priority_queue->get_end_from_first();
		 int actual_weight = edge_priority_queue->get_weight_from_first();

		 if (tmp_arr[actual_begin][actual_end] == false && tmp_arr[actual_end][actual_begin] == false)
		 {
			 MSTree.get_matrix()[actual_begin][actual_end] = actual_weight;
			 MSTree.get_matrix()[actual_end][actual_begin] = actual_weight;
			 tmp_arr[actual_begin][actual_end] = true;
			 tmp_arr[actual_end][actual_begin] = true;
			 edge_priority_queue->Dequeue();
		 }
		 else
		 {
			 edge_priority_queue->Dequeue();
		 }

		 std::cout << "First: " << actual_begin << "Weight: " << MSTree.get_matrix()[actual_begin][actual_end] << "End: " << actual_end;


		 Vertice = actual_end;

	 }

	 return MSTree;
 }
 */












