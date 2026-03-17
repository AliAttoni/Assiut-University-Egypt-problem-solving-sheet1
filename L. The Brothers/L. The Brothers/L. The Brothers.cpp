#include<iostream>
using namespace std;

string ReadName()
{
	string name = "";
	cin >> name;
	return name;
}

bool Is_Brother(string last_Name1, string last_Name2)
{
	return last_Name1 == last_Name2;
}

void DispalyResult(string last_Name1, string last_Name2)
{
	if (Is_Brother(last_Name1, last_Name2))
		cout << "ARE Brothers";
	else
		cout << "NOT";
}

int main()
{
	string F1, L1, F2, L2;
	F1 = ReadName();
	L1 = ReadName();
	F2 = ReadName();
	L2 = ReadName();
	DispalyResult(L1, L2);
}