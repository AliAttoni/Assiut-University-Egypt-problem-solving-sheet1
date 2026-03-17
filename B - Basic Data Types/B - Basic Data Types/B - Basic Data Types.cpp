#include<iostream>
#include<iomanip>
using namespace std;


int Read_Intger_Number()
{
	int Number = 0;
	cin >> Number;
	return Number;
}

long long Read_BigNumber_Bigger64Bit()
{
	long long Number = 0;
	cin >> Number;
	return Number;
}

char Read_Charcter()
{
	char character = 'a';
	cin >> character;
	return character;
}

float Read_floating_Number()
{
	float Number = 0;
	cin >> Number;
	return Number;
}

double Read_Bigger_Floating_Number()
{
	double Number = 0;
	cin >> Number;
	return Number;
}

void Display(int n, float f, double d, char x, long long l)
{
	cout << n << "\n" << l << "\n" << x << "\n" << f << "\n" << d << endl;
}

int main()
{
	//cout << fixed << setprecision(9);
	int Number_1 = 0;
	float Number_2 = 0;
	long long Number_3 = 0;
	double Number_4 = 0;
	char x = 'a';

	Number_1 = Read_Intger_Number();
	Number_3 = Read_BigNumber_Bigger64Bit();
	x = Read_Charcter();
	Number_2 = Read_floating_Number();
	Number_4 = Read_Bigger_Floating_Number();


	Display(Number_1, Number_2, Number_4, x, Number_3);
}