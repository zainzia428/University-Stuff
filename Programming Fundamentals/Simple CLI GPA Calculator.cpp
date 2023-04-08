#include <iostream>
using namespace std;

int main()
{
	int crdhrs1, crdhrs2, crdhrs3, crdhrs4, crdhrs5;
	float grade1, grade2, grade3, grade4, grade5, points1, points2, points3, points4, points5, gpa;
	string a, b, c, d, e;


	a = "Programming Fundamentals";
	b = "ICT";
	c = "Physics";
	d = "Calculus";
	e = "English";

	crdhrs1 = 4;
	crdhrs2 = 2;
	crdhrs3 = 3;
	crdhrs4 = 3;
	crdhrs5 = 3;
	//Subjects and crdhrs/points/grades are respective

	cout << "Key:\n";
	cout << "A = 4.00 |A- = 3.67 |B+ = 3.33 |B = 3.00 |B- = 2.67 |C+ = 2.33 |C = 2.00 |C- = 1.67 |D+ = 1.33 |D = 1.00 |F = 0.00\n\n\n";
	cout << "ENTER GRADES IN NUMERIC FORM\n\n";
	cout << "Enter grade in " << a << ": ";
	cin >> grade1;
	cout << "Enter grade in " << b << ": ";
	cin >> grade2;
	cout << "Enter grade in " << c << ": ";
	cin >> grade3;
	cout << "Enter grade in " << d << ": ";
	cin >> grade4;
	cout << "Enter grade in " << e << ": ";
	cin >> grade5;

	if (grade1 > 4 || grade1 < 0 || grade2 > 4 || grade2 < 0 || grade3 > 4 || grade3 < 0 || grade4 > 4 || grade4 < 0 || grade5 > 4 || grade5 < 0)
	{
		cout << "\n\n\tERROR. Please try again\n\n";
	}
	else
	{
		points1 = crdhrs1 * grade1;
		points2 = crdhrs2 * grade2;
		points3 = crdhrs3 * grade3;
		points4 = crdhrs4 * grade4;
		points5 = crdhrs5 * grade5;

		gpa = (points1 + points2 + points3 + points4 + points5) / (crdhrs1 + crdhrs2 + crdhrs3 + crdhrs4 + crdhrs5);

		if (gpa > 4 or gpa < 0)
		{
			cout << "\n\n\tERROR\n\n";
		}
		else
		{
			cout << "\n\nYour GPA is " << gpa << "\n\n";
		}
	}
}
