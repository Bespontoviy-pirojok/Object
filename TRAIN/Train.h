#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Train {
private:
	string station;
	int num;
	int time;

public:

	friend bool operator>(const Train& t, const Train& t1);
	friend bool operator<(const Train& t, const Train& t1);
	Train(string st, int n, int t);
	Train();
	friend ostream& operator<<(ostream& os, Train& t) {
		return os << t.station << " " << t.num << " " << t.time << "\n";
	}
	friend istream& operator>>(istream& os, Train& t) {

		return os >> t.station >> t.num >> t.time;
	}
	friend bool operator==(const Train& t, const string& t1);

	Train& operator=(const Train& T);
	
	Train(const Train& T); // copy constructor

	void Poisk(Train t[8], string st);
	



	void SOR(Train t[8]);
};
