#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int a;
    cout << "TASK 1\n\n";
    for (a = 2; a < 101; a++)
    {
        if (a == 2 || a == 3 || a == 5 || a == 7)
            cout << a << endl;
        if (a % 2 != 0 && a % 3 != 0 && a % 5 != 0 && a % 7 != 0)
            cout << a << endl;
    }

    int r, c;
    cout << "\n\nTASK 2\n\n";
    for (r = 0; r < 5; r++)
    {
        for (c = r; c < 5; c++)
            cout << "*";
        cout << endl;
    }

    int w, x, y;
    cout << "\n\nTASK 3\n\n";
    for (w = 0; w < 5; w++)
    {
        for (x = w; x < 5; x++)
            cout << " ";
        for (y = 0; y <= w; y++)
            cout << "* ";
        cout << endl;
    }

    cout << "\n\nTASK 4\n\n";
    int m, n;
    for (m = 0; m < 5; m++)
    {
        for (n = 5; n >= 5 - m; n--)
            cout << n;
        cout << endl;
    }
}