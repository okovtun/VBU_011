//NULLTerminatedLines
#include<iostream>
#include<Windows.h>
using namespace std;

#define tab "\t"

void InputLine(char str[], const int n);
int Length(char str[]);	//Возвращает размер строки
void to_upper(char str[]);	//Переводит строку в верхний регистр, т.е., все буквы делает заглавными
void to_lower(char str[]);	//Переводит строку в верхний регистр, т.е., все буквы делает заглавными
void capitalize(char str[]);//Первую букву каждого слова в предложении делает заглавной
void shrink(char str[]);	//Удаляет лишние пробелы из предложения, например:
							//Хорошо         живет     на     свете    Винни-Пух
							//Хорошо живет на свете Винни-Пух

void main()
{
	setlocale(LC_ALL, "Russian");
	//ASCII-символ с кодом 0   '\0'
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	//"Hello" - строковая константа
	/*char str[] = "Hello";
	cout << str << endl;
	cout << sizeof(str) << endl;
	cout << typeid(str).name() << endl;*/
	
	int t;
	cout << "Введите температуру:"; cin >> t;
	cout << (t > 0 ? "Тепло" : "Холодно") << endl;


	/*cout << (int)'A' << endl;
	cout << (int)'a' << endl;
	cout << (int)'A' - (int)'a' << endl;
	cout << 'A' - 'a' << endl;
	cout << (int)'ё' << endl;
	cout << (int)'Ё' << endl;
	cout << 'Ё' - 'ё' << endl;*/

	/*while ( condition )
	{
		....;
		....;
	}

	do
	{
		...;
		...;
	} while (condition);*/

	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	const int n = 20;
	char str[n] = {};
	cout << "Введите строку: ";
	//cin >> str;
	/*int a, b, c;
	cout << "Введите три числа: ";
	cin >> a >> b >> c;
	cout << a << tab << b << tab << c << endl;*/
	InputLine(str, n);
	cout << str << endl;
	cout << "Длина строки: " << Length(str) << " символов." << endl;
	cout << "Длина строки: " << strlen(str) << " символов." << endl;
	to_upper(str);
	cout << str << endl;
	//to_lower(str);
	//cout << str << endl;
	capitalize(str);
	cout << str << endl;
	shrink(str);
	cout << str << endl;
}

void InputLine(char str[], const int n)
{
	SetConsoleCP(1251);//CP - Code Page
	cin.getline(str, n);
	SetConsoleCP(866);
	/*cout << sizeof(str) << endl;
	cout << typeid(str).name() << endl;*/
}
int Length(char str[])
{
	int i = 0;	//Счетчик объявлен перед циклом, чтобы он существовал и после цикла, чтобы можно было вернуть
	for (; str[i]; i++);//Пустой цикл, его тело состоит из одного пустого выражения - ;
	//
	return i;
}

void to_upper(char str[])
{
	/*for (int i = 0; str[i]; i++)
	{
		if (
			str[i] >= 'a' && str[i] <= 'z' ||	//маленькие латинские буквы
			str[i] >= 'а' && str[i] <= 'я'		//маленькие русские буквы
			)
			str[i] -= 32;

		if (str[i] == 'ё')str[i] -= 16;
	}*/

	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
}

void to_lower(char str[])
{
	/*for (int i = 0; str[i]; i++)
	{
		if(
				str[i] >= 'A' && str[i] <= 'Z' ||
				str[i] >= 'А' && str[i] <= 'Я'
				)
			str[i] += 32;

		if (str[i] == 'Ё')str[i] += 16;
	}*/
	for (int i = 0; str[i]; i++)
		str[i] = tolower(str[i]);
}
void capitalize(char str[])
{
	to_lower(str);
	str[0] = toupper(str[0]);
	for (int i = 1; str[i]; i++)
	{
		if (str[i - 1] == ' ')str[i] = toupper(str[i]);
	}
}