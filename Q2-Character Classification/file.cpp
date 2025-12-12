#include <iostream>
using namespace std;

int main()
{
    system("cls");
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        if ((ch >= 65 && ch <= 90))
        {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                cout << "Upper case Vowel!\n";
            }
            else
            {
                cout << "Upper case Consonants!\n";
            }
        }
        else
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                cout << "Lower case Vowel!\n";
            }
            else
            {
                cout << "Lower case Consonants!\n";
            }
        }
    }
    else
    {
        cout << "Not an alphabet!";
    }
    cout << endl;
    return 0;
}