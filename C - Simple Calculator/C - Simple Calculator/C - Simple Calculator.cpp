//Simple Calculator
#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0;
	cin >> Number;
	return Number;
}

int main()
{
	int x = 0, y = 0;

	x = ReadNumber();
	y = ReadNumber();


	cout << x << " + " << y << " = " << y + x << endl;
	cout << x << " * " << y << " = " << (long long)y * x << endl;
	cout << x << " - " << y << " = " << x - y << endl;