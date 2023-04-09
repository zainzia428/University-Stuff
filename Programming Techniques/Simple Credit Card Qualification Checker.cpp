#include <iostream>
using namespace std;

void qualify()
{
	char check;
	float used;
	cout << "You qualify for a credit card. An interest of 12% will be applied on the used amount.\nWould you like to check your interest? Enter 'y' for yes and 'n' for no" << endl;
	cin >> check;
	while (check != 'y' && check != 'n')
	{
		cout << "Please enter a valid character: ";
		cin >> check;
	}
	if (check == 'y')
	{
		cout << "Enter used amount: ";
		cin >> used;
		used = (used * 12) / 100;
		cout << "Your interest is " << used << endl;
	}
}

void notqualify()
{
	cout << "You do not qualify for a credit card, either because your salary is too low, or because you do not have enough years of experience, or both." << endl;
}

void checkqualification()
{
	double salary;
	int years;
	cout << "Check whether you qualify for credit card" << endl;
	cout << "What is your salary?" << endl;
	cin >> salary;
	cout << "Enter no. of years spent working: ";
	cin >> years;
	if (salary >= 100000 && years >= 3)
		qualify();
	else
		notqualify();
}

int main()
{
	checkqualification();
}