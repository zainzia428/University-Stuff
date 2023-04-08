#include <iostream>
using namespace std;

void readans(int num[])
{
    for (int c = 0; c < 20; c++)
    {
        cout << c + 1 << ". ";
        cin >> num[c];
        while (num[c] > 4 || num[c] < 1)
        {
            cout << "Please enter a valid answer\n"
                 << c + 1 << ". ";
            cin >> num[c];
        }
    }
}

void checkans(int ans[], int num[])
{
    int a = 0;
    for (int c = 0; c < 20; c++)
    {
        if (ans[c] == num[c])
            a++;
    }
    if (a >= 15)
        cout << "\nPassed" << endl;
    else
        cout << "\nFailed" << endl;
}

void dispans(int ans[], int num[])
{
    int a = 0;
    cout << "The following answers were incorrect:\n";
    for (int c = 0; c < 20; c++)
    {
        if (ans[c] != num[c])
            cout << c + 1 << endl;
        else
            a++;
    }
    cout << "No. of correct answers: " << a << endl;
    cout << "No. of incorrect answers: " << 20 - a << endl;
}

void search(int accno, int arr[])
{
    int a = 0;
    for (int c = 0; c < 18; c++)
    {
        if (accno == arr[c])
            a++;
    }
    if (a == 0)
        cout << "This number is invalid" << endl;
    else
        cout << "This number is valid" << endl;
}

void read(int num[], int n)
{
    for (int c = 0; c < n; c++)
    {
        cin >> num[c];
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubblesort(int arr[], int arrsize)
{
    for (int a = 0; a <= arrsize; a++)
    {
        for (int b = 0; b <= arrsize - 1; b++)
        {
            if (arr[b] > arr[b + 1])
                swap(arr[b], arr[b + 1]);
        }
    }
}

void bubblesort2(int arr[], int arrsize)
{
    int c = 0;
    for (int a = 0; a < arrsize; a++)
    {
        for (int b = 0; b < arrsize - 1; b++)
        {
            if (arr[b] > arr[b + 1])
            {
                swap(arr[b], arr[b + 1]);
                c++;
            }
        }
    }
    cout << "No. of swaps: " << c << endl;
}

void selectionsort(int arr[], int arrsize)
{
    int z = 0;
    for (int a = 0; a < arrsize - 1; a++)
    {
        int min = a;
        for (int b = a + 1; b < arrsize; b++)
        {
            if (arr[b] < arr[min])
                min = b;
        }
        if (min != a)
        {
            swap(arr[min], arr[a]);
            z++;
        }
    }
    cout << "No. of swaps: " << z;
}

int main()
{
    int ans[20] = {1, 4, 2, 2, 3, 2, 1, 2, 3, 4, 1, 3, 4, 2, 4, 3, 3, 1, 4, 2}, inpans[20];
    cout << "Enter your answer for each question respectively\n";
    readans(inpans);
    checkans(ans, inpans);
    dispans(ans, inpans);

    cout << "\n_________________________________________________________________________________\n\n";

    int accno, arr[18] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    cout << "Enter account number: ";
    cin >> accno;
    search(accno, arr);

    cout << "\n_________________________________________________________________________________\n\n";

    int a[12];
    cout << "Enter rainfall for each month respectively\n";
    read(a, 12);
    bubblesort(a, 11);
    cout << "Sorted order:\n";
    for (int z = 0; z < 12; z++)
    {
        cout << a[z] << " ";
    }

    cout << "\n_________________________________________________________________________________\n\n";

    int b[20], c[20] = {3, 231, 321, 2, 32, 43, 428, 69, 421, 908, 545, 77, 1, 543, 1024, 600, 5, 8, 10, 148};
    for (int y = 0; y < 20; y++)
    {
        b[y] = c[y];
    }
    bubblesort2(b, 20);
    for (int x = 0; x < 20; x++)
        cout << b[x] << endl;
    cout << "\n\n";
    selectionsort(c, 20);
    for (int z = 0; z < 20; z++)
        cout << c[z] << endl;
}
