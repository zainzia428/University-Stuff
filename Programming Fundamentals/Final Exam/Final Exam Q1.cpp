#include <iostream>
using namespace std;

int main()
{
	float sum = 0, a, b;
	for (a = 10; a < 21; a++)
	{
		for (b = 1; b < 11; b++)
		{
			sum = sum + a / b;
		}
	}
	cout << "Answer = " << sum << endl;
}
