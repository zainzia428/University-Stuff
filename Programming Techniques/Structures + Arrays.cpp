#include <iostream>
using namespace std;

int main()
{
	struct books
	{
		char name;
		int pages;
		float price;
	};
	struct books b[100];
	int a, n;
	cout << "Enter no. of books: ";
	cin >> n;
	for (a = 0; a < n; a++)
	{
		cout << "\n";
		cout << "Enter name of book " << a + 1 << ": ";
		cin >> b[a].name;
		cout << "Enter no. of pages of book " << a + 1 << ": ";
		cin >> b[a].pages;
		cout << "Enter price of book " << a + 1 << ": ";
		cin >> b[a].price;
	}

	

	for (a = 0; a < n; a++)
	{
		cout << "\n";
		cout << "Name of book " << a + 1 << " is " << b[a].name << ". ";
		cout << "It has " << b[a].pages << " pages. ";
		cout << "Its price is Rs." << b[a].price << ".\n";
	}
	cout << "\n";


	struct employee
	{
		char name[10];
		int age;
		float salary;
	};
	struct employee e1 = { "Ali", 22,36.5 }, e2, e3;

	//piece copy
	strcpy_s(e2.name, e1.name);
	e2.age = e1.age;
	e2.salary = e1.salary;
	cout << e2.name << e2.age;

	//copying all elements in one go
	e3 = e2;
	cout << e1.name << e1.age << e1.salary;
	cout << e2.name << e2.age << e2.salary;
	cout << e3.name << e3.age << e3.salary;
}