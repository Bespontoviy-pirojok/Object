#include <string>
#include <iostream>
#include "Train.h"

using namespace std;



int main()
{
	setlocale(0, "");

	Train trains[8];
	ifstream in("Text.txt");                                  // ������ �� ���������� ����� ���������� � ������� � ����� � ������
	for (int i = 0; i < 8; i++) {
		in >> trains[i];
		cout << trains[i];
	}

	
	cout << "\n ��������������� ������ ������: \n";

	
	trains[8].SOR(trains);              // ����� ������� ���������� (��, ���������� ����� �������, �� ������ ���������� � �� ���� �������)




	for (int i = 0; i < 8; i++) {cout << trains[i];}            // ����� �� ����� ��������������� �������

	string st;
	

	trains[8].Poisk(trains,"������");
	
	trains[8].Poisk(trains, "�������");

	trains[8].Poisk(trains, "�����_N");



	return 0;
}