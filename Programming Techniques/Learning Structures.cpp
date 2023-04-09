#include <iostream>
using namespace std;

int main()
{
	struct book
	{
		char name;
		float price;
		int page;
	};
	struct book b1, b2, b3;

	cout << "Enter name, price & no. of pages of all 3 books respectively: \n";
	cin >> b1.name;
	cin >> b1.price;
	cin >> b1.page;
	cin >> b2.name;
	cin >> b2.price;
	cin >> b2.page;

	cout << "Name, price & no. of pages of book 1: " << b1.name << "\t" << b1.price << "\t" << b1.page << "\n";
	cout << "Name, price & no. of pages of book 2: " << b2.name << "\t" << b2.price << "\t" << b2.page << "\n";
}