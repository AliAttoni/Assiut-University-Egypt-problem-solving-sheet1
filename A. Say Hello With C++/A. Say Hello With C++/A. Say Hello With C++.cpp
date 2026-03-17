#include<iostream>
using namespace std;

string Read_From_User_word()
{
	string name = "";
	cin >> name;
	return name;
}

int main()
{
	string name = "";
	name = Read_From_User_word();


	cout << "Hello," << " " << name << endl;
}