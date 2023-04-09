#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
    cout << "After swapping:\na = " << a << "\nb = " << b << endl;
}

void checkeven(int num)
{
    if (num % 2 == 0)
        cout << "This number is even" << endl;
}

void checkodd(int num)
{
    if (num % 2 != 0)
        cout << "This number is odd" << endl;
}

double factorial(double num)
{
    int a;
    double sum = 1;
    for (a = 1; a <= num; a++)
        sum = sum * a;
    return sum;
}

float add(float a, float b)
{
    float sum;
    sum = a + b;
    return sum;
}

float subtract(float a, float b)
{
    float sum;
    sum = a - b;
    return sum;
}

float multiply(float a, float b)
{
    float sum;
    sum = a * b;
    return sum;
}

float divide(float a, float b)
{
    float sum;
    sum = a / b;
    return sum;
}

int mod(int a, int b)
{
    int sum;
    sum = a % b;
    return sum;
}

int main()
{
    int a = 2, b = 3;
    cout << "TASK 1\n\n";
    cout << "Before swapping:\na = " << a << "\nb = " << b << endl;
    swap(a, b);

    cout << "\n\n______________________________________________________________\n\n";

    int num;
    cout << "TASK 2\n\n";
    cout << "Enter a number between 0 and 20: ";
    cin >> num;
    while (num > 20 || num < 0)
    {
        cout << "Please enter a valid number: ";
        cin >> num;
    }
    checkeven(num);
    checkodd(num);

    cout << "\n\n______________________________________________________________\n\n";

    int a;
    double num2;
    cout << "TASK 3\n\n";
    cout << "Enter a number: ";
    cin >> num2;
    cout << num2 << "! = ";
    for (a = 0; a < num2 - 1; a++)
        cout << num2 - a << " * ";
    cout << "1 = " << factorial(num2) << endl;

    cout << "\n\n______________________________________________________________\n\n";

    char ch;
    float num3, num4;
    cout << "TASK 4\n\n";
    cout << "Choose what you want to do. +, -, /, %: ";
    cin >> ch;
    while (ch != '+' && ch != '-' && ch != '/' && ch != '%')
    {
        cout << "Please choose one of the given characters: ";
        cin >> ch;
    }
    cout << "Enter 2 numbers" << endl;
    cin >> num3 >> num4;
    switch (ch)
    {
    case '+':
        cout << num3 << " + " << num4 << " = " << add(num3, num4) << endl;
        break;
    case '-':
        cout << num3 << " - " << num4 << " = " << subtract(num3, num4) << endl;
        break;
    case '/':
        cout << num3 << " / " << num4 << " = " << divide(num3, num4) << endl;
        break;
    case '%':
        cout << num3 << " % " << num4 << " = " << mod(num3, num4) << endl;
        break;
    }

    cout << "\n\n______________________________________________________________\n\n";

    cout << "TASK 5\n\n";
    int a, b;
    float y, z;
    a = 5, b = 2;
    y = 3.5, z = 2.5;
    cout << a << " + " << b << " = " << add(a, b) << endl;
    cout << y << " + " << z << " = " << add(y, z) << endl;
    cout << a << " + " << z << " = " << add(a, z) << endl;
    cout << a << " - " << b << " = " << subtract(a, b) << endl;
    cout << y << " - " << z << " = " << subtract(y, z) << endl;
    cout << a << " - " << z << " = " << subtract(a, z) << endl;
    cout << a << " x " << b << " = " << multiply(a, b) << endl;
    cout << a << " x " << z << " = " << multiply(a, z) << endl;
}
