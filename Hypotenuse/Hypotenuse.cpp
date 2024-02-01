// Hypotenuse.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

double calc(int a, int b) {
	double result = 0;
	result = sqrt((a * a) + (b * b));
	return result;
}

void process() {
	int a = 0;
	int b = 0;
	cout << "Please enter the length of one of the sides of the triangle: ";
	cin >> a;
	cout << "Please enter the length of the other side of the triangle: ";
	cin >> b;
	cout << "The hypotenuse of a triangle with sides length " << a << ", " << b << " = " << calc(a, b);
}

int main() {
	process();
	return 0;
}