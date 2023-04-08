#include <iostream>
using namespace std;

int main()
{
	int a;
	for (a = 1; a <= 10; a++)
	{
		cout << a << " ";
	}
	cout << endl;
	int sum;
	sum = 0;
	for (a = 1; a <= 10; a++)
	{
		sum = sum + a;
	}
	cout << "Sum = " << sum << endl;
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if ((num % 2 == 0 or num % 3 == 0 or num % 5 == 0 or num % 7 == 0) and (not(num == 2 or num == 3 or num == 5 or num == 7)))
	{
		cout << "This number is not prime" << endl;
	}
	else
	{
		cout << "This number is prime" << endl;
	}
	int n, sum2;
	sum2 = 0;
	cout << "Enter a number: ";
	cin >> n;
	for (a = 1; a <= n; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			sum2 = sum2 + b;
		}
	}
	cout << "Sum of series = " << sum2 << endl;
	int sum3;
	sum3 = 0;
	cout << "Enter a number: ";
	cin >> n;
	for (a = 1; a <= n; a++)
	{
		sum3 = sum3 + (a * a);
	}
	cout << "Sum of series = " << sum3 << endl;
	
	sum = 0;
	cout << "Enter n: ";
	cin >> n;
	for (int k = 0; k < n; k++)
	{
		sum = sum + (2*k);
		k++;
	}
	cout << "Sum of series = " << sum << endl;
	int m;
	sum = 0;
	cout << "Enter m: ";
	cin >> m;
	for (n = 0; n < m; n++)
	{
		sum = sum + ((2 * n) + n);
	}
	cout << "Sum of series = " << sum << endl;
	sum = 0;
	cout << "Enter m: ";
	cin >> m;
	for (n = 0; n < m; n++)
	{
		sum = sum + (n / (n * 3));
	}
	cout << "Sum of series = " << sum << endl;
	sum = 0;
	cout << "Enter m: ";
	cin >> m;
	for (n = 0; n < m; n++)
	{
		sum = sum + (n % (n + 1));
	}
	cout << "Sum of series = " << sum << endl;
}