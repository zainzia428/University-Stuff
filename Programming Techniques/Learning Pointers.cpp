#include <iostream>
using namespace std;

int *arrsum(int arr1[], int arr2[], int sum[])
{
    int a;
    for (a = 0; a < 5; a++)
        sum[a] = arr1[a] + arr2[a];
    return sum;
}

char *inp(char a[])
{
    cin.getline(a, 6);
    return a;
}

int main()
{
    int arr1[5], arr2[5], a, sum[5];
    int *p1;
    cout << "TASK 1\n\n";
    cout << "Enter 5 numbers for 1st array:\n";
    for (a = 0; a < 5; a++)
        cin >> arr1[a];
    cout << "Enter 5 numbers for 2nd array:\n";
    for (a = 0; a < 5; a++)
        cin >> arr2[a];
    p1 = arrsum(arr1, arr2, sum);
    cout << endl;
    for (a = 0; a < 5; a++)
        cout << "Sum of index " << a << " is " << p1[a] << endl;

    cout << "\n\n______________________________________________________________________\n\n";

    int b;
    char ch[6];
    char *p2;
    cout << "TASK 2\n\n";
    cout << "Enter a word(upto 5 characters): ";
    p2 = inp(ch);
    for (b = 0; b < 5; b++)
        cout << p2[b];
}
