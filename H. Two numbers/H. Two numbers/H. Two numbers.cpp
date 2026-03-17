#include<iostream>
#include<cmath>
using namespace std;

/*
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
*/
int ReadNumber()
{
	int Number = 0;
	cin >> Number;
	return Number;
}

void Display(int a, int b)
{
	float aDivb = (float)a / b;
	cout << "floor " << a << " / " << b << " = " << floor(aDivb) << endl ;
	cout << "ceil " << a << " / " << b << " = " << ceil(aDivb) << endl;
	cout << "round " << a << " / " << b << " = " << round(aDivb) << endl;
}

int main()
{
	int a = 0, b = 0;
	a = ReadNumber();
	b = ReadNumber();

	Display(a, b);
}