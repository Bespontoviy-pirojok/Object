#include <string>
#include <iostream>
#include "Train.h"

using namespace std;



int main()
{
	setlocale(0, "");

	Train trains[8];
	ifstream in("Text.txt");                                  // Чтение из текстового файла информации о поездах и занос в массив
	for (int i = 0; i < 8; i++) {
		in >> trains[i];
		cout << trains[i];
	}

	
	cout << "\n Отсортированный массив данных: \n";

	
	trains[8].SOR(trains);              // Вызов функции сортировки (да, вызывается очень странно, но ничего адекватнее я не смог сделать)




	for (int i = 0; i < 8; i++) {cout << trains[i];}            // Вывод на экран отсортированных поездов

	string st;
	

	trains[8].Poisk(trains,"Куколд");
	
	trains[8].Poisk(trains, "Магадан");

	trains[8].Poisk(trains, "Город_N");



	return 0;
}