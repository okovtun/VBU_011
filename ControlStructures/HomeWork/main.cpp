﻿#include<iostream>
using namespace std;

//#define TRIANGLE4
//#define RHOMBUS
#define CHESS
//#define ARRAYS

void main()
// Здравствуйте Олег. Сделала только последний треугольник
//Пыталась сделать ромб, беда в том что (пробелы, палки, потом снова пробелы...) 
//	--палки только две в строке, и они разные, для их вывода не нужен цикл.
//Пыталась спустить один треугольник под другой вообще билибирда получается.
//	--спускать нужно каждую строку
// чтобы после палок был пробел нужно условие?? НЕТ а потом оба этих треугольника отобразить зеркально?? 
//или я не права? Не совсем
// Шахматы--хотела сделать один большой квадрат из * а затем разбить его на 5*5 квадратиков 
//и расположить в шахматном порядке..Миссия провалилась..мне кажется 
// у меня неверное условие, а возможно и вся идея...
//-- Нет, как раз и идея и условие огонь, просто нужно было сразу +- делать, на звездах не видно.
////////////////////////////////////////////////////////////
// массив я прочитала, и ваш код на github посмотрела, вы не смотрите что в кругл.скоб. 
//пусто я и цифры записывала, но компилятор все время ругался на точки запятой..не поняла 
//буду еще читать
//Да, про массивы еще почитайте, это будет наша следующая тема.

#ifdef TRIANGLE4
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите число:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
#endif // TRIANGLE4

#ifdef RHOMBUS
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите число:"; cin >> n;
	//Проще и удобнее верхнюю часть ромба вывести в одном форе, а нижнюю в другом.
	//1) Верх:
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			//i+1 это косметика, просто убирает одну итерацию, и следовательно один пробел.
			cout << " ";
		}
		cout << "/";//Выводится 1 раз в строке, поэтому не в цикле
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		cout << "\\";//Почему два \ смотрите лекцию 1 (Escape-последовательности)
		cout << endl;
	}
	//2) Низ:
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << "\\";
		for (int j = i+1; j < n; j++)
		{
			cout << "  ";
		}
		cout << "/";
		cout << endl;
	}
}
#endif // RHOMBUS

#ifdef CHESS
{
	setlocale(LC_ALL, "");
	int n = 20;
	cout << "Введите число:"; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if ((i + j) % 2 == 0)
				cout << "+ ";
			else cout << "- ";
		}

	cout << endl;
	}
}

#endif // CHESS

#ifdef ARRAYS
int n[] = {  };
cout << n; cin >> n;


#endif // ARRAYS

