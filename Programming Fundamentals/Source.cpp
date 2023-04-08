// I have absolutely zero clue what I was trying to do here

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4;
	cout << "Enter 2 numbers: \n";
	cin >> num1;
	cin >> num2;

	num3 = 1;
	num4 = 2;

	num1 = num3;
	num2 = num4;

	num3 = num2;
	num4 = num1;

	cout << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " = " << (num1 + num2 + num3 + num4);
}
