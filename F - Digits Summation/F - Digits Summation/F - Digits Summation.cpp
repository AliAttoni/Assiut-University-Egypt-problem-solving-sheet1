#include<iostream>
#define ll long long
using namespace std;

ll ReadNumber()
{
	ll Number = 0;
	cin >> Number;
	return Number;
}


ll Find_The_First_Digit(ll Number)
{
	return Number % 10;
}

int main()
{
	ll N = 0, M = 0;
	N = ReadNumber();
	M = ReadNumber();

	cout << Find_The_First_Digit(N) + Find_The_First_Digit(M) << endl;

}