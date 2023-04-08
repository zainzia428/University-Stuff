#include <iostream>
using namespace std;

int main()
{
	//TASK 1
	int a, z;
	cout << "Enter no. of times you want your name to be printed: ";
	cin >> z;
	for (a = 0; a < z; a++)
		cout << "My name is Zain Zia" << endl;
	cout << "\n\n";
	cout << "_________________________________________________________________________________________\n\n";

	//TASK 2
	int b, y;
	cout << "Enter the number of the table you want to print: ";
	cin >> y;
	for (b = 1; b <= 10; b++)
		cout << y << " x " << b << " = " << (b * y) << endl;
	cout << "\n\n";
	cout << "_________________________________________________________________________________________\n\n";

	//TASK 3
	int c;
	for (c = 2; c <= 100; c = c + 2)
		cout << c << endl;
	cout << "\n\n";
	cout << "_________________________________________________________________________________________\n\n";

	//TASK 4
	int d;
	for (d = 1; d <= 20; d++)
		cout << (d * 5) << endl;
	cout << "\n\n";
	cout << "_________________________________________________________________________________________\n\n";

	//TASK 5
	int e;
	for (e = 1; e <= 50; e++)
	{
		cout << "Square of " << e << " = " << e * e << endl;
		cout << "Cube of " << e << " = " << e * e * e << endl;
		cout << "\n";
	}
	cout << "\n\n";
	cout << "_________________________________________________________________________________________\n\n";
}