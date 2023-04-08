#include <iostream>
using namespace std;

double fact(int num)
{
	double f = 1;
	for (int c = 1; c <= num; c++)
	{
		f = f * c;
	}
	return f;
}

int power(int b, int p)
{
	int f = 1, c;
	for (c = 1; c <= p; c++)
	{
		f = f * b;
	}
	return f;
}

int main()
{
	int a, b = 0, c, i;
	cout << "Enter a number to check whether it is a prime number: ";
	cin >> c;
	a = c / 2;
	i = 2;
	while (i <= a)
	{
		if (c % i == 0)
		{
			cout << c << " is not a prime num\n";
			b = 1;
			break;
		}
		i++;
	}
	if (b == 0)
		cout << c << " is a prime num\n";

	cout << "Enter number to calculate its factorial: ";
	cin >> a;

	cout << fact(a) << endl;

	system("pause");
}
