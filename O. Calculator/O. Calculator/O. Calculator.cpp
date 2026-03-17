#include<iostream>
using namespace std;


int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

char ReadOperator()
{
	char character;
	cin >> character;
	return character;
}

int Calculate(int a, int b, char s)
{
	switch (s)
	{
	case '+':
		return a + b;
	case '-' :
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	}
}

void Display_Reslut(int Result)
{
	cout << Result << endl;
}

int main()
{
	int A, B;
	char S;

	A = ReadNumber();
	S = ReadOperator();
	B = ReadNumber();


	Display_Reslut(Calculate(A, B, S));
}