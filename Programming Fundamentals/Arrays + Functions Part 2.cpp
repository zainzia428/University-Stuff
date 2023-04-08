
#include <iostream>
using namespace std;

void readtask1(int num[])
{
	for (int c = 0; c < 10; c++)
	{
		cin >> num[c];
		while (num[c] > 100 || num[c] < 1)
		{
			cout << "Please enter a number within the given range\n";
			cin >> num[c];
		}
	}
	cout << endl;
}

void searchindex(int num[], int arrsize)
{
	int a = 0, b;
	cout << "Enter a no. to search for in the array: ";
	cin >> b;
	for (int c = 0; c < arrsize; c++)
	{
		if (b == num[c])
		{
			cout << "Index in array = " << c << endl;
			a++;
		}
	}
	if (a == 0)
		cout << "Element not found" << endl;
}

void read(int num[], int arrsize)
{
	for (int c = 0; c < arrsize; c++)
		cin >> num[c];
	cout << endl;
}

void sumavg(int num[])
{
	float sum = 0, a = 0, avg;
	for (int c = 0; c < 6; c++)
	{
		if (num[c] > 0)
		{
			sum = sum + num[c];
			a++;
		}
	}
	avg = sum / a;
	cout << "\nSum = " << sum << endl;
	cout << "Average = " << avg << endl;
}

void negcount(int num[])
{
	int a = 0;
	for (int c = 0; c < 6; c++)
	{
		if (num[c] < 0)
			a++;
	}
	cout << "No. of negative numbers = " << a << endl;
}

void minindex(int num[])
{
	int a = 0;
	for (int c = 0; c < 6; c++)
	{
		if (num[a] >= num[c])
			a = c;
	}
	cout << "Index of minimum value = " << a << endl;
}

void appendtask3(int num1[], int num2[], int num3[])
{
	for (int c = 0; c < 5; c++)
	{
		num3[c] = num1[c];
		num3[c + 5] = num2[c];
	}
}

void appendtask4(int num1[], int num2[], int num3[])
{
	for (int c = 0; c < 5; c++)
	{
		num3[c] = num1[c];
		num3[9 - c] = num2[c];
	}
}

void appendtask5(int num1[], int num2[], int num3[])
{
	for (int c = 0; c < 5; c++)
	{
		num3[2 * c] = num1[c];
		num3[2 * c + 1] = num2[c];
	}
}

int main()
{
	int a[10];
	cout << "Enter a number between 1 and 100 for each array element:\n";
	readtask1(a);
	searchindex(a, 10);

	cout << "\n_________________________________________________________________________________\n\n";

	int c[6];
	cout << "Enter 6 real numbers:\n";
	read(c, 6);
	sumavg(c);
	negcount(c);
	minindex(c);

	cout << "\n_________________________________________________________________________________\n\n";

	int d[5], e[5], f[10];
	cout << "Enter values for 1st array:\n";
	read(d, 5);
	cout << "Enter values for 2nd array:\n";
	read(e, 5);
	appendtask3(d, e, f);
	for (int z = 0; z < 10; z++)
		cout << f[z];
	cout << endl;

	cout << "\n_________________________________________________________________________________\n\n";

	int g[5], h[5], i[10];
	cout << "Enter values for 1st array:\n";
	read(g, 5);
	cout << "Enter values for 2nd array:\n";
	read(h, 5);
	appendtask4(g, h, i);
	for (int y = 0; y < 10; y++)
		cout << i[y];
	cout << endl;

	cout << "\n_________________________________________________________________________________\n\n";

	int j[5], k[5], l[10];
	cout << "Enter values for 1st array:\n";
	read(j, 5);
	cout << "Enter values for 2nd array:\n";
	read(k, 5);
	appendtask5(j, k, l);
	for (int x = 0; x < 10; x++)
		cout << l[x];
	cout << endl;
}
