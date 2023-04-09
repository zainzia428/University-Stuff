#include <iostream>
using namespace std;

float pi = 3.14;

void circlearea(float r, float *area)
{
    *area = pi * r * r;
}

void stringlength(int *length, char ch[])
{
    int c = 0;
    while (ch[c] != '\0')
        c++;
    *length = c;
}

float multiply(float a, float b)
{
    float sum;
    sum = a * b;
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

void subtract(int *diff, int a, int b)
{
    *diff = a - b;
}

int main()
{
    int month;
    cout << "TASK 1\n\n"
         << endl;
    cout << "Enter no. of month: ";
    cin >> month;
    while (month > 12 || month < 1)
    {
        cout << "Please enter a valid number: ";
        cin >> month;
    }
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "This month has 31 days" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "This month has 30 days" << endl;
        break;
    case 2:
        cout << "This month has 29 days" << endl;
        break;
    }

    cout << "\n\n________________________________________________________________\n\n";

    char ch;
    float num1, num2;
    cout << "TASK 2\n\n";
    cout << "Choose what you want to do from the following. +, -, /, %, *: ";
    cin >> ch;
    while (ch != '+' && ch != '-' && ch != '/' && ch != '%' && ch != '*')
    {
        cout << "Please choose one of the given characters: ";
        cin >> ch;
    }
    cout << "Enter 2 numbers" << endl;
    cin >> num1 >> num2;
    switch (ch)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
        break;
    case '%':
        cout << num1 << " % " << num2 << " = " << mod(num1, num2) << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
        break;
    }

    cout << "\n\n________________________________________________________________\n\n";

    int quantity;
    char inp;
    cout << "TASK 3\n\n";
    cout << "Menu:\nB = Burger\nF = French Fries\nP = Pizza\nS = Sandwich\n"
         << endl;
    cout << "What would you like? ";
    cin >> inp;
    while (inp != 'b' && inp != 'f' && inp != 'p' && inp != 's' && inp != 'B' && inp != 'F' && inp != 'P' && inp != 'S')
    {
        cout << "Please enter a valid item: ";
        cin >> inp;
    }
    cout << "How many would you like? ";
    cin >> quantity;
    while (quantity < 0)
    {
        cout << "Please enter a valid value: ";
        cin >> quantity;
    }
    switch (inp)
    {
    case 'b':
    case 'B':
        cout << "Total charges = Rs. " << 100 * quantity << endl;
        break;
    case 'f':
    case 'F':
        cout << "Total charges = Rs. " << 200 * quantity << endl;
        break;
    case 'p':
    case 'P':
        cout << "Total charges = Rs. " << 300 * quantity << endl;
        break;
    case 's':
    case 'S':
        cout << "Total charges = Rs. " << 400 * quantity << endl;
        break;
    }

    cout << "\n\n________________________________________________________________\n\n";

    float area, r;
    cout << "TASK 4\n\n";
    cout << "Enter radius of circle: ";
    cin >> r;
    while (r < 0)
    {
        cout << "Please enter a valid value: ";
        cin >> r;
    }
    circlearea(r, &area);
    cout << "The area of circle with radius " << r << " is " << area << endl;

    cout << "\n\n________________________________________________________________\n\n";

    int a, b, diff;
    cout << "TASK 5\n\n";
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    subtract(&diff, a, b);
    cout << a << " - " << b << " = " << diff << endl;

    cout << "\n\n________________________________________________________________\n\n";

    int *ptr1, *ptr2, a, b;
    cout << "TASK 6\n\n";
    cout << "Enter 1st number: ";
    cin >> a;
    ptr1 = &a;
    ptr2 = &a;
    cout << "Value before change: " << *ptr1 << endl;
    cout << "Value after increment: " << ++(*ptr1) << endl;
    cout << "Value after decrement: " << --(*ptr1) << endl;

    cout << "\n\n________________________________________________________________\n\n";

    char ch[50];
    int length;
    cout << "TASK 7\n\n";
    cout << "Enter a string: ";
    cin >> ch;
    stringlength(&length, &ch);
    cout << "The length of this string is " << length << endl;
}
