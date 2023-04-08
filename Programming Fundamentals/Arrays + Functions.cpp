#include <iostream>
using namespace std;

void readNames(int names[])
{
	for (int c = 0; c < 10; c++)
	{
		cin >> names[c];
	}
}

void printAll(int names[])
{
	for (int c = 0; c < 10; c++)
	{
		cout << names[c] << endl;
	}
}

void printRange(int names[], int start, int end)
{
	for (int c = start - 1; c < end; c++)			//Assuming the user starts counting fom 1
	{
		cout << names[c] << endl;
	}
}

void readEmployeeData(int IDs[], int gross[])
{
	for (int c = 0; c < 10; c++)
	{
		cout << "ID: ";
		cin >> IDs[c];
		cout << "Weekly gross pay: ";
		cin >> gross[c];
		cout << endl;
	}
}

void printEmployeeData(int IDs[], int gross[])
{
	cout << "ID No.			Weekly Gross Pay" << endl;
	for (int c = 0; c < 10; c++)
	{
		cout << IDs[c] << "			" << gross[c] << endl;
	}
}

void readNumbers(int numbers[])
{
	for (int c = 0; c < 10; c++)
	{
		cin >> numbers[c];
	}
}

void displaySmallest(int numbers[])
{
	int c, a = 0;
	if (numbers[0] <= numbers[1])
		a = numbers[0];
	else
		a = numbers[1];

	for (c = 1; c < 10; c++)
	{
		if (a <= numbers[c])
			a = a;
		else
			a = numbers[c];
	}
	cout << a;
}

void displayLargest(int numbers[])
{
	int c, a = 0;
	if (numbers[0] >= numbers[1])
		a = numbers[0];
	else
		a = numbers[1];

	for (c = 1; c < 10; c++)
	{
		if (a >= numbers[c])
			a = a;
		else
			a = numbers[c];
	}
	cout << a;
}

void readRainfall(int rain[])
{
	for (int c = 0; c < 12; c++)
	{
		cin >> rain[c];
	}
}

int totalRainfall(int rain[])
{
	int total = 0;
	for (int c = 0; c < 12; c++)
	{
		total = total + rain[c];
	}
	return total;
}

int avgRainfall(int rain[])
{
	int ttl, avg;
	ttl = totalRainfall(rain);
	avg = ttl / 12;
	return avg;
}

void lowestRainfall(int rain[])
{
	int a = 0;
	for (int c = 0; c < 12; c++)
	{
		if (rain[a] >= rain[c])
			a = c;
	}
	a++;
	cout << a;
}

void highestRainfall(int rain[])
{
	int a = 0;
	for (int c = 1; c < 12; c++)
	{
		if (rain[a] <= rain[c])
			a = c;
	}
	a++;
	cout << a;
}

int main()
{
	int a[10], start, end;
	cout << "Enter 10 integers: \n";
	readNames(a);
	cout << endl;
	printAll(a);
	cout << endl;
	cout << "Enter start and end range for printing the array respectively: \n";
	cin >> start >> end;
	cout << endl;
	printRange(a, start, end);

	cout << "\n_________________________________________________________________________\n\n";

	int b[10], c[10];
	cout << "Enter IDs and gross pays of each employee respectively: \n";
	readEmployeeData(b, c);
	cout << endl;
	printEmployeeData(b, c);
	cout << endl;

	cout << "\n_________________________________________________________________________\n\n";

	int d[10];
	cout << "Enter 10 numbers: \n";
	readNumbers(d);
	cout << "\nThe smallest number is: ";
	displaySmallest(d);
	cout << "\nThe largest number is: ";
	displayLargest(d);
	cout << endl;


	cout << "\n_________________________________________________________________________\n\n";

	int e[12];
	cout << "Enter rainfall for each month:\n";
	readRainfall(e);
	cout << "\nThe total rainfall for the year is " << totalRainfall(e) << endl;
	cout << "The average rainfall for the year is " << avgRainfall(e) << endl;
	cout << "The month with the highest rainfall is month ";
	highestRainfall(e);
	cout << "\nThe month with the lowest rainfall is month ";
	lowestRainfall(e);
	cout << endl;
}