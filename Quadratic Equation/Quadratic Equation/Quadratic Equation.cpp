// Quadratic Equation.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int a, b, c, g;
	int D, x, y;
	cout << "Welcome to the Quadratic Equation!" << endl;
	cout << "Please enter A type - " << endl;
	cin >> a;
		cout << a << endl;
		cout << "Please enter B type - " << endl;
		cin >> b;
		cout << "Please enter C type - " << endl;
		cin >> c;
		cout << "A - " << a << endl;
		cout << "B - " << b << endl;
		cout << "C - " << c << endl;
		D = b^2-4*a*c;
		cout << D;
		cin >> g;
    return 0;
}

