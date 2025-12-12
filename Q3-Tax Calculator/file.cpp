#include <iostream>
using namespace std;

int main()
{
    system("cls");
    double monthlyIncome;
    double tax;
    cout << "Enter monthly income:";
    cin >> monthlyIncome;

    if (monthlyIncome < 50000)
    {
        cout << "No tax!\nNet salary : " << monthlyIncome;
    }
    else if (monthlyIncome >= 50000 && monthlyIncome <= 100000)
    {
        tax = (10 / 100.0) * monthlyIncome;
        cout << "Tax ammount: " << tax << endl;
        cout << "Net salary after tax deduction : " << monthlyIncome - tax << endl;
    }
    else if (monthlyIncome > 100000 && monthlyIncome <= 200000)
    {
        tax = (20 / 100.0) * monthlyIncome;
        cout << "Tax ammount: " << tax << endl;
        cout << "Net salary after tax deduction : " << monthlyIncome - tax << endl;
    }
    else
    {
        tax = (30 / 100.0) * monthlyIncome;
        cout << "Tax ammount: " << tax << endl;
        cout << "Net salary after tax deduction : " << monthlyIncome - tax << endl;
    }

    cout << endl;

    return 0;
}