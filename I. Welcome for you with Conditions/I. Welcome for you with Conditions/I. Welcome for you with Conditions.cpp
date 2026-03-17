#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0 ;
	cin >> Number;
	return Number;
}

bool IsGreater_OR_Equal( int A , int B )
{
	return A >= B;
}

void Display_Result( int A , int B )
{
	if (IsGreater_OR_Equal(A, B))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

int main()
{
	int A = 0, B = 0;

	A = ReadNumber();
	B = ReadNumber();

	Display_Result(A, B);
}