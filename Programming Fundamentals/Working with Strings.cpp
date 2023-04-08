#include <iostream>
#include <string.h>
using namespace std;

void printrvrsstr(char str2[50], char str[50])
{
	int len = strlen(str);
	for (int a = 0; a <= len; a++)
	{
		str2[a] = str[len - a];
	}
	for (int b = 0; b <= len; b++)
		cout << str2[b];
}

int noOfSpaces(char str[50])
{
	int z = 0;
	for (int a = 0; a < 50; a++)
	{
		if (str[a] == ' ')
		{
			z++;
		}
	}
	return z;
}

int noOfWords(char str[50])
{
	int z = 0;
	for (int a = 0; a < 50; a++)
	{
		if (str[a] == ' ')
			z++;
	}
	z++;
	return z;
}

void OneDArrayToTwoDArray(char str[25])
{
	char str2[5][5];
	for (int a = 0; a < 5; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			if (b == 0)
				str2[a][b] = str[a + b];
			else if (b == 1)
				str2[a][b] = str[a + b + 4];
			else if (b == 2)
				str2[a][b] = str[a + b + 8];
			else if (b == 3)
				str2[a][b] = str[a + b + 12];
			else if (b == 4)
				str2[a][b] = str[a + b + 16];
		}
	}
	for (int c = 0; c < 5; c++)
	{
		for (int d = 0; d < 5; d++)
		{
			cout << str2[d][c];
		}
		cout << endl;
	}
}

void rotate(char word[5], int pressed, int tms)
{
	char temp;
	for (int b = 0; b < tms; b++)
	{
		for (int a = 0; a < 5; a++)
		{
			if (pressed == 2)
			{
				if (a == 0)
					temp = word[4];
				if (a == 4)
					word[0] = temp;
				if (a != 4)
					word[4 - a] = word[4 - (a + 1)];
			}
			else if (pressed == 1)
			{
				if (a == 0)
					temp = word[0];
				if (a == 4)
					word[4] = temp;
				if (a != 4)
					word[a] = word[a + 1];
			}
		}
	}
	for (int c = 0; c < 5; c++)
		cout << word[c];
}

int main()
{
	char name[40];
	int l;
	cout << "Enter your full name: ";
	cin.getline(name, 40);
	l = strlen(name);
	cout << "Length of string = " << l << endl;

	cout << "\n___________________________________________________________\n\n";

	char fstnm[20], lstnm[10];
	cout << "Enter your first name: ";
	cin.getline(fstnm, 10);
	cout << "Enter your last name: ";
	cin.getline(lstnm, 10);
	strcat(fstnm, lstnm);
	cout << "Your full name is " << fstnm << endl; // No space in b/w

	cout << "\n___________________________________________________________\n\n";

	char a[50], b[50];
	cout << "Enter 1st string: ";
	cin.getline(a, 50);
	cout << "Enter 2nd string: ";
	cin.getline(b, 50);
	if (strcmp(a, b) > 0)
		cout << "String 2 is longer than string 1" << endl;
	else if (strcmp(a, b) < 0)
		cout << "String 1 is longer than string 2" << endl;
	else
		cout << "Both strings are equal in length" << endl;

	cout << "\n___________________________________________________________\n\n";

	char str[50], str2[50];
	cout << "Enter a string: ";
	cin.getline(str, 50);
	cout << "Original string: " << str << endl;
	cout << "Reverse string: ";
	printrvrsstr(str2, str);
	cout << endl;

	cout << "\n___________________________________________________________\n\n";

	char c[50];
	int sp, wrd;
	cout << "Enter a string: ";
	cin.getline(c, 50);
	sp = noOfSpaces(c);
	wrd = noOfWords(c);
	cout << "No. of spaces = " << sp << endl;
	cout << "No. of words = " << wrd << endl;

	cout << "\n___________________________________________________________\n\n";

	char d[25] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	cout << "Enter a string (upto 25 charachters): ";
	cin.getline(d, 25);
	cout << "Your string after converting to 2D array:\n";
	OneDArrayToTwoDArray(d);

	cout << "\n___________________________________________________________\n\n";

	char e[6] = {' ', ' ', ' ', ' ', ' ', '\0'};
	int f;
	cout << "Enter a word (upto 5 charachters): ";
	cin.getline(e, 6);
	cout << "Press 1 to rotate left\nPress 2 to rotate right" << endl;
	cin >> f;
	while (f < 1 || f > 2)
	{
		cout << "Please enter a valid number: ";
		cin >> f;
	}
	rotate(e, f, 1);

	cout << "\n___________________________________________________________\n\n";

	// Task 7 after being modified
	char g[6] = {' ', ' ', ' ', ' ', ' ', '\0'};
	int h, i;
	cout << "Enter a word (upto 5 charachters): ";
	cin.getline(g, 6);
	cout << "Press 1 to rotate left\nPress 2 to rotate right" << endl;
	cin >> h;
	while (h < 1 || h > 2)
	{
		cout << "Please enter a valid number: ";
		cin >> h;
	}
	cout << "How many times do you want to rotate?\n";
	cin >> i;
	rotate(g, h, i);
}
