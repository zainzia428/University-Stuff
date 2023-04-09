#include <iostream>
using namespace std;

int main()
{
	int a, arr[10], srchno, n = 0;
	cout << "Enter 10 numbers:\n";
	for (a = 0; a < 10; a++)
		cin >> arr[a];
	cout << "\nEnter a number to search for in the array: ";
	cin >> srchno;
	for (a = 0; a < 10; a++)
		if (srchno == arr[a])
			n++;
	if (n > 0)
		cout << "This number is present in the array";
	else
		cout << "This number is not present in the array";
	cout << endl;

	cout << "_______________________________________________________________________\n\n";

	int b, brr[3][3] = {1, 2, 3, 2, 5, 6, 3, 6, 9};
	n = 0;
	for (a = 0; a < 3; a++)
		for (b = 0; b < 3; b++)
			if (brr[a][b] != brr[b][a])
				n++;
	if (n > 0)
		cout << "The given matrix is not symmetric";
	else
		cout << "The given matrix is symmetric";
	cout << endl;

	cout << "_______________________________________________________________________\n\n";

	char name[20], batch[3], roll[4];
	cout << "Enter your name: ";
	cin.getline(name, 20);
	cout << "Enter your batch: ";
	cin.getline(batch, 3);
	cout << "Enter your roll number: ";
	cin.getline(roll, 4);

	cout << name << "\nBatch " << batch << "\nRoll #: " << roll << endl;

	cout << "_______________________________________________________________________\n\n";

	char str[50];
	n = 0;
	a = 0;
	cout << "Enter a string (upto 50 charachters): ";
	cin.getline(str, 50);
	while (str[a] != '\0')
	{
		n++;
		a++;
	}
	cout << "No of characters in the string = " << n << endl;

	cout << "_______________________________________________________________________\n\n";

	char str2[15];
	for (a = 0; a < 15; a++)
		str2[a] = ' ';
	cout << "Enter a string (upto 15 characters): ";
	cin.getline(str2, 15);
	for (a = 0; a < 15; a++)
		cout << str2[a] << ' ';
	cout << endl;

	cout << "_______________________________________________________________________\n\n";

	char str3[50];
	int words = 1;
	cout << "Enter a string (upto 50 charachters): ";
	cin.getline(str3, 50);
	for (a = 0; a < 50; a++)
		if (str3[a] == ' ' || str3[a] == '\n' || str3[a] == '\t')
			words++;
	cout << "No. of words in the string = " << words << endl;

	cout << "_______________________________________________________________________\n\n";

	char str4[50];
	int vowels = 0;
	cout << "Enter a string (upto 50 charachters): ";
	cin.getline(str4, 50);
	for (a = 0; a < 50; a++)
		if (str4[a] == 'a' || str4[a] == 'e' || str4[a] == 'i' || str4[a] == 'o' || str4[a] == 'u')
			vowels++;
	cout << "No. of vowels in the string = " << vowels << endl;
}