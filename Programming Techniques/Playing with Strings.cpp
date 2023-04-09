#include <iostream>
#include <string>
using namespace std;

int sizeOfStr(string str)
{
	int a = 0;
	while (str[a] != '\0')
		a++;
	return a;
}

void printRvrsStr(string str, int strsize)
{
	if (strsize < 0)
		;
	else
	{
		cout << str[strsize];
		printRvrsStr(str, strsize - 1);
	}
}

int sumOfNat(int num)
{
	if (num == 0)
		return 0;
	else
		return num + sumOfNat(num - 1);
}

int isPal(string str, int strsize, int i, int x)
{
	if (strsize == 0)
		;
	else if (str[i] == str[strsize - 1])
		x = isPal(str, strsize - 1, i + 1, ++x);
	return x;
}

int maxArr(int arr[], int n)
{
	if (n == 1)
		return arr[0];
	if (arr[n - 1] > maxArr(arr, n - 1))
		return arr[n - 1];
	else
		return maxArr(arr, n - 1);
}

int compStr(string str1, string str2, int a)
{
	if (str1[a] >= 65 && str1[a] <= 90)
		str1[a] = str1[a] + 32;
	if (str2[a] >= 65 && str2[a] <= 90)
		str2[a] = str2[a] + 32;

	if (str1[a] != str2[a])
	{
		if (str1[a] == '\0' && str2[a] != '\0')
			return 2;
		else if (str1[a] != '\0' && str2[a] == '\0')
			return 3;
		return 0;
	}
	else
	{
		if (str1[a] == '\0' && str2[a] == '\0')
			return 1;
		return 1 * compStr(str1, str2, a + 1);
	}
}

int sumOfDigits(int num)
{
	if (num == 0)
		return num;
	else
		return num % 10 + sumOfDigits(num / 10);
}

int main()
{
	int num1, a;
	cout << "Enter ending value: ";
	cin >> num1;
	for (a = 1; a < num1; a++)
		cout << a << " + ";
	cout << num1 << " = " << sumOfNat(num1) << "\n";

	cout << "________________________________________________________________________________________________________________________\n";

	string str1;
	int strsize;
	cout << "Enter string: ";
	getline(cin, str1);
	strsize = sizeOfStr(str1);
	printRvrsStr(str1, strsize);
	cout << "\n";

	cout << "________________________________________________________________________________________________________________________\n";

	string str2;
	int i = 0, x = 0;
	cout << "Enter string: ";
	getline(cin, str2);
	strsize = sizeOfStr(str2);
	if (isPal(str2, strsize, i, x) == strsize)
		cout << "This string is a palindrome\n";
	else
		cout << "This string is not a palindrome\n";

	cout << "________________________________________________________________________________________________________________________\n";

	int arr[10], a;
	cout << "Enter 10 integers:\n";
	for (a = 0; a < 10; a++)
		cin >> arr[a];
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Max element in array = " << maxArr(arr, n) << "\n";

	cout << "________________________________________________________________________________________________________________________\n";

	string str3, str4;
	a = 0;
	cout << "Enter 1st string: ";
	cin >> str3;
	cout << "Enter 2nd string: ";
	cin >> str4;
	switch (compStr(str3, str4, a))
	{
	case 0:
		cout << "These strings are not equal\n";
		break;
	case 1:
		cout << "These strings are equal\n";
		break;
	case 2:
		cout << "String 2 is greater than string 1\n";
		break;
	case 3:
		cout << "String 1 is greater than string 2\n";
		break;
	}

	cout << "________________________________________________________________________________________________________________________\n";

	int num2;
	cout << "Enter a number: ";
	cin >> num2;
	while (num2 >= 10)
		num2 = sumOfDigits(num2);
	cout << "Sum of digits down to 1 digit = " << num2 << "\n\n";
}
