#include<iostream>
using namespace std;

void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	Print(arr, n);

	//1) Вычисляем количество четных и нечетных значений в исходном массиве:
	int even_count = 0;	//количество четных элементов
	int odd_count = 0;	//количество нечетных элементов
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			even_count++;
		else
			odd_count++;
	}
	//2) Выделяем память для четных и нечетных элементов соответственно:
	int* even_arr = new int[even_count];
	int* odd_arr = new int[odd_count];
	//int - int
	//int* - указатель на int
	/*int *pointer1, *p2, *p3;
	cout << typeid(pointer1).name() << endl;
	cout << typeid(p2).name() << endl;*/
	//3) После того, как память выделена, можно копировать значения в соответствующие массивы:
	for (int i = 0, j = 0, k = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			even_arr[j++] = arr[i];
		else
			odd_arr[k++] = arr[i];
	}

	//4) Выводим полученные массивы на экран:
	Print(even_arr, even_count);
	Print(odd_arr, odd_count);

	delete[] odd_arr;
	delete[] even_arr;
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}