#include<iostream>
using namespace std;

//Прототипы  => *.h  - файл
//Реализации => *.cpp - файл
//Принимаемые/Передаваемые параметры
//int add(int a=0, int b, int c=0);

#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(int arr[], const int n);//Прототип функции или Объявление функции (Function declaration)
void Print(double arr[], const int n);//Прототип функции или Объявление функции (Function declaration)
void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftLeft(double arr[], const int n, const int number_of_shifts);
int  Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int  minValueIn(int arr[], const int n);
int  maxValueIn(int arr[], const int n);
void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello functions!" << endl;
	const int n = 5;
	int arr[n];
	//Заполняем массив случайными числами:
	//for (int i = 0; i < n; i++)
	//{
	//	arr[i] = rand();
	//	//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767.
	//}
	FillRand(arr, n, 400, 500);
	//Выводим массив на экран:
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;*/
	Print(arr, n);//Вызов функции (Function call) - исползование написанной ранее функции.
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Отсортированный массив: " << endl;
	Sort(arr, n);
	Print(arr, n);
	//Сдвиг массива на заданное число элементов:
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	//Выводим сдвинутого массив на экран:
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;*/
	Print(arr, n);

	//////////////////////////////////////////////////////////////////////

	const int m = 8;
	double brr[m];
	FillRand(brr, m, 200, 300);
	Print(brr, m);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//Заполняем массив случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767.
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	//Заполняем массив случайными числами:
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767.
	}
}


void Print(int arr[], const int n)//Реализация функции или Определение функции (Function definition)
{
	//Выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)//Реализация функции или Определение функции (Function definition)
{
	//Выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void ShiftLeft(int arr[], const int n, const int number_of_shifts)	//Сдвигает массивна заданное число элементов
{
	for (int i = 0; i < number_of_shifts; i++)	//Этот цикл сдвигает массив на number_of_shifts элементов
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, const int number_of_shifts)	//Сдвигает массивна заданное число элементов
{
	for (int i = 0; i < number_of_shifts; i++)	//Этот цикл сдвигает массив на number_of_shifts элементов
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
int  Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int  minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' ВЫБИРАЕТ элемент, в который нужно поместить минимальное значение.
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' ПЕРЕБИРАЕТ остальные элементы (правую часть массива) в поисках минимального значения.
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}