// Quadratic Equation.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int a, b, c, none; // Fst lib
	int D, x, y; // nxt lib
	cout << "Welcome to the Quadratic Equation!" << endl;
	cout << "Coded by ZeNyX" << endl;
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
	D = b ^ 2 - 4 * a*c; // func
	if (D > 0) {
		cout << "Your Discriminant is - " << D << endl;
	}
	if (D = 0) {
		cout << "Your Discriminant is - " << D << endl;
		cout << "You equation have one root!" << endl;
	}
	if (D < 0) {
		cout << "Your Discriminant is - " << D;
	cout << "No roots!";
}
		int x1, x2;
		x1 = (-b + sqrt(D)) / 2 * a;
		cout << "x1 = " << x1 << endl;
		x2 = (-b - sqrt(D)) / 2 * a;
		cout << "x2 = " << x2 << endl;
		cout << "Please push any key & press ENTER to close...";
		cin >> none;
    return 0;
}

