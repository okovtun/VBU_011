#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };
	cout << int() << endl;	//Возвращает значение по умолчанию.
	//Выводим элементы массива на экран:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << "Введите значения элементов массива:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];	//Вводим значение текущего элемента с клавиатуры
	}
	//Вывод массива на экран:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//Вывод массива на экран в обратном порядке:
	for (int i = SIZE-1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	//int avg = sum / SIZE;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / SIZE << endl;
	
	//Поиск минимального и максимального значения в массиве:

}