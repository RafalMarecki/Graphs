
#include "Adjacency_List.h"


//Nie dziala po indeksach
	//Edge_List::~Edge_List()
	//{
	//	int Vertices = get_Vertices();

	//	for (int i = 0; i < Vertices; i++)
	//		_edge_List[Vertices].DeleteList();


	//	delete[] _edge_List;
	//}
	A_List::A_List(const int& Vertices, const float& Density) : Graph(Vertices, Density)
	{

		_adj_List = new Ver_List[Vertices];

		for(int i = 0; i < Vertices; i++)
			{
			for (int j = 0; j < Vertices; j++)
					_adj_List[i].AddVertice(j, HIGH);
			}
	};

	 void A_List::Get_Random_Undirected_Graph()
		{
		 int Size = get_Vertices();

		 float Density = get_Density();

		 int Edges = (Density * Size * (Size - 1)) / 2;

		 srand(time(NULL));
		 for (int i = 0; i < Edges; i++)
		 {

			 int StartVer_tmp = std::rand() % Size;
			
			 int EndVer_tmp = std::rand() % Size;

			 while (StartVer_tmp == EndVer_tmp)
				 EndVer_tmp = std::rand() % Size;

			 int Weigth_tmp = std::rand() % 10000 +1;

			 if (StartVer_tmp != EndVer_tmp && _adj_List[StartVer_tmp][EndVer_tmp] == HIGH && _adj_List[EndVer_tmp][StartVer_tmp] == HIGH)
			 {
				 _adj_List[StartVer_tmp].ChangeWeight(EndVer_tmp, Weigth_tmp);

				 _adj_List[EndVer_tmp].ChangeWeight(StartVer_tmp, Weigth_tmp);
			 }
			 else
				 i--;

		 }
}

	 int A_List::getNearest(int* tmp_dist, bool* visited)
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


	 void A_List::DijkstraAlgoritm(int Vertice, bool ifPrint)
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
				 if (_adj_List[Nearest][j] != HIGH && tmp_dist[j] > tmp_dist[Nearest] + _adj_List[Nearest][j])
				 {
					 tmp_dist[j] = tmp_dist[Nearest] + _adj_List[Nearest][j];
					 parent[j] = Nearest;
				 }
			 }
		 }


		 if (ifPrint == true)
			 DisplayShortestPaths(tmp_dist, parent);


		 delete[] visited;
		 delete[] tmp_dist;
		 delete[] parent;
	 }


	 void A_List::DisplayShortestPaths(int* tmp_dist, int* parent)
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

	 void A_List::DisplaySingleList(const int& Vertice)
	 {
		 int Vertices = get_Vertices();

		 for (int i = 0; i < Vertices; i++)
		 {
			 if (_adj_List[Vertice][i] != HIGH)
				 std::cout << Vertice << "->" << "Weight:" << _adj_List[Vertice][i] << "->" << i << std::endl;
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

			 DisplaySingleList(i);

		 }
	 }
	






















