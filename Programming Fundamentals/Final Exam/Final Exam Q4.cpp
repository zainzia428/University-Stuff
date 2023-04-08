#include <iostream>
using namespace std;

int hg(int arr[7][7], int userarr[3][4])
{
	for (int a = 0; a < 3; a++)
		for (int b = 0; b < 4; b++)
			for (int c = 0; c < 7; c++)
				for (int d = 0; d < 7; d++)
					if (userarr[a][b] == arr[c][d] && userarr[a + 2][b + 3] == arr[c + 2][d + 3])
					{
						cout << "Starting index of your array in 7x7 array is (" << c << ", " << d << ")" << endl;
						return 0;
					}
}

int check(int arr[7][7], int userarr[3][4])
{
	int check[3][4];
	for (int a = 0; a < 3; a++)
		for (int b = 0; b < 4; b++)
			check[a][b] = 0;

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 4; b++)
		{
			for (int c = 0; c < 7; c++)
			{
				for (int d = 0; d < 7; d++)
				{
					if (userarr[a][b] == arr[c][d])
					{
						check[a][b] = 1;
					}
				}
			}
		}
	}
	for (int a = 0; a < 3; a++)
		for (int b = 0; b < 4; b++)
			if (check[a][b] != 1)
				return 0;
	return 1;
}

int main()
{
	int arr[7][7] = {{-10, 20, 30, -10, 42, -7, 28},
					 {34, -7, -10, 9, 15, 30, -15},
					 {19, 23, 30, -13, -16, 17, 10},
					 {31, 8, -10, -7, 32, 11, -21},
					 {-25, 11, 40, 15, 25, -8, 17},
					 {10, 18, 20, -5, 8, 32, 20},
					 {10, 6, 4, -18, -30, 19, 30}};
	int userarr[3][4];
	for (int a = 0; a < 3; a++)
		for (int b = 0; b < 4; b++)
		{
			cout << "Enter value for row " << a << " and col " << b << ": ";
			cin >> userarr[a][b];
		}
	int z = check(arr, userarr);
	if (z == 1)
		hg(arr, userarr);
	else
		cout << "Your array is not in the 7x7 array" << endl;
}
