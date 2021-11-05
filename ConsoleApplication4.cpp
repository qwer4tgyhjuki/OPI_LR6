#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int A, B, C;
	cout << "Введіть число A " << endl;
	cin >> A;
	cout << "Введіть число B " << endl;
	cin >> B;
	cout << "Введіть число C " << endl;
	cin >> C;

	(((A > 0) && (B < 0)) && (C < 0)) ? (cout << "Тільки одне з чисел є позитивним ") : (cout << "Не тільки одне з чисел є позитивним ");
	cout << "\nВведіть число A " << endl;
	cin >> A;
	cout << "Введіть число B " << endl;
	cin >> B;
	cout << "Введіть число C " << endl;
	cin >> C;

	(((A < 0) && (B > 0)) && (C < 0)) ? (cout << "Тільки одне з чисел є позитивним ") : (cout << "Не тільки одне з чисел є позитивним ");
	cout << "\nВведіть число A " << endl;
	cin >> A;
	cout << "Введіть число B " << endl;
	cin >> B;
	cout << "Введіть число C " << endl;
	cin >> C;

	(((A < 0) && (B < 0)) && (C > 0)) ? (cout << "Тільки одне з чисел є позитивним ") : (cout << "Не тільки одне з чисел є позитивним ");
}
