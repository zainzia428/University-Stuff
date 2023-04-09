#include <iostream>
using namespace std;

int main()
{
	int	grade, a, num;
	float avg = 0;
	cout << "Enter no. of students: ";
	cin >> num;
	for (a = 0; a < num; a++)
	{
		cout << "Grade of student " << a + 1 << ": ";
		cin >> grade;
		while (grade > 100 || grade < 0)
		{
			cout << "Please enter a valid grade: ";
			cin >> grade;
		}
		avg = avg + grade;
	}
	avg = avg / num;
	cout << "Class average = " << avg << endl;

	cout << "______________________________________________________________________________\n\n";

	int	pass = 0, fail = 0;
	cout << "Enter no. of students: ";
	cin >> num;
	for (a = 0; a < num; a++)
	{
		cout << "Enter grade of student " << a + 1 << ": ";
		cin >> grade;
		while (grade > 100 || grade < 0)
		{
			cout << "Please enter a valid grade: ";
			cin >> grade;
		}
		if (grade >= 50)
			pass++;
		else
			fail++;
	}
	if (pass > (8 * num) / 10)
		cout << "Good result" << endl;
	else
		cout << "Bad Result" << endl;

	cout << "______________________________________________________________________________\n\n";

	int b, row, col;
	cout << "Enter no. of rows: ";
	cin >> row;
	cout << "Enter no. of columns: ";
	cin >> col;
	for (a = 0; a < row; a++)
	{
		for (b = 0; b < col; b++)
			cout << "*";
		cout << endl;
	}
}
