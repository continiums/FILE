#include <fstream>
#include <iostream>
using namespace std;

struct z
{
	int year;
	int ball;
	char fio[20];
};

int main()
{
	z t1[5] =
	{
		2000,4,"ivanovskii",
		2002,3, "sidorov",
		2003,3, "savicin",
		2004,5, "ternova"
	};
	fstream outt;
	outt.open("AT", ios::in | ios::out);
	for (int i = 0; i < 5; i++)
	{
		cout << outt.tellp() << "+++++" << outt.tellg() << endl;
		outt << t1[i].year << ' ' << t1[i].ball << ' ' << t1[i].fio << ' ';
	}
	outt.close();
}