#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void quick_sort(int *arr, int s, int e)
{
	int p = 0;
	p = arr[(s + e) / 2];
	int ts = s;
	int te = e;
	do
	{
		while (arr[ts] < p)
			ts++;
		while (arr[te] > p)
			te--;
		if (ts <= te)
		{
			swap(arr[ts], arr[te]);
			te--;
			ts++;
		}

	} while (te >= ts);

	if (s < te)
		quick_sort(arr, s, te);
	if (ts < e)
		quick_sort(arr, ts, e);
}

int main()
{
	int arr1[6], arr2[6], arr3[7], a;
	cout << "Enter 6 values for array 1:\n";
	for (a = 0; a < 6; a++)
		cin >> arr1[a];

	cout << "\nEnter 6 values for array 2:\n";
	for (a = 0; a < 6; a++)
		cin >> arr2[a];

	for (a = 0; a < 6; a++)
		arr3[a] = arr1[a] + arr2[a];

	// arr3 is sum of respective indexes of arr2 & arr1
	cout << endl;
	quick_sort(arr3, 0, 6);
	for (a = 0; a < 6; a++)
		cout << arr3[a] << "\n";
}