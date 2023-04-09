#include <iostream>
using namespace std;

int maxInRow(int arr[3][5], int r)
{
	int c, max;
	max = arr[r][0];
	for (c = 1; c < 5; c++)
	{
		if (max <= arr[r][c])
			max = arr[r][c];
	}
	return max;
}

int minInCol(int arr[3][5], int c)
{
	int r, min;
	min = arr[0][c];
	for (r = 1; r < 3; r++)
	{
		if (min >= arr[r][c])
			min = arr[r][c];
	}
	return min;
}

int maxof3(int a, int b, int c)
{
	int max;
	if (a > b && a > c)
		max = 0;
	else if (b > c && b > a)
		max = 1;
	else
		max = 2;
	return max;
}

int summaxof3(int a, int b, int c)
{
	int max;
	if (a > b && a > c)
		max = a;
	else if (b > c && b > a)
		max = b;
	else
		max = c;
	return max;
}

int main()
{
	cout << "TASK 7\n\n";
	// rows = routes | columns = days
	int bus[3][5], r, c, totalpass = 0, ttlr1 = 0, ttlr2 = 0, ttlr3 = 0;
	// read

	for (r = 0; r < 3; r++)
	{
		cout << "Enter no. of passengers for all days of route " << r + 1 << ":\n";
		for (c = 0; c < 5; c++)
			cin >> bus[r][c];
	}
	// print total passengers
	for (r = 0; r < 3; r++)
		for (c = 0; c < 5; c++)
			totalpass += bus[r][c];
	cout << "Total no. of passengers = " << totalpass << "\n";
	// print Monday passengers
	totalpass = 0;
	for (r = 0; r < 3; r++)
		totalpass += bus[r][0];
	cout << "Total no. of passengers on Monday = " << totalpass << "\n";
	// print route 1 passengers
	totalpass = 0;
	for (c = 0; c < 5; c++)
		totalpass += bus[0][c];
	cout << "Total no. of passengers on Route 1 = " << totalpass << "\n";
	// print max of route 3
	cout << "Max no. of passengers on Route 3 = " << maxInRow(bus, 2) << "\n";
	// print min of Thursday
	cout << "Min no. of passengers on Thursday = " << minInCol(bus, 3) << "\n";
	// print avg passengers
	for (r = 0; r < 3; r++)
		for (c = 0; c < 5; c++)
			totalpass += bus[r][c];
	cout << "Average no. of passengers = " << totalpass / 15 << "\n";
	// row with highest total
	for (c = 0; c < 5; c++)
	{
		ttlr1 += bus[0][c];
		ttlr2 += bus[1][c];
		ttlr3 += bus[2][c];
	}
	cout << "Row with largest no. passengers has index " << maxof3(ttlr1, ttlr2, ttlr3) << "\n";
	cout << "No. of passengers in that row = " << summaxof3(ttlr1, ttlr2, ttlr3) << "\n";
}
