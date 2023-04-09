#include <iostream>
using namespace std;

void ordinal(int a)
{
	a = a % 10;
	switch (a)
	{
	case 1:
		cout << "1st";
		break;
	case 2:
		cout << "2nd";
		break;
	case 3:
		cout << "3rd";
		break;
	default:
		cout << a << "th";
	}
}

float floatmod(float a, float b)
{
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	while (a >= b)
		a = a - b;
	if (a < 0)
		return -a;
	return a;
}

int main()
{
	struct distance
	{
		int feet;
		float inch;
	};
	int no_meas, add_ft, a;
	struct distance d[100], sum_m, temp;
	cout << "Enter no. of measurements: ";
	cin >> no_meas;
	for (a = 0; a < no_meas; a++)
	{
		cout << "For ";
		ordinal(a + 1);
		cout << " distance\n";
		cout << "Enter feet: ";
		cin >> d[a].feet;
		while (d[a].feet < 0)
		{
			cout << "Please enter a valid value: ";
			cin >> d[a].feet;
		}
		cout << "Enter inches: ";
		cin >> d[a].inch;
		while (d[a].inch < 0)
		{
			cout << "Please enter a valid value: ";
			cin >> d[a].inch;
		}
		cout << "\n";
	}
	sum_m.feet = 0;
	sum_m.inch = 0;
	for (a = 0; a < no_meas; a++)
	{
		sum_m.feet += d[a].feet;
		sum_m.inch += d[a].inch;
	}
	add_ft = (sum_m.inch) / 12;
	sum_m.inch = floatmod(sum_m.inch, 12);
	sum_m.feet += add_ft;
	cout << "\nSum of distances = " << sum_m.feet << "'-" << sum_m.inch << "\"\n";
}