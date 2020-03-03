#include "drop.h"
#include <iostream>

void drop::nod()
{
	int a, b;
	a = ch; b = zn;
	while ((a != 0) && (b != 0)) {
		if (a > b)
		{
			a = a % b;
		}
		else { b = b % a; }
	}
	ch = ch / (a + b); zn = zn / (a + b);

}

void drop::Znam()
{
	if (zn == 0) { std::cout << "\n --Знаменатель равен нулю-- \n"; }


} 


void drop::evk(int a, int b)
{
	 ch=a; zn=b;
	
	while ((a != 0) && (b != 0)) {
		if (a > b)
		{
			a = a % b;
		}
		else { b = b % a; }
	}
	ch = ch / (a + b); zn = zn / (a + b);


}

void drop::ct()
{
	std::cout << ch << "/" << zn << " ";
}

void drop::Getdrop(int& _ch, int& _zn)
{  ch = _ch; zn = _zn; 
}

void drop::Setdrop(int _ch, int _zn)
{
	_ch = ch; _zn = zn;
}




	


drop operator+(const drop& dr1, const drop& dr2)
{
	drop sum;
	sum.ch = dr1.ch * dr2.zn + dr2.ch * dr1.zn;
	sum.zn = dr1.zn * dr2.zn;
	sum.nod();
	std::cout << " " << dr1.ch << "/" << dr1.zn << " + " << dr2.ch << "/" << dr2.zn << " = ";
	return(sum);
}

drop operator*(const drop& dr1, const drop& dr2)
{
	drop comps;
	comps.ch = dr1.ch * dr2.ch;
	comps.zn = dr1.zn * dr2.zn;
	comps.nod();

	std::cout<< " " << dr1.ch << "/" << dr1.zn << " * " << dr2.ch << "/" << dr2.zn << " = ";
	return (comps);
}

drop operator/(const drop& dr1, const drop& dr2)
{
	drop res;
	res.ch = dr1.ch * dr2.zn;
	res.zn = dr1.zn * dr2.ch;
	res.nod();
	std::cout << " " << dr1.ch << "/" << dr1.zn << " : " << dr2.ch << "/" << dr2.zn << " = ";
	return (res);
}

bool operator>(const drop& d1, const drop& d2)
{
	double del1 = (double)d1.ch / d1.zn;
	double del2 = (double)d2.ch / d2.zn;
	if (del1 > del2) { return true; }
	else { return false; }



	
}

bool operator<(const drop& d1, const drop& d2)
{
	double del1 = (double)d1.ch / d1.zn;
	double del2 = (double)d2.ch / d2.zn;
	if (del1 < del2) { return true; }
	else { return false; }
}

bool operator==(const drop& d1, const drop& d2)
{
	double del1 = (double)d1.ch / d1.zn;
	double del2 = (double)d2.ch / d2.zn;
	if (del1 == del2) { return true; }
	else { return false; }


	return false;
}

bool operator!=(const drop& d1, const drop& d2)
{
	double del1 = (double)d1.ch / d1.zn;
	double del2 = (double)d2.ch / d2.zn;
	if (del1 != del2) { return true; }
	else { return false; }
	return false;
}
