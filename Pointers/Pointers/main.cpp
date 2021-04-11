#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int* arr, const int n);

/*
-----------------------------------------------------------------
Pointer - это переменная, которая хранит адрес другой переменной.
Адрес - это число длиной 4 Байта, означающее порядковый номер Байта
в оперативной памяти.
-----------------------------------------------------------------
*/

//#define POINTERS_BASICS
//#define POINTERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;	//Получаем адрес переменной 'a' прямо при выводе.
	cout << pa << endl;	//Выводим адрес переменной 'a', хранящийся в указателе 'pa'.
	cout << *pa << endl;//Разименвываем указатель 'pa', и получаем значение по адресу.

	int* pb;	//Просто объявляем указатель, без инициализации.
	int b = 3;
	pb = &b;
	// (int) (int*)
	cout << *pb << endl;
#endif // POINTERS_BASICS

#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	short arr[n] = { 3, 5, 8, 13, 21 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << tab;
	}
	cout << endl;
#endif // POINTERS_AND_ARRAYS

	int n;	//Размер массива
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];	//Оператор new выделяет память для 'n' элементов указанного типа, 
							//в данном случае 'int' и возвращает адрес выделенной памяти.
							//Этот адрес мы присваиваем указателю 'arr'.
							//Указатель нужен чтобы сохранить адрес массива.
							//Оператор new выделяет непрерывный блок памяти

	FillRand(arr, n);
	Print(arr, n);
	
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	cout << typeid(arr).name() << endl;
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void Print(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}