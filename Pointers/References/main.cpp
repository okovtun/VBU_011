#include<iostream>
using namespace std;
//References
void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int& ra = a;	//r - references
	ra += 3;
	cout << a << endl;
	cout << ra << endl;
	cout << &a << endl;
	cout << &ra << endl;
}