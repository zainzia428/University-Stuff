#include <iostream>
using namespace std;

void ordinal(int a)
{
	a = a % 10;
	switch (a)
	{
	case 1:
		cout << "1st";
		break;
	case 2:
		cout << "2nd";
		break;
	case 3:
		cout << "3rd";
		break;
	default:
		cout << a << "th";
	}
}

int main()
{
	//arr1 ---> rows = cities, columns = temperature
	int arr1[2][7], a, b;
	for (a = 0; a < 2; a++)
		for (b = 0; b < 7; b++)
		{
			cout << "Enter temperature for city " << a + 1 << " on day " << b + 1 << ": ";
			cin >> arr1[a][b];
		}
	cout << "\n";
	for (a = 0; a < 2; a++)
		for (b = 0; b < 7; b++)
		{
			cout << "City " << a + 1 << ", Day " << b + 1 << ": " << arr1[a][b] << "\n";
		}

		cout << "________________________________________________________________________________________________________________________\n\n";

	//arr2 ---> rows = students, columns = ID | roll# | marks
	int arr2[100][3], no_stu;
	float sum = 0;
	cout << "Enter no. of students: ";
	cin >> no_stu;
	while (no_stu < 0)
	{
		cout << "Please enter a valid value: ";
		cin >> no_stu;
	}
	for (a = 0; a < no_stu; a++)
	{
			cout << "Enter ID of student " << a + 1 << ": ";
			cin >> arr2[a][0];
			cout << "Enter roll# of student " << a + 1 << ": ";
			cin >> arr2[a][1];
			cout << "Enter marks of student " << a + 1 << ": ";
			cin >> arr2[a][2];
			sum = sum + arr2[a][2];
	}
	cout << "Average of marks = " << sum / no_stu << "\n";

	 cout << "________________________________________________________________________________________________________________________\n\n";

	int mat1[2][2], mat2[2][2], matsum[2][2];
	char ch1 = 218, ch2 = 179, ch3 = 192, ch4 = 191, ch5 = 217;
	cout << "For matrix 1:\n";
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			cout << "Enter value at position " << a << b << ": ";
			cin >> mat1[a][b];
		}
	}
	cout << "\nFor matrix 2:\n";
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			cout << "Enter value at position " << a << b << ": ";
			cin >> mat2[a][b];
			matsum[a][b] = mat1[a][b] + mat2[a][b];
		}
	}
	cout << ch1 << " " << mat1[0][0] << "\t" << mat1[0][1] << " " << ch4 << "\t\t" << ch1 << " " << mat2[0][0] << "\t" << mat2[0][1] << " " << ch4 << "\t\t" << ch1 << " " << matsum[0][0] << "\t" << matsum[0][1] << "  " << ch4 << "\n";
	cout << ch2 << "\t  " << ch2 << "\t +\t" << ch2 << "\t  " << ch2 << "\t=\t" << ch2 << "\t   " << ch2 << "\n";
	cout << ch3 << " " << mat1[1][0] << "\t" << mat1[1][1] << " " << ch5 << "\t\t" << ch3 << " " << mat2[1][0] << "\t" << mat2[1][1] << " " << ch5 << "\t\t" << ch3 << " " << matsum[1][0] << "\t" << matsum[1][1] << " " << ch5 << "\n";

	cout << "________________________________________________________________________________________________________________________\n\n";

	int arr3[2][3][2], c;
	cout << "Enter 12 values:\n";
	for (a = 0; a < 2; a++)
		for (b = 0; b < 3; b++)
			for (c = 0; c < 2; c++)
				cin >> arr3[a][b][c];
	cout << "\nDisplaying values:\n";
	for (a = 0; a < 2; a++)
		for (b = 0; b < 3; b++)
			for (c = 0; c < 2; c++)
				cout << "test[" << a << "][" << b << "][" << c << "] = " << arr3[a][b][c] << "\n";

	cout << "________________________________________________________________________________________________________________________\n\n";

	//arr4 ---> rows = players, columns = scores
	int arr4[4][5];
	for (a = 0; a < 4; a++)
		for (b = 0; b < 5; b++)
		{
			cout << "Enter score of player " << a << " in match " << b << ": ";
			cin >> arr4[a][b];
		}
	for (a = 0; a < 4; a++)
		for (b = 0; b < 5; b++)
			cout << "Score of player " << a << "in match " << b << " is " << arr4[a][b] << "\n";

	cout << "________________________________________________________________________________________________________________________\n\n";

	struct time
	{
		int hr, min, sec;
	};
	struct time start, stop, final;
	cout << "Enter start time:\n";
	cout << "Hours: ";
	cin >> start.hr;
	while (start.hr > 24 || start.hr < 0)
	{
		cout << "Please enter a valid time: ";
		cin >> start.hr;
	}
	cout << "Minutes: ";
	cin >> start.min;
	while (start.min > 60 || start.min < 0)
	{
		cout << "Please enter a valid time: ";
		cin >> start.min;
	}
	cout << "Seconds: ";
	cin >> start.sec;
	while (start.sec > 60 || start.sec < 0)
	{
		cout << "Please enter a valid time: ";
		cin >> start.sec;
	}
	cout << "\nEnter stop time:\n";
	cout << "Hours: ";
	cin >> stop.hr;
	while (stop.hr > 24 || stop.hr < 0)
	{
		cout << "Please enter a valid time: ";
		cin >> stop.hr;
	}
	cout << "Minutes: ";
	cin >> stop.min;
	while (stop.min > 60 || stop.min < 0)
	{
		cout << "Please enter a valid time: ";
		cin >> stop.min;
	}
	cout << "Seconds: ";
	cin >> stop.sec;
	while (stop.sec > 60 || stop.sec < 0)
	{
		cout << "Please enter a valid time: ";
		cin >> stop.sec;
	}

	final.hr = start.hr - stop.hr;
	final.min = start.min - stop.min;
	final.sec = start.sec - stop.sec;
	if (final.hr < 0)
		final.hr = -final.hr;
	if (final.min < 0)
		final.min = -final.min;
	if (final.sec < 0)
		final.sec = -final.sec;
	cout << "\nTime difference: " << start.hr << ":" << start.min << ":" << start.sec << " - " << stop.hr << ":" << stop.min << ":" << stop.sec << " = " << final.hr << ":" << final.min << ":" << final.sec << "\n";

	cout << "________________________________________________________________________________________________________________________\n\n";

	struct students
	{
		int marks;
		string name;
	};
	struct students stu[100];
	cout << "Enter no. of students: ";
	cin >> no_stu;	
	cout << "Enter information of students:\n\n";
	for (a = 0; a < no_stu; a++)
	{
		cout << "For roll# " << a + 1 << ",\n";
		cout << "Enter name: ";
		cin >> stu[a].name;
		cout << "Enter marks: ";
		cin >> stu[a].marks;
		while (stu[a].marks < 0 || stu[a].marks>100)
		{
			cout << "Please enter a valid no.: ";
			cin >> stu[a].marks;
		}
		cout << "\n";
	}
	cout << "\nDisplaying Info:\n\n";
	for (a = 0; a < no_stu; a++)
	{
		cout << "Roll number: " << a + 1 << "\n";
		cout << "Name: " << stu[a].name << "\n";
		cout << "Marks: " << stu[a].marks << "\n";
		cout << "\n";
	}

	cout << "________________________________________________________________________________________________________________________\n\n";

	struct distance
	{
		int feet;
		int inch;
	};
	int no_meas, add_ft;
	struct distance d[100], sum_m;
	cout << "Enter no. of measurements: ";
	cin >> no_meas;
	for (a = 0; a < no_meas; a++)
	{
		cout << "For ";
		ordinal(a + 1);
		cout << " distance\n";
		cout << "Enter feet: ";
		cin >> d[a].feet;
		while (d[a].feet < 0)
		{
			cout << "Please enter a valid value: ";
			cin >> d[a].feet;
		}
		cout << "Enter inches: ";
		cin >> d[a].inch;
		while (d[a].inch < 0)
		{
			cout << "Please enter a valid value: ";
			cin >> d[a].inch;
		}
		cout << "\n";
	}
	sum_m.feet = 0;
	sum_m.inch = 0;
	for (a = 0; a < no_meas; a++)
	{
		sum_m.feet += d[a].feet;
		sum_m.inch += d[a].inch;
	}
	add_ft = (sum_m.inch) / 12;
	sum_m.inch = sum_m.inch % 12;
	sum_m.feet += add_ft;
	cout << "\nSum of distances = " << sum_m.feet << "'-" << sum_m.inch << "\"\n";
}