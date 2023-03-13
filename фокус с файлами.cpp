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
	{ 2000,4,"ivanovskii",
		2001,5,"serov",
		2000,3,"sidorov",
		1999,4, "savicin",
		2000,5,"ternova"
	};
	ifstream intt;
	ofstream outt("AT", ios_base::out);
	char a[] = "\n123\n";
	//cout << sizeof(t1) << '\n';
	//cout << t1;
	for (int i = 0; i < 5; i++)
	{
		outt << t1[i].year << "   " << t1[i].ball << "   " << t1[i].fio << "\n";
	}
	outt.close();
	z t2[5];
	intt.open("AT", ios_base::in);
	for (int i = 0; !intt.eof(); i++)
	{
		intt >> t2[i].year >> t2[i].ball >> t2[i].fio;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << t2[i].year << ' ' << t2[i].ball << ' ' << t2[i].fio << '\n';
	}
	intt.close();
}