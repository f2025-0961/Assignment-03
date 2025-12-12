#include <iostream>
using namespace std;

int main()
{
    system("cls");
    float marks, attendence, familyIncome;
    cout << "Enter your marks out of 100 : ";
    cin >> marks;
    cout << "Enter your attendence percentage : ";
    cin >> attendence;
    cout << "Enter your family income : ";
    cin >> familyIncome;
    if (marks > 100 || marks < 0)
    {
        cout << "Invalid marks!";
        return 0;
    }
    else
    {
        if (marks >= 85)
        {
            if (attendence >= 80)
            {
                cout << "Full Scholarship!" << endl;
            }
            else
            {
                cout << "your marks are good but attendence is not equal to or above than 80!\n";
            }
        }
        else if (marks >= 70)
        {
            cout << "Partial Scholarship!" << endl;
        }
        else
        {
            cout << "No Scholarship!" << endl;
        }
    }
    cout << endl;

    return 0;
}