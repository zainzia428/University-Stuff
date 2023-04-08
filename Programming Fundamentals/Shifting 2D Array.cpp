#include <iostream>
using namespace std;

void od2td(char str[25], char str2[5][5])
{
	int c = 0;
	for (int a = 0; a < 5; a++)
		for (int b = 4; b >= 0; b--)
		{
			for (c = 0; c < 5; c++)
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
}

void up(char arr[5][5])
{
	char temp;
	for (int a = 0; a < 5; a++)
	{
		temp = arr[a][0];
		for (int b = 0; b < 5; b++)
		{
			arr[a][b] = arr[a][b + 1];
		}
		arr[a][4] = temp;
	}
}

void down(char arr[5][5])
{
	char temp;
	for (int a = 0; a < 5; a++)
	{
		temp = arr[4 - a][4];
		for (int b = 0; b < 5; b++)
		{
			arr[4 - a][4 - b] = arr[4 - a][4 - (b + 1)];
		}
		arr[4 - a][0] = temp;
	}
}

void left(char arr[5][5])
{
	char temp;
	for (int a = 0; a < 5; a++)
	{
		temp = arr[0][a];
		for (int b = 0; b < 5; b++)
		{
			arr[b][a] = arr[b + 1][a];
		}
		arr[4][a] = temp;
	}
}

void right(char arr[5][5])
{
	char temp;
	for (int a = 0; a < 5; a++)
	{
		temp = arr[4][4 - a];
		for (int b = 0; b < 5; b++)
		{
			arr[4 - b][4 - a] = arr[4 - (b + 1)][4 - a];
		}
		arr[0][4 - a] = temp;
	}
}

char save(char saved, char move)
{
	if (move == 'w')
		saved = 'u';
	else if (move == 's')
		saved = 'd';
	else if (move == 'a')
		saved = 'l';
	else if (move == 'd')
		saved = 'r';
	return saved;
}

void shift(char arr[5][5], char move)
{
	if (move == 'w')
		up(arr);
	else if (move == 's')
		down(arr);
	else if (move == 'a')
		left(arr);
	else if (move == 'd')
		right(arr);
}

int main()
{
	int c = 0;
	char move, saved[50], scrambleArray[5][5], sent[26];
	for (int z = 0; z < 26; z++)
		sent[z] = ' ';
	for (int y = 0; y < 50; y++)
		saved[y] = ' ';
	cout << "Enter a string (upto 25 charachters long): ";
	cin.getline(sent, 26);
	od2td(sent, scrambleArray);
	for (int a = 0; a < 5; a++)
	{
		for (int b = 0; b < 5; b++)
			cout << scrambleArray[b][a];
		cout << endl;
	}
	do
	{
		cout << "_______________________";
		cout << "\nPress w to shift up\nPress s to shift down\nPress a to shift left\nPress d to shift right\nPress q to quit\n";
		cout << "_______________________\nYour input: ";
		cin >> move;
		cout << endl;
		while (move != 'q' && move != 'w' && move != 'a' && move != 's' && move != 'd')
		{
			cout << "Please enter a valid charachter: ";
			cin >> move;
		}
		shift(scrambleArray, move);
		saved[c] = save(saved[c], move);
		c++;
		if (move == 'q')
		{
			cout << "\nFinished sentence:\n";
			for (int e = 0; e < 5; e++)
				for (int f = 0; f < 5; f++)
					cout << scrambleArray[f][e];
			cout << endl;
		}
		else
		{
			for (int c = 0; c < 5; c++)
			{
				for (int d = 0; d < 5; d++)
					cout << scrambleArray[d][c];
				cout << endl;
			}
		}
	} while (move != 'q');

	cout << "\n\nEncryption Pattern = ";
	for (int x = 0; x < 50; x++)
		cout << saved[x];
	cout << "\n\n";
}