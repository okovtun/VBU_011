#include<iostream>
using namespace std;

#define что_заменить чем_заменить
#define offset "\t\t\t\t\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << offset << "В лесу родилась ёлочка,\n";
	cout << offset << "В лесу она росла,\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зеленая была.\n";
	cout << "\n";
	cout << offset << "В лесу родилась ёлочка,\n";
	cout << offset << "В лесу она росла,\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зеленая была.\n";
	cout << "\n";
	cout << offset << "Метель ей пела песенку:\n";
	cout << offset << "\"Спи, елочка, бай-бай!\"\n";
	cout << offset << "Мороз снежком укутывал:\n";
	cout << offset << "\"Смотри, не замерзай!\"\n";
	cout << "\n";
	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под елочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк\n";
	cout << offset << "Рысцою пробегал.\n";
	cout << "\n";
	cout << offset << "Чу!Снег по лесу частому\n";
	cout << offset << "Под полозом скрипит,\n";
	cout << offset << "Лошадка мохноногая\n";
	cout << offset << "Торопится, бежит.\n";
	cout << endl;  //for practice
	cout << offset << "Везет лошадка дровенки,\n";
	cout << offset << "А в дровнях старичок,\n";
	cout << offset << "Срубил он нашу елочку\n";
	cout << offset << "Под самый корешок.\n";  //for practice
	cout << endl;  //for practice
	cout << offset << "Теперь она, нарядная,\n";
	cout << offset << "Hа праздник к нам пришла\n";
	cout << offset << "И много, много радости\n";
	cout << offset << "Детишкам принесла!\n";

}