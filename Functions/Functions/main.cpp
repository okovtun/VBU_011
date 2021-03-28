#include<iostream>
using namespace std;

//Прототипы  => *.h  - файл
//Реализации => *.cpp - файл
//Принимаемые/Передаваемые параметры
//int add(int a=0, int b, int c=0);

/*
--------------------------------------------------
		Шаблоны функций (Function templates)
--------------------------------------------------
*/

#define tab "\t"

void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

template<typename T>//<---------Вот этого шаблона
void Print(T arr[], const int n);//здесь уже нет!

template<typename T>
void ShiftLeft(T arr[], const int n, const int number_of_shifts);
template<typename T>T Sum(T arr[], const int n);
template<typename T>double Avg(T arr[], const int n);
template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[], const int n);

template<typename T>void Sort(T arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello functions!" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n, 400, 500);
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
	Sort(brr, m);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);

	//////////////////////////////////////////////////////////////////////
	
	cout << "CHAR:\n";
	const int SIZE_CHAR = 10;
	char c_arr[SIZE_CHAR];
	FillRand(c_arr, SIZE_CHAR);
	Print(c_arr, SIZE_CHAR);
	//https://ru.wikipedia.org/wiki/%D0%92%D0%B5%D0%BD%D0%B3%D0%B5%D1%80%D1%81%D0%BA%D0%B0%D1%8F_%D0%BD%D0%BE%D1%82%D0%B0%D1%86%D0%B8%D1%8F
	//////////////////////////////////////////////////////////////////////

	cout << "FLOAT:" << endl;
	const int SIZE_FLOAT = 7;
	float f_arr[SIZE_FLOAT];
	FillRand(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);

	cout << "Сумма элементов массива: " << Sum(f_arr, SIZE_FLOAT) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(f_arr, SIZE_FLOAT) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "Отсортированный массив:\n";
	Sort(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(f_arr, SIZE_FLOAT, number_of_shifts);
	Print(f_arr, SIZE_FLOAT);
}

void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	//Заполняем массив случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() ;
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767.
	}
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
void FillRand(float arr[], const int n, int minRand, int maxRand)
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

template<typename T>void Print(T arr[], const int n)
{
	//Выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

template<typename T>void ShiftLeft(T arr[], const int n, const int number_of_shifts)	//Сдвигает массивна заданное число элементов
{
	for (int i = 0; i < number_of_shifts; i++)	//Этот цикл сдвигает массив на number_of_shifts элементов
	{
		T buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' ВЫБИРАЕТ элемент, в который нужно поместить минимальное значение.
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' ПЕРЕБИРАЕТ остальные элементы (правую часть массива) в поисках минимального значения.
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}