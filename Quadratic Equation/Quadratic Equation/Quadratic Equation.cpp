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
	cout << "Me in GitHub - https://github.com/ZeNyX" << endl;
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
		
		int x1, xx;
		x1 = (-b + sqrt(D)) / 2 * a;
		xx = (-b - sqrt(D)) / 2 * a;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << xx << endl;
	}
	if (D == 0) {
		cout << "Your Discriminant is - " << D << endl;
		cout << "You equation have one root!" << endl;
		
		int x1, xx;
		x1 = (-b + sqrt(D)) / 2 * a;
		xx = (-b - sqrt(D)) / 2 * a;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << xx << endl;
	}
	if (D < 0) {
		cout << "Your Discriminant is - " << D;
	cout << "No roots!";
}
		cout << "Please push any key & press ENTER to close...";
		cin >> none;

    return 0;
}

