#include <iostream>
using namespace std;

int main()
{
    int distance, choice, fare;
    cout << "\tSelect choice:\n1.Economy\n2.Business\n3.First Class\n";
    cin >> choice;
    cout << "enter distance:";
    cin >> distance;
    switch (choice)
    {
    case 1:
        fare = distance * 5;
        break;
    case 2:
        fare = distance * 8;
        break;
    case 3:
        fare = distance * 12;
        break;
    default:
        cout << "Invalid choice!";
        break;
    }
    cout << "Total fare is : " << fare << endl;
    return 0;
}