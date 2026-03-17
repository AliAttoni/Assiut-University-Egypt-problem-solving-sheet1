#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0; 
	cin >> Number;
	return Number;
}

bool IS_EVEN(int Number)
{
	return Number % 2 == 0;
}

void DisplayResult(int Number)
{
	Number /= 1000;
	if (IS_EVEN(Number))
		cout << "EVEN" << endl;
	else
		cout << "ODD" << endl;
}

int main()
{
	int Number = 0;
	Number = ReadNumber();

	DisplayResult(Number);
}