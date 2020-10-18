// Lab_03_4.cpp
// < ткаченко маргарита >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 26

#include <iostream>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі

	if (((y >= (sqrt((R * R) - (x + R) * (x + R))) - R) && x <= 0 && y <= 0) || (y <= sqrt((2 * x * R) - (x * x))))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	system("pause");
	return 0; 
}