#include<iostream>
using namespace std;
int main()
{


	int a, b, c;
	cin >> a >> b >> c;

	long long a1, a2, a3;

	if (a > b)
	{
		if (a > c)
		{
			a3 = a;
			if (b > c)
			{
				a2 = b;
				a1 = c;
			}
			else
			{
				a2 = c;
				a1 = b;
			}
		}
		else
		{
			a3 = c;
			a2 = a;
			a1 = b;
		}
	}
	else
	{
		if (b > c)
		{
			a3 = b;
			if (a > c)
			{
				a2 = a;
				a1 = c;
			}
			else
			{
				a2 = c;
				a1 = a;
			}
		}
		else
		{
			a3 = c;
			a1 = a;
			a2 = b;
		}
	}

	cout << a1 << endl << a2 << endl << a3 << endl << endl;
	cout << a << endl << b << endl << c << endl;
}