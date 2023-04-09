#include <iostream>
using namespace std;

struct employee
{
	string name, dept;
	int salary, id;
};

void read(employee* e, int num)
{
	int a;
	for (a = 0; a < num; a++)
	{
		cout << "\nEnter information of employee " << a + 1 << "\n";
		cout << "Name: ";
		cin >> e[a].name;
		cout << "Salary: ";
		cin >> e[a].salary;
		cout << "ID: ";
		cin >> e[a].id;
		cout << "Department: ";
		cin >> e[a].dept;
	}
}

void print(employee* e, int num)
{
	int a;
	for (a = 0; a < num; a++)
	{
		cout << "\nDisplaying information of employee " << a + 1 << "\n";
		cout << "Name: " << e[a].name << "\n";
		cout << "Salary: " << e[a].salary << "\n";
		cout << "ID: " << e[a].id << "\n";
		cout << "Department: " << e[a].dept << "\n";
	}
}

int main()
{
	struct employee em[100], * e;
	int num;
	cout << "Enter no. of employees: ";
	cin >> num;
	e = em;
	read(e, num);
	print(e, num);
}