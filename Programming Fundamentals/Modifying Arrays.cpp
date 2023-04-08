#include <stdio.h>
#include <iostream>
using namespace std;

void print(int cr[], int n)
{
    for (int c = 0; c < n; c++)
    {
        cout << cr[c] << endl;
    }
}

void read(int temp[], int n)
{
    for (int c = 0; c < n; c++)
    {
        cin >> temp[c];
    }
}

int main()
{
    int cr[5] = {10, 20, 30, 40, 50};
    cout << "Array before changing:\n";
    print(cr, 5);
    cout << "Input 5 numbers:\n";
    read(cr, 5);
    cout << "Array after changing:\n";
    print(cr, 5);
}
