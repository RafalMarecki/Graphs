#include <iostream>
#include "Adjacency_List.h"
#include "Adjacency_Matrix.h"
#include <time.h>
#include <cstdlib>
#include <fstream>
#include <string>

int main()
{
	
	clock_t start, stop, start1, stop1;
	long double czas, czas1;
	int num, num1;
	int FirstVertice;

	while (1)
	{
	
		std::cout << std::endl;
		std::cout << "Wybierz opcje: " << std::endl;
		std::cout << "1. Wybierz prace na grafie na podstawie macierzy sasiedztwa" << std::endl;
		std::cout << "2. Wybierz prace na grafie na podstawie listy sasiedztwa" << std::endl;
		std::cin >> num1;
		switch (num1)
		{
		case 1:
		{
			A_Matrix Graph_Matrix;
			while (1)
			{

				std::cout << std::endl;
				std::cout << "Wybierz opcje: " << std::endl;
				std::cout << "1. Wczytaj z pliku dane do grafu" << std::endl;
				std::cout << "2. Wykonaj algorytm Dijkstry" << std::endl;
				std::cout << "3. Wyswietl graf" << std::endl;
				std::cout << "4. Zakoncz dzialanie programu" << std::endl;
				std::cin >> num;
				std::cout << std::endl;
				switch (num)
				{
				case 1:
				{
					FirstVertice = Graph_Matrix.Read_Graph_From_File("graph_data2.txt");
				}
				break;
				case 2:
				{
		
					int num2;
					std::cout << " Czy chcesz wyswietlic wynik? " << std::endl;
					std::cout << std::endl;
					std::cout << "Wybierz opcje: " << std::endl;
					std::cout << "1. Tak" << std::endl;
					std::cout << "2. Nie" << std::endl;
					std::cin >> num2;
					switch (num2)
					{

					case 1:
						start = clock();
						Graph_Matrix.DijkstraAlgoritm("graph_data.txt",FirstVertice, true, true);
						stop = clock();
						czas = (double)((double)stop - (double)start) / CLOCKS_PER_SEC;
						std::cout << "Czas operacji: " << czas << std::endl << std::endl;
						break;
					case 2:
						start = clock();
						//Graph_Matrix.DijkstraAlgoritm(FirstVertice, false);
						stop = clock();
						czas = (double)((double)stop - (double)start) / CLOCKS_PER_SEC;
						std::cout << "Czas operacji: " << czas << std::endl << std::endl;
						break;
					}

				}
				break;
				case 3:
				{
					Graph_Matrix.DisplayGraph();
				}
				break;
				case 4:
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
			A_List Graph_List;
			while (1)
			{
				std::cout << std::endl;
				std::cout << "Wybierz opcje: " << std::endl;
				std::cout << "1. Wczytaj z pliku dane do grafu" << std::endl;
				std::cout << "2. Wykonaj algorytm Dijkstry" << std::endl;
				std::cout << "3. Wyswietl graf" << std::endl;
				std::cout << "4. Zakoncz dzialanie programu" << std::endl;
				std::cin >> num;
				std::cout << std::endl;
				switch (num)
				{
				case 1:
				{
					FirstVertice = Graph_List.Read_Graph_From_File("graph_data2.txt");
				}
				break;
				case 2:
				{
					start = clock();
					//Graph_List.DijkstraAlgoritm(FirstVertice, true);
					stop = clock();
					czas = (double)((double)stop - (double)start) / CLOCKS_PER_SEC;
					std::cout << "Czas operacji: " << czas << std::endl << std::endl;

				}
				break;

				case 3:
				{
					Graph_List.DisplayGraph();
				}
				break;
				case 4:
				{
					exit(1);
				}
					
				}

			}
			break;


		}
		}
	}
	return 0;
}












