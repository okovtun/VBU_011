#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;	//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
	/*for (;;)
	{
		cout << "Hello World";
	}*/
}

/*
--------------------

	2;
	int i = 0;
	for (counter; condition; expression)
	{
		group - of - statements;
	}
	cout << i << endl;
	for (Start; Stop; Step)
	{

	}




--------------------
*/