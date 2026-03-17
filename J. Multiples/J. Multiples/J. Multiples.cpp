#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number = 0;
	cin >> Number;
	return Number;
}

bool IS_Multiple(int A, int B)
{
	return A % B == 0 ; 
}
bool IS_vice_versaMultiple(int A, int B)
{
	return B % A == 0 ; 
}

void Display(int A, int B)
{
	if (IS_Multiple(A, B) || IS_vice_versaMultiple(A, B))
	{
		cout << "Multiples" << endl;
	}
	else
	{
		cout << "No Multiples" << endl;
	}
}


int main()
{
	int A = 0, B = 0;
	 
	A = ReadNumber();
	B = ReadNumber();

	Display(A, B);
}