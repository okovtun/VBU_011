#include<iostream>
#include<conio.h>
using namespace std;

//Loop - Петля
/*

while - цикл с предусловием;
do...while - цикл с постусловием;
for - цикл на заданное число итераций

*/

#define PI 3.14

//#define WHILE_1
//#define WHILE_2
//#define DO_WHILE

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WHILE_1
	int n;	//Количество итераций
	int i = 0;	//Счетчик цикла
	cout << "Введите количество итераций: "; cin >> n;
	while (++i < n)
	{
		cout << i << " Hello World\n" << endl;
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	cout << (bool)0.000001 << endl;
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << endl;
	}
	cout << "Взлет" << endl;
	system("PAUSE");
	system("CLS");
	system("DIR");
	cout << "Hasta LaVista" << endl;
	3;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
#endif // WHILE_2

#ifdef DO_WHILE
	char key;	//Код клавиши
	do
	{
		key = _getch();	//Функция getch() ожидает нажатие клавиши, 
						//и возвращает ASCII-код нажатой клавиши.
						//Этот ASCII-код мы сохраняем в переменную key.
		//cout << (int)key << "\t" << key << endl;
	} while (key != 27);
#endif // DO_WHILE

	int number;	//Число, вводимое с клавиатуры
	cout << "Введите число: "; cin >> number;
	cout << number << endl;
	int reverse_number = 0;	//Число, записанне наоборот
	int buffer = number;	//Создаем копию введенного числа, 
							//чтобы число с клавиатуры не изменилось, 
							///дальше работаем с копией
	while (buffer)
	{
		reverse_number *= 10;
		reverse_number += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse_number << endl;
	if (number == reverse_number)
	{
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << "Maybe the next time" << endl;
	}
}