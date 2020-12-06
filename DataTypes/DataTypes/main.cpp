#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//Variable - именованная область памяти, содержимое которой может изменяться 

	//type name;
	//1. bool (Boolean) true false
	//cout << true << endl;

	//2. char (Character) ASCII 256

	//3. unsigned signed
	/*short int 2B
	long int
	int
	long long int*/

	//cout << "Тип данных short занимает " << sizeof(short int) << " Байт памяти, и принимает занчения в диапазоне" << endl;
	//cout << "  signed short:" << SHRT_MIN << "\t" << SHRT_MAX << endl;
	//cout << "unsigned short:" << 0 << "\t" << USHRT_MAX << endl;

	//cout << sizeof(long long int) << endl;
	//cout << LLONG_MIN << "\t" << LLONG_MAX << endl;
	//cout << 0 << "\t" << ULLONG_MAX << endl;

	//unsigned int a = -2;
	////a = -a;
	//cout << a << endl;

	/*cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;*/


	/*double price_of_coffee;
	int number_of_cups;
	cout << "Введите стоимость кофе: ";
	cin >> price_of_coffee;
	cout << "Введите количество чашек: ";
	cin >> number_of_cups;
	double total_price = price_of_coffee * number_of_cups;
	cout << "Общая стоимость: " << total_price << endl;*/
	//проинициализировать
	//инициализация - присвоение начального значения

	int speed = 0;
	const int MAX_SPEED = 250;

	3;
	-3;
	8 - 3;
	8 * 3;
	//*3;

	/*cout << 7 / 5 << endl;
	cout << 7 % 5 << endl;
	cout << 5 % 7 << endl;
	double a = 2.5*2+3;
	cout << 2 % 2 << endl;*/
	int a, b, c;
	a = b = c = 0;

	const double PI = 3.14;
	//PI = 3.14157;

	//3. Increment / Decrement(++ / --)
	//int i = 0;
	//cout << ++i << endl;
	//++i;	//Prefix increment
	//i++;	//Postfix increment
	//--i;	//Prefix decrement
	//i--;	//Suffix decrement
	//int j = i++;
	//cout << j << endl;

	int i = 3;
	i = ++i + ++i;
	cout << i << endl;

	i = i + 5;
	cout << i << endl;
	i += 5;
	cout << i << endl;
}

/*
------------------------------

	Unary
	Binary
	Ternary
	3;
	a=b+c*d;

	3. Increment/Decrement (++/--)
	Increment (++) - это унарный оператор
	Decrement (--) -
------------------------------
*/