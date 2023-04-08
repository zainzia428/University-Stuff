#include <iostream>
using namespace std;

int calculate(int x, int y)
{
    int taxableIncome = x + (y - 100000);
    if (taxableIncome < 100000)
        return 0;
    else if (taxableIncome >= 100000 && taxableIncome < 200000)
    {
        taxableIncome -= 100000;
        return taxableIncome * 0.1;
    }
    else if (taxableIncome >= 200000 && taxableIncome < 500000)
    {
        int temp = taxableIncome;
        taxableIncome -= 100000;
        if (taxableIncome > 100000)
            taxableIncome = 100000;
        taxableIncome *= 0.1;
        temp -= 200000;
        temp *= 0.2;
        return taxableIncome + temp;
    }
    else
    {
        int temp = taxableIncome, temp2 = taxableIncome;
        taxableIncome -= 100000;
        if (taxableIncome > 200000)
            taxableIncome = 100000;
        taxableIncome *= 0.1;
        temp -= 200000;
        if (temp > 500000)
            temp = 300000;
        temp *= 0.2;
        temp2 -= 500000;
        temp2 *= 0.3;
        return taxableIncome + temp + temp2;
    }
}

int main()
{
    int grossSalary, savingSalary, tax;
    cout << "Enter the gross salary of the person: ";
    cin >> grossSalary;
    cout << "Enter the saving salary of the person: ";
    cin >> savingSalary;
    tax = calculate(grossSalary, savingSalary);
    cout << "Tax is: " << tax << endl;
}
