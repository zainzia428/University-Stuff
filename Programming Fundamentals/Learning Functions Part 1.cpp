#include <iostream>
using namespace std;

double fact(double num)
{
	double f = 1;
	for (int c = 1; c <= num; c++)
		f = f * c;
	return f;
}

double sumfact(int num)
{
	double f = 0;
	for (int c = 1; c <= num; c++)
		f = f + fact(c);
	return f;
}

double sum(int num)
{
	double f = 0;
	for (int c = 1; c <= num; c++)
		f = f + c;
	return f;
}

double power(int b, int p)
{
	double f = 1;
	for (int c = 1; c <= p; c++)
		f = f * b;
	return f;
}

double sumpow(int num)
{
	double f = 0;
	for (int c = 1; c <= num; c++)
		f = f + power(c, 3);
	return f;
}

int main()
{
	int a;
	cout << "Enter value for factorial: ";
	cin >> a;
	cout << "\nThe factorial of " << a << " is " << fact(a) << endl;

	cout << "\n_________________________________________________________________________________________________________\n\n";

	double b;
	cout << "Enter value for sum: ";
	cin >> b;
	cout << "\nThe sum of no.s from 1! to " << b << "! is " << sum(b) << endl;

	cout << "\n_________________________________________________________________________________________________________\n\n";

	double c1;
	c1 = 3;
	cout << "\nThe sum of no.s from 1 to 3 is " << sumpow(c1) << endl;

	cout << "\n_________________________________________________________________________________________________________\n\n";

	double e, f;
	cout << "Enter value for factorial: ";
	cin >> e;
	cout << "Enter value for power of factorial: ";
	cin >> f;
	cout << "\nThe cube of the factorial is " << sumpow(fact(e)) << endl;

	cout << "\n_________________________________________________________________________________________________________\n\n";
}