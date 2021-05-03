#include <iostream>
#include "Adjacency_List.h"
#include "Adjacency_Matrix.h"
#include <time.h>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>


int main()
{
	clock_t start, stop;
	long double czas;

	int num, num1;
	A_Matrix file_matrix;

	file_matrix.Read_Graph_From_File("graph_data.txt");
	file_matrix.DisplayGraph();
	




	/*
	while (1)
	{		
		std::cout << std::endl;
		std::cout << "Wybierz opcje: " << std::endl;
		std::cout << "1. Wybierz prace na grafie na podsatwie macierzy sasiedztwa" << std::endl;
		std::cout << "2. Wybierz prace na grafie na podsatwie listy siedztwa" << std::endl;
		std::cin >> num1;
		switch (num1)
		{
		case 1:
		{

			int size;
			float density;
			std::cout << "Podaj rozmiar grafu oraz jego gestosc" << std::endl;
			std::cout << "Rozmiar: ";
			std::cin >> size;
			std::cout << "Gestosc: ";
			std::cin >> density;
			A_Matrix* Graph_Matrix = new A_Matrix(size, density);
			

			while (1)
			{
			
				std::cout << std::endl;
				std::cout << "Wybierz opcje: " << std::endl;
				std::cout << "1. Wczytaj z pliku dane do grafu" << std::endl;
				std::cout << "2. Wpisz losowe wartosci do grafu " << std::endl;
				std::cout << "3. Wykonaj algorytm Dijkstry" << std::endl;
				std::cout << "4. Zapisz wynik algorytmu Dijkstry do pliku" << std::endl;;
				std::cout << "5. Wyswietl graf" << std::endl;
				std::cout << "6. Zresetuj graf" << std::endl;
				std::cout << "7. Wroc do glownego menu" << std::endl;
				std::cin >> num;
				std::cout << std::endl;
				switch (num)
				{
				case 1:
				{
			
				}
				break;
				case 2:
				{
					Graph_Matrix->Get_Random_Undirected_Graph();
				}
				break;
				case 3:
				{
					int vert;
					int num2;
					std::cout << " Podaj numer wierzcholka od ktorego chcesz liczyc najkrotsza sciezke: " << std::endl;
					std::cin >> vert;
					std::cout << " Czy chcesz wyswietlic wynik? " << std::endl;
					std::cout << std::endl;
					std::cout << "Wybierz opcje: " << std::endl;
					std::cout << "1. Tak" << std::endl;
					std::cout << "2. Nie" << std::endl;
					std::cin >> num2;
						switch (num2)
						{

						case 1:
							Graph_Matrix->DijkstraAlgoritm(vert,true);
							break;
						case 2:
							Graph_Matrix->DijkstraAlgoritm(vert, false);
							break;
						}
					
				}
				break;
				case 4:
				{


				}
				break;
				case 5:
				{
					Graph_Matrix->DisplayGraph();
				}
				break;
				case 6:
				{

				}
				case 7:
				{
					exit(1);
				}

				}
			}
		}
		break;
		//nastepny case swticha zewnetrznego
		case 2:
		{
			int size;
			float density;
			std::cout << "Podaj rozmiar grafu oraz jego gestosc" << std::endl;
			std::cout << "Rozmiar: ";
			std::cin >> size;
			std::cout << "Gestosc: ";
			std::cin >> density;
			A_List Graph_List(size, density);

			while (1)
			{
				std::cout << std::endl;
				std::cout << "Wybierz opcje: " << std::endl;
				std::cout << "1. Wczytaj z pliku dane do grafu" << std::endl;
				std::cout << "2. Wpisz losowe wartosci do grafu " << std::endl;
				std::cout << "3. Wykonaj algorytm Dijkstry" << std::endl;
				std::cout << "4. Zapisz wynik algorytmu Dijkstry do pliku" << std::endl;
				std::cout << "5. Wyswietl graf" << std::endl;
				std::cout << "6. Zresetuj graf" << std::endl;
				std::cout << "7. Wroc do glownego menu" << std::endl;
				std::cin >> num;
				std::cout << std::endl;
				switch (num)
				{
				case 1:
				{


				}
				break;
				case 2:
				{
					Graph_List.Get_Random_Undirected_Graph();
				}
				break;
				case 3:
				{



				}
				break;
				case 4:
				{


				}
				break;
				case 5:
				{
					Graph_List.DisplayGraph();
				}
				break;
				case 6:
				{

				}
				case 7:
				{
					exit(1);
				}


				}
				
			}
			break;
			

	}
	*/
	return 0;
}












