#include <iostream>
using namespace std;

float absolute(float a)
{
	if (a >= 0)
	{
		return a;
	}
	else
	{
		a = -a;
		return a;
	}
}

float Max(float a, float b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}

float Min(float a, float b)
{
	if (a < b)
	{
		return a;
	}
	return b;

}

float isEqual(float a, float b)
{
	if (a == b)
	{
		cout << a << " is equal to " << b;
	}
	else
	{
		cout << a << " is not equal to " << b;
	}
	return 0;
}

int main()
{
	cout << "Function for absolute value\n\n";
	float ax;
	cout << "Enter a value: ";
	cin >> ax;

	cout << "Absolute of " << ax << " is " << absolute(ax) << "\n\n";

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

	cout << "Function for max value\n\n";
	float bx, cx, u;
	cout << "Enter first value: ";
	cin >> bx;
	cout << "Enter second value: ";
	cin >> cx;

	cout << "\n";
	u = max(bx, cx);
	cout << "The larger value is " << u << "\n";

	cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
	cout << "Function for lower value\n\n";
	float by, cy, v;
	cout << "Enter first value: ";
	cin >> by;
	cout << "Enter second value: ";
	cin >> cy;

	cout << "\n";
	v = min(by, cy);
	cout << "The smaller value is " << v << "\n";

	cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

	cout << "Function for equal values\n\n";
	float bz, cz, w;
	cout << "Enter first value: ";
	cin >> bz;
	cout << "Enter second value: ";
	cin >> cz;

	cout << "\n";
	isEqual(bz, cz);

	cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
}
