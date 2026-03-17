#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	
	double aa = b * log(a);
	double bb = d * log(c);
	if (aa > bb)
		cout << "YES";
	else
		cout << "NO";
}