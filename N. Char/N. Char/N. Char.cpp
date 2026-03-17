#include<iostream>
using namespace std;

/*
between Capital and small letters 
32 digits like:
A = 65 
a = 97 
*/

char RaedCharacter()
{
	char Character;
	cin >> Character;
	return Character;
}

char Retrurn_LatterTo_Capital(char character)
{
	character -= 32;
	return char(character);
}

char Retrurn_LatterTo_Small(char character)
{
	character += 32;
	return char(character);
}

bool Is_Capital(char character)
{
	return (int)character <= 90;
}

void DisplaySolve(char Character)
{
	if (Is_Capital(Character))
	{
		cout << Retrurn_LatterTo_Small(Character) << endl;
	}
	else
	{
		cout << Retrurn_LatterTo_Capital(Character) << endl;
	}
}

int main()
{
	char Character = RaedCharacter();

	DisplaySolve(Character);
}