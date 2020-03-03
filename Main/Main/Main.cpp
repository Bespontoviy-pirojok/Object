#include "drop.h"

#include <iostream>
using namespace std;






int main()
{
	setlocale(0, "");
	int a, b, c, d;
	cout << "Введите числитель и знаменатель первой дроби, потом второй";
	cin >> a >> b >> c >> d;
	drop ab;
	drop cd;
	ab.Getdrop(a, b);
	cd.Getdrop(c,d);


	ab.nod(); 
	ab.Znam();	
	ab.ct();

	cd.nod(); 
	cd.Znam(); 
	cd.ct();

	

	drop S;
	S = ab + cd;
	S.ct();
	S.Znam();

	drop E;
	E = ab / cd;
	E.ct();

	drop X;
	X = ab * cd;
	X.ct();
	X.Znam();

	
	cout << "\n";


	
	if (S > X) { S.ct(); cout << " > "; X.ct(); }else{ S.ct(); cout << "<="; X.ct(); }
	cout << "\n";
	if (S < X) { S.ct(); cout << " < "; X.ct(); } else { S.ct(); cout << " >= "; X.ct(); }
	cout << "\n";
	if (S == X) { S.ct(); cout << " == "; X.ct(); }else { S.ct(); cout << " != "; X.ct(); }
	cout << "\n";
	if (S != X) { S.ct(); cout << " != "; X.ct(); } else { S.ct(); cout << " == "; X.ct(); }


	
	return 0;

    
}

