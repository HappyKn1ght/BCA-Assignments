#include <iostream>
#include <windows.h>

using namespace std;
int main()

{
    int s = 0, m = 0, h = 0;
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
            s = 0;
        }
        system("cls");
        cout << h << " : " << m << " : " << s << endl;
        cout << "hr " << "min " << "sec" << endl; // i did it myself using my brain
    }
    return 0;
}