#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int password;
    string userName;

    for (int i = 1; i <= 3; i++)
    {
        cout << "enter username and password\n";
        cin >> userName >> password;
        if (userName == "admin" && password == 12345)
        {
            cout << "Login successful!";
            return 0;
        }
        else
        {
            cout << "Incorrect name or password. Try again!\n";
        }
    }
    cout << "Account Locked\n";
    return 0;
}