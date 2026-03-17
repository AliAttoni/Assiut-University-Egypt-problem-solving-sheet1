#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

float ReadNumber()
{
	float Number;
	cin >> Number;
	return Number;
}

float Calculate_Fraction_Part( float Number )
{
	float Intger_Part = 0;
	float Fraction_Part = modf(Number, &Intger_Part);
	return Fraction_Part;
}

void PrintResult(float Number)
{
	if (Calculate_Fraction_Part(Number) > 0)
	{
		cout << "float " << int(Number) << " " << Calculate_Fraction_Part(Number) << endl;
	}
	else
	{
		cout << "int " << int(Number) << endl;
	}
}

int main()
{
	cout << fixed << setprecision(3);
	float Number = 0;
	Number = ReadNumber();

	PrintResult(Number);
}