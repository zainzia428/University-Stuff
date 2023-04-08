#include <iostream>
using namespace std;

int maxOf3(int num1, int num2, int num3)
{
	if (num1 > num2)
	{
		if (num1 > num3)
			return num1;
		else
			return num3;
	}
	else
	{
		if (num2 > num3)
			return num2;
		else
			return num3;
	}
}

int minOf3(int num1, int num2, int num3)
{
	if (num1 < num2)
	{
		if (num1 < num3)
			return num1;
		else
			return num3;
	}
	else
	{
		if (num2 < num3)
			return num2;
		else
			return num3;
	}
}

int distrav(int spd)
{
	int dis = 0;
	dis = dis + spd;
	return dis;
}

void iseven(int num)
{
	if (num % 2 == 0)
		cout << num << " is even";
	else
		cout << num << " is odd";
}

int isprime(int num)
{
	if (num == 2 || num == 3 || num == 5 || num == 7)
		return 1;
	else if (num == 1 || num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
		return 0;
	else
		return 1;
}

int main()
{
	int a, b, c;
	cout << "Enter 3 distinct integers:\n";
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "\n";
	if (a == b || b == c || a == c)
		cout << "At least 2 of these integers are not distinct" << endl;
	else
	{
		cout << "The largest value is " << maxOf3(a, b, c) << endl;
		cout << "The smallest value is " << minOf3(a, b, c) << endl;
	}

	cout << "_______________________________________________________\n\n";

	int d, e, dis = 0;
	cout << "Enter average speed of vehicle in mph: ";
	cin >> d;
	cout << "Enter time taken in hours: ";
	cin >> e;
	dis = dis + distrav(d);
	for (int f = 1; f <= e; f++)
	{
		cout << f << ". " << dis << endl;
		dis = dis + distrav(d);
	}

	cout << "_______________________________________________________\n\n";

	int h;
	cout << "Enter a value: ";
	cin >> h;
	if (isprime(h) == 1)
		cout << "Your number is a prime number" << endl;
	else
		cout << "Your number is not a prime number" << endl;

	cout << "_______________________________________________________\n\n";
}