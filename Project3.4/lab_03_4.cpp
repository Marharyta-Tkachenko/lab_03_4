// Lab_03_4.cpp
// < �������� ��������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 26

#include <iostream>

using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// ������������ � ����� ����

	if (((y >= (sqrt((R * R) - (x + R) * (x + R))) - R) && x <= 0 && y <= 0) || (y <= sqrt((2 * x * R) - (x * x))))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	system("pause");
	return 0; 
}