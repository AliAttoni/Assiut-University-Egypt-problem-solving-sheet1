#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0; 
	cin >> Number; 
	return Number;
}
char ReadOperator()
{
	char op;
	cin >> op;
	return op;
}

string Make_Answer(int a, int b, char op)
{
	switch (op)
	{
	case '>':
		return (a > b) ? "Right" : "Wrong";
	case '<':
		return (a < b) ? "Right" : "Wrong";
	case '=' :
		return (a == b) ? "Right" : "Wrong";
	}
}

void Program()
{
	int A, B;
	char op;
	A = ReadNumber();
	op = ReadOperator();
	B = ReadNumber();
	cout << Make_Answer(A, B, op);
}


int main()
{
	Program();
}