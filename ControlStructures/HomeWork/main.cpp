#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define FACTORIAL
//#define POWER
//#define ASCII
//#define CALC_IF
//#define CALC_SWITCH
#define SHOOTER

#define Escape		27
#define ARROW_UP	72
#define ARROW_DOWN	80
#define ARROW_LEFT	75
#define ARROW_RIGHT	77

#define delimiter "\n-------------------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined FACTORIAL
	//		5! = 1*2*3*4*5 = 120;
	int n;	//Число, вводимое с клавиатуры
	double f = 1;	//Факториал введенного числа
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
	DBL_MIN;
#endif

#if defined POWER
	double a;	//Основание степени
	int n;	//Показатель степени
	double N = 1;	//Степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif

#if defined ASCII
	cout << "ASCII-таблица одним for-ом:\n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	cout << "\n-----------------------------------------------\n";
	setlocale(LC_ALL, "Russian");
	cout << "ASCII-таблица вложеддным for-ом:\n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			cout << char(i * 16 + j) << " ";
		}
		cout << endl;
	}
#endif

#if defined CALC_IF
	//2+3
	double a, b;//Числа, вводмые с клавиатуры
	char s;		//Sign - знак операции
	double result = 0;
	cout << "Введите простое арифметическое выражение: "; cin >> a >> s >> b;
	if (s == '+')
	{
		result = a + b;
		cout << a << " " << s << " " << b << " = " << result << endl;
	}
	else if (s == '-')
	{
		if (a >= b)
		{
			result = a - b;
			cout << a << " " << s << " " << b << " = " << result << endl;
		}
		else cout << "Так делать НИЗЯ, два балаа!! И выдите из класса." << endl;
	}
	else if (s == '*')
	{
		//result = a * b;
		cout << a << " " << s << " " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		if (b != 0)
		{
			result = a / b;
			cout << a << " " << s << " " << b << " = " << a / b << endl;
		}
		else
		{
			cout << "Error: На ноль делить нельзя" << endl;
		}
	}
	else
	{
		cout << "Error: No operation" << endl;
	}

	//if (s == '+' || s == '-' || s == '*' || s == '/')
	//	cout << a << " " << s << " " << b << " = " << result << endl;
#endif

#ifdef SWITCH_SYNTAX
#define CONST_1 1
#define CONST_2 2
#define CONST_3 3
#define CONST_N N
	int var = 0;



	switch (var)
	{
	case CONST_1: code1; break;
	case CONST_2: code2; break;
		...........;
		...........;
		...........;
	case CONST_N: codeN; break;
	default: Default code;
	}
	//var - это переменная, по значению которой switch выбирает какой выриант кода (case) нужно выполнить;
	//case - случай, ситуация, вхождение.  
#endif // SWITCH_SYNTAX

#if defined CALC_SWITCH
	double a, b;//Числа, вводимые с клавиатуры
	char s;		//Sign - знак операции
	cout << "Введите простое арифметическое выражение: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': 
		if(b!=0)cout << a << " / " << b << " = " << a / b << endl; 
		else cout << "Error: На ноль делить нельзя" << endl;
		break;
	default: cout << "Error: No operation" << endl;
	}
#endif

#if defined SHOOTER
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		/*if (key == 'w' || key == 'W' || key == ARROW_UP)
			cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == ARROW_DOWN)
			cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == ARROW_LEFT)
			cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == ARROW_RIGHT)
			cout << "Вправо" << endl;
		else if (key == ' ')
			cout << "Шо тут думать, прыгать надо" << endl;
		else
			if(key != -32 && key != Escape)
				cout << "Error" << endl;*/

		switch (key)
		{
		case 'w':
		case 'W':
		case ARROW_UP: cout << "Вперед" << endl; break;
		case 's': 
		case 'S': 
		case ARROW_DOWN: cout << "Назад" << endl; break;
		case 'a': 
		case 'A': 
		case ARROW_LEFT: cout << "Влево" << endl; break;
		case 'd': 
		case 'D': 
		case ARROW_RIGHT: cout << "Вправо" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		case 13:  cout << "Огонь" << endl; break;
		case Escape: cout << "Exit" << endl;
		case -32:break;
		default:  cout << "Error" << endl;
		}
	} while (key != Escape);
#endif

}
