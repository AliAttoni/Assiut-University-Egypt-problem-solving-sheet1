#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


float Read_Number()
{
	float Number;
	cin >> Number;
	return Number;
}

double Calculate_Area_Circt(float R)
{
	double PI = 3.141592653;
	double Result = PI * R * R;
	return Result;
}

void Display_INfo(double Res)
{
	cout << Res << endl;
}

int main()
{
	float R = 0;
	R = Read_Number();
	cout << fixed << setprecision(9);

	Display_INfo(Calculate_Area_Circt(R));
}