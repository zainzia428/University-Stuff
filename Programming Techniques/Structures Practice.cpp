#include <iostream>
using namespace std;

struct date
{
	int date;
	int month;
	int year;
};

struct book
{
	string title;
	string author;
	float cost;
	struct date dt;
};

void read(struct book bk[], int numbooks)
{
	int a;
	for (a = 0; a < numbooks; a++)
	{
		cout << "\n";
		cout << "Enter title of book " << a + 1 << ": ";
		cin >> bk[a].title;
		cout << "Enter author of book " << a + 1 << ": ";
		cin >> bk[a].author;
		cout << "Enter cost of book " << a + 1 << ": ";
		cin >> bk[a].cost;
		while (bk[a].cost < 0)
		{
			cout << "Please enter a valid cost: ";
			cin >> bk[a].cost;
		}
		cout << "Enter date of publication of book " << a + 1 << "\n";
		cout << "Date: ";
		cin >> bk[a].dt.date;
		while (bk[a].dt.date < 1 || bk[a].dt.date > 31)
		{
			cout << "Please enter a valid date: ";
			cin >> bk[a].dt.date;
		}
		cout << "Month: ";
		cin >> bk[a].dt.month;
		while (bk[a].dt.month < 1 || bk[a].dt.month > 12)
		{
			cout << "Please enter a valid month: ";
			cin >> bk[a].dt.month;
		}
		cout << "Year: ";
		cin >> bk[a].dt.year;
		while (bk[a].dt.year < 0 || bk[a].dt.year > 2020)
		{
			cout << "Please enter a valid year: ";
			cin >> bk[a].dt.year;
		}
	}
}

void display(struct book bk[], int numbooks)
{
	int a;
	for (a = 0; a < numbooks; a++)
	{
		cout << "\n";
		cout << "Title of book " << a + 1 << ": " << bk[a].title << "\n";
		cout << "Author of book " << a + 1 << ": " << bk[a].author << "\n";
		cout << "Cost of book " << a + 1 << ": " << bk[a].cost << "\n";
		cout << "Date of publication of book " << a + 1 << ": " << bk[a].dt.date << "/" << bk[a].dt.month << "/" << bk[a].dt.year << "\n";
	}
}

void dlt(struct book bk[], int numbooks)
{
	int a;
	for (a = 0; a < numbooks; a++)
	{
		bk[a].title = "***";
		bk[a].author = "***";
		bk[a].cost = -1;
		bk[a].dt.date = -1;
		bk[a].dt.month = -1;
		bk[a].dt.year = -1;
	}
}

int search(string srch, struct book bk[], int numbooks)
{
	int a;
	for (a = 0; a < numbooks; a++)
	{
		if (srch == bk[a].title || srch == bk[a].author)
			return a + 1;
	}
	return 0;
}

float calavg(struct book bk[], int numbooks)
{
	int a;
	float sum = 0;
	for (a = 0; a < numbooks; a++)
	{
		sum += bk[a].cost;
	}
	return sum;
}

int main()
{
	int input, numbooks, s;
	string srch;
	char ch1 = 218, ch2 = 196, ch3 = 191, ch4 = 179, ch5 = 192, ch6 = 217;
	struct book bk[50];
	cout << "Enter no. of books: ";
	cin >> numbooks;
	do
	{
		cout << ch1 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch3 << "\n";
		cout << ch4 << "Press (1) to enter book information\t" << ch4 << "\n";
		cout << ch4 << "Press (2) to display book information\t" << ch4 << "\n";
		cout << ch4 << "Press (3) to delete book information\t" << ch4 << "\n";
		cout << ch4 << "Press (4) to search book information\t" << ch4 << "\n";
		cout << ch4 << "Press (5) to calculate average cost\t" << ch4 << "\n";
		cout << ch4 << "Press (6) to exit the program\t\t" << ch4 << "\n";
		cout << ch5 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch2 << ch6 << "\n";
		cout << "Your input: ";
		cin >> input;
		while (input < 0 || input > 6)
		{
			cout << "Please enter a valid number: ";
			cin >> input;
		}
		switch (input)
		{
		case 1:
			read(bk, numbooks);
			break;
		case 2:
			display(bk, numbooks);
			break;
		case 3:
			dlt(bk, numbooks);
			break;
		case 4:
			cout << "Enter string to search for (by either title or author): ";
			cin >> srch;
			s = search(srch, bk, numbooks);
			if (s == 0)
				cout << "This information is not present in any book\n";
			else
				cout << "This information is present in book " << s << "\n";
			break;
		case 5:
			cout << "Average cost = " << calavg(bk, numbooks) << "\n";
			break;
		}
	} while (input != 6);
}
