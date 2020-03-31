#include "Train.h"
#include <string>
#include <iostream>
Train::Train(string st, int n, int t)
{
	this->station = st;
	this->num = n;
	this->time = t;


}

Train::Train()
{
	this->station = "";
}







Train& Train::operator=(const Train& T)
{
	station = T.station;
	num = T.num;
	time = T.time;
	return *this;

}

Train::Train(const Train& T) : station(T.station),num(T.num),time(T.time)
{
	cout << "copy constructor";
}

void Train::Poisk(Train t[8], string st)
{
	cout << "\nВ станцию " << st << " направляются:\n";
	Train G;
int	err = 0;
	for (int i = 0; i < 8; i++) {
		if (t[i].station == st) { G = t[i]; break; }
		else { err++; }
	}
	if (err == 8){ cout << "Данных о поездах, пребывающих в данную станцию, нет\n"; }
	else {
		err = 0;
		for (int i = 0; i < 8; i++) {
			if ((t[i].num == G.num) && (t[i].time < G.time)) {
				cout << t[i]<<"\n"; break;
			}
			else { err++; }
			}
		}
	if (err == 8) { cout << "Данных о поездах, пребывающих в данную станцию, нет\n"; }
	}












	bool operator>(const Train & t, const Train & t1){
		
	if (t.time > t1.time) { return true; }
	else { return false; }


}

bool operator<(const Train& t, const Train& t1)
{

	if (t.time < t1.time) { return true; }
	else { return false; }


}

bool operator==(const Train& t, const string& t1)
{ 
	if (t.station == t1) { return true; }
	else { return false; }
	 
}


void Train::SOR(Train t[8])                   // Функция сортировки
{
	
	Train f;
	
	for (int z = 0; z < 8; z++) {

		for (int i = 0; i < 8; i++) {
			if (t[i] > t[i + 1]) {
				f = t[i + 1]; t[i + 1] = t[i]; t[i] = f;
			}

		}

	}
	
	
}
