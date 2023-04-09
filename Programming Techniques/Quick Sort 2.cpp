#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int partition(int arr[], int s, int e)
{
	int i = s, j = e, pivot = arr[s];
	while (i < j)
	{
		do
		{
			i++;
		} while (arr[i] <= pivot);

		do
		{
			j--;
		} while (arr[i] > pivot);

		if (i < j)
			swap(arr[i], arr[j]);
	}
	swap(arr[j], arr[s]);
	return j;
}

void quicksort1(int arr[], int s, int e) //????????????? Screenshots 174 - 7 + (C:\Users\Zain\Desktop\University\Semester 2\PT\Lectures\Lecture 3.mp4)
{
	int m;
	if (s < e)
	{
		m = partition(arr, s, e);
		quicksort1(arr, s, m);
		quicksort1(arr, m, e);
	}
}

void quicksort2(int *arr, int s, int e)
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
		quicksort2(arr, s, te);
	if (ts < e)
		quicksort2(arr, ts, e);
}

int main()
{
	int a, arr[10] = {55, 42, 33, 56, 78, 63, 79, 69, 428, 9};
	quicksort1(arr, 0, 10);

	for (a = 0; a < 10; a++)
		cout << arr[a] << endl;

	cout << "\n\n";

	int brr[10] = {42, 55, 33, 56, 78, 63, 79, 69, 428, 9};
	quicksort2(brr, 0, 9);

	for (a = 0; a < 10; a++)
		cout << brr[a] << endl;
}