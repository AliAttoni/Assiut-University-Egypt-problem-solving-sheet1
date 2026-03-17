#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0;
	cin >> Number;
	return Number;
}

int Get_MAX(int a, int b, int c)
{
	int Max_A_B = max(a, b);
	return max(Max_A_B, c);
}

int Get_MIN(int a, int b, int c)
{
	int Min_A_B = min(a, b);
	return min(Min_A_B, c);
}

void Display(int a, int b , int c )
{
	cout << Get_MIN(a,b,c) << " " << Get_MAX(a, b,c);
}

int main()
{
	int a = 0, b = 0, c = 0;

	a = ReadNumber();
	b = ReadNumber();
	c = ReadNumber();

	Display(a, b, c);
}