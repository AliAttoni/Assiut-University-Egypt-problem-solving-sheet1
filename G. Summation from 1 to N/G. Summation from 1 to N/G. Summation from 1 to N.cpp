#include<iostream>
#define ll long long 

using namespace std;


ll ReadNumber()
{
	ll Number = 0;
	cin >> Number;
	return Number;
}

ll CalculateTheSum(ll Number)
{
	ll Sum = Number * (Number + 1) / 2;
	return Sum;
}

void DisplayResult(ll Result)
{
	cout << Result << endl;
}

int main()
{
	ll Number = 0;
	Number = ReadNumber();

	ll Sum = CalculateTheSum(Number);

	DisplayResult(Sum);
}