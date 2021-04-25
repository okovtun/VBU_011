#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

int* push_back(int arr[], int& n, const int value);

void main()
{
	int array[5];
	//cout << typeid(array).name() << endl;
	FillRand(array, 5);
	setlocale(LC_ALL, "Russian");
	int n;	//размер массива
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "Введите добавляемое значение: "; cin >> value;

	arr = push_back(arr, n, value);

	Print(arr, n);

	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	cout << typeid(arr).name();
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

int* push_back(int* arr, int& n, const int value)
{
	//////////////////////////////////////////////////////////////////////////////////
	//Алгоритм переопределения массива

	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1]{};//{} - зануляют выделяемую память
	//2) Копируем содержимое исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Можно удалять исходный массив, так как, данные уже сохранены в другом месте:
	delete[] arr;
	//4) Подмеряем адрес старого массива, адресом нового массива:
	arr = buffer;

	//////////////////////////////////////////////////////////////////////////////////
	//5) И только после всего этого, в конце массива arr появляется элемент, 
	//	 в который можно положить значение
	arr[n] = value;
	n++;
	return arr;
	///////////////////////////////////////////////////////////////////////////////////
}