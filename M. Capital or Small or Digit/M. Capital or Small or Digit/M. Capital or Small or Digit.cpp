#include<iostream>
using namespace std;

char ReadCharacter()
{
	char character;
	cin >> character;
	return character;
}

bool Is_Digit(char Character)
{
	return (int(Character) > 47 && int(Character) < 59);
}

bool Is_ALPHA(char Character)
{
	return ((int(Character) >= 65 && int(Character) <= 90) || (int(Character) >= 97 && int(Character) <= 122));
}

bool Is_CAPITAL(char Character)
{
	return (int(Character) >= 65 && int(Character) <= 90);
}

bool Is_SMALL(char Character)
{
	return (int(Character) >= 97 && int(Character) <= 122);
}

void DisPlay(char Character)
{
	if (Is_Digit(Character))
	{
		cout << "IS DIGIT" << endl;
	}
	else
	{
		if (Is_ALPHA(Character))
		{
			cout << "ALPHA" << endl;
			if (Is_CAPITAL(Character))
			{
				cout << "IS CAPITAL" << endl;
			}
			else
			{
				cout << "IS SMALL" << endl;
			}
		}
	}
}

int main()
{
	char character = ReadCharacter();

	DisPlay(character);
}