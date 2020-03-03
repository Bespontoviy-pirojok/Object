#pragma once



class drop
{private:
	int ch;
	int zn;
public:
	void nod();
	
	friend drop operator+(const drop& ch1, const drop& zn1);
	friend drop operator*(const drop& dr1, const drop& dr2);
	friend drop operator/(const drop& dr1, const drop& dr2);
	void Znam();
	void evk(int a, int b);
	void ct();
	void Getdrop(int& _ch, int& _zn);
	void Setdrop(int _ch, int _zn);
	friend bool operator>(const  drop& d1, const drop& d2);
	friend bool operator<(const  drop& d1, const drop& d2);
	friend bool operator==(const  drop& d1, const drop& d2);
	friend bool operator!=(const  drop& d1, const drop& d2);


};

