#include"FillRand.h"

void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	//Заполняем массив случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
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