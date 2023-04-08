#include <iostream>
using namespace std;

void getTotal(int arr[4][3])
{
	int ttl = 0;
	for (int a = 0; a < 4; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			ttl = ttl + arr[a][b];
		}
	}
	cout << "Total of all values in array = " << ttl << "\n\n";
}

void getAverage(int arr[4][3])
{
	float ttl = 0;
	for (int a = 0; a < 4; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			ttl = ttl + arr[a][b];
		}
	}
	float avg = ttl / 12;
	cout << "Average of all values in array = " << avg << "\n\n";
}

void getRowTotal(int arr[4][3], int row)
{
	int ttl = 0;
	for (int b = 0; b < 3; b++)
	{
		ttl = ttl + arr[row][b];
	}
	cout << "The total of all values in row " << row << " is " << ttl << "\n\n";
}

void getColumnTotal(int arr[4][3], int column)
{
	int ttl = 0;
	for (int b = 0; b < 4; b++)
	{
		ttl = ttl + arr[b][column];
	}
	cout << "The total of all values in column " << column << " is " << ttl << "\n\n";
}

void getHighestinRow(int arr[4][3], int row)
{
	int z = 0;
	for (int a = 0; a < 3; a++)
	{
		if (arr[row][a] > arr[row][z])
			z = a;
	}
	cout << "The highest value in row " << row << " is " << arr[row][z] << "\n\n";
}

void getLowestinRow(int arr[4][3], int row)
{
	int z = 0;
	for (int a = 0; a < 3; a++)
	{
		if (arr[row][a] < arr[row][z])
			z = a;
	}
	cout << "The lowest value in row " << row << " is " << arr[row][z] << "\n\n";
}

void getTranspose(int arr[4][3])
{
	int brr[3][4];
	for (int a = 0; a < 4; a++)
		for (int b = 0; b < 3; b++)
			brr[b][a] = arr[a][b];
	cout << "Array before being transposed:\n";
	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 3; y++)
			cout << arr[x][y] << "\t";
		cout << endl;
	}
	cout << "\nArray after being transposed:\n";
	for (int c = 0; c < 3; c++)
	{
		for (int d = 0; d < 4; d++)
			cout << brr[c][d] << "\t";
		cout << endl;
	}
	cout << endl;
}

void getAverage2(int arr[3][7])
{
	float ttl, avg;
	for (int a = 0; a < 7; a++)
	{
		ttl = 0;
		for (int b = 0; b < 3; b++)
		{
			ttl = ttl + arr[b][a];
		}
		avg = ttl / 3;
		cout << "Average for day " << a + 1 << " = " << avg << endl;
	}
}

void leastfood(int arr[3][7])
{
	int z = 0, y = 0, x = 0, m, n;
	for (int a = 0; a < 7; a++)
		if (arr[0][a] < arr[0][z])
			z = a;
	for (int b = 0; b < 7; b++)
		if (arr[1][b] < arr[1][y])
			y = b;
	for (int c = 0; c < 7; c++)
		if (arr[2][c] < arr[2][x])
			x = c;
	if (arr[0][z] < arr[1][y] && arr[0][z] < arr[2][x])
	{
		m = arr[0][z];
		n = 1;
	}
	else if (arr[1][y] < arr[0][z] && arr[1][y] < arr[2][y])
	{
		m = arr[1][y];
		n = 2;
	}
	else
	{
		m = arr[2][x];
		n = 3;
	}
	cout << "\nThe least amount of food eaten this week is " << m << " pounds by monkey " << n << endl;
}

void mostfood(int arr[3][7])
{
	int z = 0, y = 0, x = 0, m, n;
	for (int a = 0; a < 7; a++)
	{
		if (arr[0][a] > arr[0][z])
			z = a;
	}
	for (int b = 0; b < 7; b++)
	{
		if (arr[1][b] > arr[1][y])
			y = b;
	}
	for (int c = 0; c < 7; c++)
	{
		if (arr[2][c] > arr[2][x])
			x = c;
	}
	if (arr[0][z] > arr[1][y] && arr[0][z] > arr[2][x])
	{
		m = arr[0][z];
		n = 1;
	}
	else if (arr[1][y] > arr[0][z] && arr[1][y] > arr[2][y])
	{
		m = arr[1][y];
		n = 2;
	}
	else
	{
		m = arr[2][x];
		n = 3;
	}
	cout << "\nThe most amount of food eaten this week is " << m << " pounds by monkey " << n << endl;
}

int main()
{
	int arr[4][3];
	cout << "Enter values of the array rowwise:\n";
	for (int a = 0; a < 4; a++)
		for (int b = 0; b < 3; b++)
			cin >> arr[a][b];
	getTotal(arr);
	getAverage(arr);
	getRowTotal(arr, 3);
	getColumnTotal(arr, 2);
	getHighestinRow(arr, 3);
	getLowestinRow(arr, 3);
	getTranspose(arr);

	cout << "\n___________________________________________________________________________\n\n";

	int brr[3][7];
	for (int c = 0; c < 3; c++)
	{
		cout << "Enter the amount of food monkey " << c + 1 << " ate for each day:\n";
		for (int d = 0; d < 7; d++)
		{
			cin >> brr[c][d];
			while (brr[c][d] < 0)
			{
				cout << "Enter a valid amount:\n";
				cin >> brr[c][d];
			}
		}
	}
	getAverage2(brr);
	leastfood(brr);
	mostfood(brr);
}