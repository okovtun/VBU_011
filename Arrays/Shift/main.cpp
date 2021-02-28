#include<iostream>
#include<Windows.h>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//Вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int number_of_shifts;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		/////////////////////////////////////////////////////
		//				Сдвиг массива на один элемент:
		int buffer = arr[0];	//Нулевой элемент сохраняем в буфере
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		/////////////////////////////////////////////////////
		system("CLS");	//Команда "CLS" (Clear Screen) выполняет очистку экрана.
		//Функция system(); позволяет вызвать любую команду командной строки Windows (Пуск-> Выполнить -> cmd)
		//Вывод сдвинутого массива на экран:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
		Sleep(1000);//Функция Sleep() приостанавливает выполнение программы на заданное число миллисекунд.
					//Функция Sleep() находится в библиотеке Windows.h
	}
}