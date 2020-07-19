/*
* Пользователь 	вводит с клавиатуры число.Вывести на 	экран символ с соответствующим кодом.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите число с клавиатуры: ";
	int a;
	cin >> a;
	cout << char(a) << " имеет ASCII код " << static_cast<int>(a) << endl;
	return 0;
}
