#include<iostream>
using namespace std;

float ReadNumber()
{
	float Number;
	cin >> Number;
	return Number;
}

void Scope_RES(float Number)
{
	if (Number >= 0 && Number <= 25)
	{
		cout << "Interval [0,25]" << endl;
	}
	else if (Number > 25 && Number <= 50)
	{
		cout << "Interval (25,50]" << endl;
	}
	else if (Number > 50 && Number <= 75)
	{
		cout << "Interval (50,75]" << endl;
	}
	else if (Number > 75 && Number <= 100)
	{
		cout << "Interval (75,100]" << endl;
	}
	else
	{
		cout << "Out of Intervals" << endl;
	}
}

int main()
{
	float Number;
	Number = ReadNumber();

	Scope_RES(Number);
}