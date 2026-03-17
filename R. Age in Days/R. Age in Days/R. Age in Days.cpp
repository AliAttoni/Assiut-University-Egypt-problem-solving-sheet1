#include<iostream>
using namespace std;

int Read_Age_inDay()
{
	int Number;
	cin >> Number;
	return Number; 
}

int CalculateNumberOf_YEAR(int& NumberDay)
{
	int YEARS = NumberDay / 365;
	NumberDay = NumberDay % 365;
	return YEARS;
}
int CalculateNumberOf_MONTH(int& NumberDay)
{
	int MONTH = NumberDay / 30;
	NumberDay %= 30;
	return MONTH;
}
void Print_Reslut(int NumberDay)
{
/*
1 years
1 months
5 days
*/

	cout << CalculateNumberOf_YEAR(NumberDay) << " years" << endl;
	cout << CalculateNumberOf_MONTH(NumberDay) << " months" << endl;
	cout << NumberDay << " days" << endl;
}

int main()
{
	int Days = 0;
	Days = Read_Age_inDay();


	Print_Reslut(Days);
}
