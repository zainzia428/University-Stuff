#include <iostream>
using namespace std;

int strsize(char ch[])
{
	int a = 0, c = 0;
	;
	while (ch[a])
	{
		c++;
		a++;
	}
	return c;
}

int searchstr(char srchstr[], int srchlen, char str[], int strlen)
{
	int a, b, count;
	for (a = 0; a < strlen; a++)
	{
		count = 0;
		if (srchstr[count] == str[a])
			for (b = a; b < strlen - a; b++)
			{
				if (srchstr[count] == str[b])
					count++;
				if (count == srchlen)
					return 1;
			}
	}
	return 0;
}

void substring(char strin[], char str[], int start, int length)
{
	int a, b = 0;
	start--;
	for (a = start; a < start + length; a++)
	{
		strin[b] = str[a];
		b++;
	}
}

void concat(char str1[], char str2[], int str1len, int str2len)
{
	int a;
	for (a = 0; a < str2len; a++)
		str1[str1len + a] = str2[a];
	str1[str1len + str2len] = '\0';
}

int main()
{
	cout << "TASK 1\n\n";
	int a, count = 0, l1, l2, b;
	char str1[50], str2[50];
	cout << "Enter 1st string: ";
	cin.getline(str1, 50);
	cout << "Enter 2nd string: ";
	cin.getline(str2, 50);
	l1 = strsize(str1);
	l2 = strsize(str2);
	if (l1 > l2)
		b = l1;
	else
		b = l2;
	for (a = 0; a < b; a++)
		if (str1[a] == str2[a])
			count++;
	if (count == b)
		cout << "Both strings are equal\n";
	else
		cout << "The strings aren't equal\n";

	cout << "______________________________________________________________________________________\n\n";

	cout << "TASK 2\n\n";
	char str3[50], str4[50];
	int l3;
	cout << "Enter a string: ";
	cin.getline(str3, 50);
	l3 = strsize(str3);
	for (a = 0; a < l3; a++)
		str4[a] = str3[a];
	str4[l3] = '\0';
	cout << "Original string = " << str3 << "\n";
	cout << "Copied string = " << str4 << "\n";
	cout << "Characters copied = " << l3 << "\n";

	cout << "______________________________________________________________________________________\n\n";

	cout << "TASK 3\n\n";
	char str5[50], str6[50];
	int start, length;
	cout << "Enter a string: ";
	cin.getline(str5, 50);
	cout << "Enter start position: ";
	cin >> start;
	cout << "Enter length: ";
	cin >> length;
	for (a = 0; a < 49; a++)
		str6[a] = ' ';
	str6[49] = '\0';
	substring(str6, str5, start, length);
	cout << "\nSubstring = " << str6 << "\n";

	cout << "______________________________________________________________________________________\n\n";

	// Doesn't run sometimes. Will run everytime if all tasks above this are commented
	cout << "TASK 4\n\n";
	char str7[50], srchstr[50];
	int l7, ls, z;
	cout << "Enter string: ";
	cin.getline(str7, 50);
	cout << "Enter substring to search for: ";
	cin.getline(srchstr, 50);
	l7 = strsize(str7);
	ls = strsize(srchstr);
	if (searchstr(srchstr, ls, str7, l7))
		cout << "The substring exists in this string\n";
	else
		cout << "The substring does not exist in this string\n";

	cout << "______________________________________________________________________________________\n\n";

	cout << "Task 5\n\n";
	char str8[100], str9[50];
	int l8, l9;
	cout << "Enter 1st string: ";
	cin.getline(str8, 50);
	cout << "Enter 2nd string: ";
	cin.getline(str9, 50);
	l8 = strsize(str8);
	l9 = strsize(str9);
	concat(str8, str9, l8, l9);
	cout << str8 << "\n";

	cout << "______________________________________________________________________________________\n\n";

	cout << "TASK 6\n\n";
	char str10[50];
	int words = 0;
	cout << "Enter a string: ";
	cin.getline(str10, 50);
	for (z = 0; z < 50; z++)
		if (str10[z] == ' ' || str10[z] == '\n' || str10[z] == '\t')
			words++;
	words++;
	cout << "No. of words = " << words << "\n";
}
