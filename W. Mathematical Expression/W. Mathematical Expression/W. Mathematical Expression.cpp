#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0;
	cin >> Number;
	return Number;
}

char ReadOP()
{
	char op;
	cin >> op;
	return op;
}

int Calculate_Right_Answer(int a, int b, char op)
{
	switch (op)
	{
	case '+' :
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	}
}

bool Is_Right(int RightAnswer, int User_Answer)
{
	return RightAnswer == User_Answer;
}

void Program()
{
	int a, b , Right_Answer , User_Answer ;
	char op, eq;
	a = ReadNumber();
	op = ReadOP();
	b = ReadNumber();
	eq = ReadOP();
	User_Answer = ReadNumber();

	Right_Answer = Calculate_Right_Answer(a, b, op);

	if (Is_Right(Right_Answer, User_Answer))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << Right_Answer << endl;
	}
}
int main()
{
	Program();
}