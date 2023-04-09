#include <iostream>
using namespace std;

struct book
{
	char name[25], author[25];
	int callno;
};

void display(char* s, char* t, int n)
{
	cout << *s << "\t" << *t << "\t" << n << "\n";
}

void display_2(struct book b)
{
	cout << b.name << "\t" << b.author << "\t" << b.callno << "\n";
}

int main()
{
	struct address
	{
		char phone[16], city[25];
		int pin;
	};
	struct emp
	{
		char name[25];
		struct address a;
	};
	struct emp e;
	cout << "Enter name: ";
	cin >> e.name;
	cout << "Enter phone no.: ";
	cin >> e.a.phone;
	cout << "Enter city: ";
	cin >> e.a.city;
	cout << "Enter pin: ";
	cin >> e.a.pin;
	cout << "\n";
	cout << "Name = " << e.name << "\n";
	cout << "Phone no. = " << e.a.phone << "\n";
	cout << "City = " << e.a.city << "\n";
	cout << "Pin = " << e.a.pin << "\n";

	cout << "___________________________________________________\n";

	struct book b1 = { "Let us C","YPK",101 }, * ptr;
	display(b1.name, b1.author, b1.callno);
	display_2(b1);

	cout << "___________________________________________________\n";

	ptr = &b1;
	cout << b1.name << "\t" << b1.author << "\t" << b1.callno << "\n";
	cout << ptr->name << "\t" << ptr->author << "\t" << ptr->callno << "\n";
}