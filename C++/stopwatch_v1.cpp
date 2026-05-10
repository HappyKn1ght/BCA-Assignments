/*
#include<iostream>
using namespace std;

int main(){
    int sec;
    for( sec = 0; sec<=59; sec++){
        cout << 00 << ":" << 00<< ":" << sec << endl;
    }

    return 0;
}
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int s = 0, m = 0, h = 0;
    char ch;
    cout << "Enter S to start and E to Exit the STOPWATCH: ";
    cin >> ch;
    if (ch == 'S')
    {
        while (true)
        {
            Sleep(1000);
            s++;
            if (s > 59)
            {
                m++;
                s = 0;
            }
            if (m > 59)
            {
                h++;
                m = 0;
            }

            system("cls");
            cout << "\n"
                 << h << ":" << m << ":" << s;
            if (GetAsyncKeyState('B'))
            {
                cout << "\n"
                     << "final time: " << h << ":" << m << ":" << s;
                break;
            }
        }
    }
    else
    {
        cout << "enter the correct number";
    }

    return 0;
}
