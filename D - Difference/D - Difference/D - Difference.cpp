#include<iostream>
#define ll long long
using namespace std;

ll ReadNumber()
{
	ll Number = 0;
	cin >> Number;
	return Number;
}

long long Calculate(ll A, ll B, ll C, ll D)
{
	long long  Calculate = A * B - C * D;
	return Calculate;
}

void Display(long long Result)
{
	cout << "Difference = " << Result << endl;
}

int main()
{
	ll A = 0, B = 0, C = 0, D = 0;
	A = ReadNumber();
	B = ReadNumber();
	C = ReadNumber();
	D = ReadNumber();

	long long Result = Calculate(A, B, C, D);

	Display(Result);
}