#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define FIRST_CORNER	(char)218
#define SECOND_CORNER	(char)191
#define THIRD_CORNER	(char)192
#define FOURTH_CORNER	(char)217
#define HORIZ_LINE		(char)196<<(char)196
#define VERT_LINE		(char)179
#define SQUARE_WHITE	(char)219<<(char)219
#define SQUARE_BLACK	(char)32 << (char)32

//#define ASCII

void main()
{
#ifdef ASCII
	setlocale(LC_ALL, "Russian");
	cout << "Таблица символов:\n";
	setlocale(LC_ALL, "C");
	for (int i = 176; i < 224; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << i << "\t" << (char)i << " \n";
	}
#endif // ASCII

	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер доски: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			//cout << "* ";
			if (i == 0 && j == 0)cout << FIRST_CORNER;
			else if (i == 0 && j == n)cout << SECOND_CORNER;
			else if (i == n && j == 0)cout << THIRD_CORNER;
			else if (i == n && j == n)cout << FOURTH_CORNER;
			else if (i == 0 || i == n)cout << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			//else cout << ((i + j) % 2 == 0 ? SQUARE_WHITE : SQUARE_BLACK);
			else if ((i + j) % 2 == 0) cout << SQUARE_WHITE;
			else cout << "  ";

		}
		cout << endl;
	}
}