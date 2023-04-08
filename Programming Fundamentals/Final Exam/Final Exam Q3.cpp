#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	for (int a = 1; a < 5; a++)
	{
		for (int b = 3; b >= a; b--)
			cout << " ";
		for (int c = a - 1; c >= -(a - 1); c--)
			cout << a - abs(c);
		cout << endl;
	}
	cout << endl;
}
