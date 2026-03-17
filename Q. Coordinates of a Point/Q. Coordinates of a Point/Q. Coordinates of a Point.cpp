#include<iostream>
using namespace std;

float ReadNumber()
{
	float Number;
	cin >> Number;
	return Number;
}

void DisplayResult(float x, float y)
{
	if (x > 0 && y > 0)
	{
		cout << "Q1";
	}
	else if ((x > 0 && y < 0))
	{
		cout << "Q4";
	}
	else if (x < 0 && y > 0)
	{
		cout << "Q2";
	}
	else if (x < 0 && y < 0)
	{
		cout << "Q3";
	}
	else
	{
		if (x == 0 && y == 0)
			cout << "Origem" << endl;
		else if (x == 0 && y != 0)
		{
			cout << "Eixo Y";
		}
		else
			cout << "Eixo X";
	}

}
int main()
{
	float x, y;
	x = ReadNumber();
	y = ReadNumber();

	DisplayResult(x, y);
}