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
	setlocale(LC_ALL, "ru");
	z t1[5] =
	{
		2000,4,"ivanovskii",
		2002,3, "sidorov",
		2003,3, "savicin",
		2004,5, "ternova"
	};
	z t2[5];
	fstream outt;
	outt.open("AT", ios::in | ios::out);
	for (int i = 0; i < 5; i++)
	{
		cout << "позиции " << i << "записи для записи:";
		cout << outt.tellp() << "+++++" << outt.tellg() << endl;
		outt << t1[i].year << ' ' << t1[i].ball << ' ' << t1[i].fio << ' ';
	}
	cout << "позиции после записи массива структур:";
	cout << outt.tellp() << "+++++" << outt.tellg() << endl;
	outt.seekg(0, ios_base::beg);
	cout << "позиции после перехода в начало файла";
	cout << outt.tellp() << "++++" << outt.tellg() << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "позиции" << i << "записи для чтения:";
		cout << outt.tellp() << "++++++" << outt.tellg() << endl;
		outt >> t2[i].year >> t2[i].ball >> t2[i].fio;
	}
}