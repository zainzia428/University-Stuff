#include <iostream>
using namespace std;

int main()
{
    int a;
    float arr[10], sum = 0;
    for (a = 0; a < 10; a++)
    {
        if (a == 0)
            cout << "Enter " << a + 1 << "st number: ";
        else if (a == 1)
            cout << "Enter " << a + 1 << "nd number: ";
        else if (a == 2)
            cout << "Enter " << a + 1 << "rd number: ";
        else
            cout << "Enter " << a + 1 << "th number: ";
        cin >> arr[a];
    }

    for (a = 0; a < 10; a++)
        sum = sum + arr[a];
    cout << "Sum = " << sum << endl;

    for (a = 0; a < 10; a++)
        arr[a] = arr[a] / sum;

    cout << "Final array\n";
    for (a = 0; a < 10; a++)
        cout << arr[a] << endl;
}
