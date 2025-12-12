#include <iostream>
using namespace std;

int main()
{
    int time;
    string status;
    cout << "Enter hrs (in 24hrs format) : ";
    cin >> time;
    if (time >= 0 && time < 24)
    {
        if ((time < 12 && time >= 0))
        {
            if (time == 0)
            {
                time = 12;
            }

            status = "am";
        }
        else
        {
            if (time>12)
            {
                time = time-12;
            }

            status = "pm";
        }
        cout << "Time is : " << time << status;
    }
    else
    {
        cout << "Invalid entered time!" << endl;
    }

    return 0;
}