#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	/*if (temperature >= 0)
	{
		cout << "Тепло" << endl;
	}
	else
	{
		cout << "Хородно" << endl;
	}*/

	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 35)
	{
		cout << "Капец как жарко" << endl;
	}
	else if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -20)
	{
		cout << "Сильный Мороз" << endl;
	}
	else
	{
		cout << "Вы на серверном полюсе" << endl;
	}

	/*int number;
	cout << "Введите число: "; cin >> number;
	if (number >= 0 || number <= 10)
	{
		cout << "Цель поражена!" << endl;
	}
	else
	{
		cout << "Вы Firefox" << endl;
	}*/

	cout << "Для выхода нажмите Escape, для продолжения нажмите любую клавишу.\n";
	if (_getch() != 27)main();
}

/*if (Condition1)
{
	code1;
}
else if (Condition2)
{
	code2;
}
else ....
....
....
else if (ConditionN)
{
	codeN;
}
else
{
	default code;
}*/