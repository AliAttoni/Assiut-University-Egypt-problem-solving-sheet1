#include<iostream>
#define ll long long
using namespace std;

ll ReadNumber()
{
	ll Number = 0;
	cin >> Number;
	return Number;
}

long long Calculate_The_Multible(ll a, ll b, ll c, ll d)
{
	ll m = (a * b * c * d);
	return m;
}

int main()
{
	ll a, b, c, d;
	a = (ReadNumber() % 100);
	b = (ReadNumber() % 100);
	c = (ReadNumber() % 100);
	d = (ReadNumber() % 100);

	ll result =  Calculate_The_Multible(a, b, c, d) % 100;
	if (result < 10)
	{
		cout << "0" << result;
	}
	else
		cout << result;
}
