/*
Write a program in C++ to calculate the grade of a student based on marks Obtained in five subjects. The program should:
1. Take input of marks for 5 subjects.
2. Calculate the total marks and percentage.
3. Use an if-else ladder to assign grades according to the following criteria:
If percentage ≥ 90 → Grade A
If percentage ≥ 75 and < 90 → Grade B
If percentage ≥ 60 and < 75 → Grade C
If percentage ≥ 40 and < 60 → Grade D
If percentage < 40 → Fail
4. Finally, display the total marks, percentage, and grade.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "===================\n|| GRADE SYSTEM ||\n===================\n\n";

    string name, college;
    char grade, g1, g2, g3, g4, g5;
    int BCA301, BCA302, BCA303, BCA304, BCA305, total_mark;
    float percentage;

    cout << "Enter Student Name (without spaces): ";
    cin >> name;

    cout << "Enter College Name (without spaces): ";
    cin >> college;

    cout << "Enter the BCA301 Obtained mark: ";
    cin >> BCA301;

    cout << "Enter the BCA302 Obtained mark: ";
    cin >> BCA302;

    cout << "Enter the BCA303 Obtained mark: ";
    cin >> BCA303;

    cout << "Enter the BCA304 Obtained mark: ";
    cin >> BCA304;

    cout << "Enter the BCA305 Obtained mark: ";
    cin >> BCA305;

    total_mark = BCA301 + BCA302 + BCA303 + BCA304 + BCA305;
    percentage = (total_mark / 500.0) * 100;

    // if-else for BCA301 grade
    if (BCA301 >= 90)
    {
        g1 = 'A';
    }
    else if (BCA301 >= 75 && BCA301 < 90)
    {
        g1 = 'B';
    }
    else if (BCA301 >= 60 && BCA301 < 75)
    {
        g1 = 'C';
    }
    else if (BCA301 >= 40 && BCA301 < 60)
    {
        g1 = 'D';
    }
    else if (BCA301 < 40)
    {
        g1 = 'F';
    }

    // if-else for BCA302 grade
    if (BCA302 >= 90)
    {
        g2 = 'A';
    }
    else if (BCA302 >= 75 && BCA302 < 90)
    {
        g2 = 'B';
    }
    else if (BCA302 >= 60 && BCA302 < 75)
    {
        g2 = 'C';
    }
    else if (BCA302 >= 40 && BCA302 < 60)
    {
        g2 = 'D';
    }
    else if (BCA302 < 40)
    {
        g2 = 'F';
    }

    // if-else for BCA303 grade

    if (BCA303 >= 90)
    {
        g3 = 'A';
    }
    else if (BCA303 >= 75 && BCA303 < 90)
    {
        g3 = 'B';
    }
    else if (BCA303 >= 60 && BCA303 < 75)
    {
        g3 = 'C';
    }
    else if (BCA303 >= 40 && BCA303 < 60)
    {
        g3 = 'D';
    }
    else if (BCA303 < 40)
    {
        g3 = 'F';
    }

    // if-else for BCA304 grade
    if (BCA304 >= 90)
    {
        g4 = 'A';
    }
    else if (BCA304 >= 75 && BCA304 < 90)
    {
        g4 = 'B';
    }
    else if (BCA304 >= 60 && BCA304 < 75)
    {
        g4 = 'C';
    }
    else if (BCA304 >= 40 && BCA304 < 60)
    {
        g4 = 'D';
    }
    else if (BCA304 < 40)
    {
        g4 = 'F';
    }

    // if-else for BCA305 grade
    if (BCA305 >= 90)
    {
        g5 = 'A';
    }
    else if (BCA305 >= 75 && BCA305 < 90)
    {
        g5 = 'B';
    }
    else if (BCA305 >= 60 && BCA305 < 75)
    {
        g5 = 'C';
    }
    else if (BCA305 >= 40 && BCA305 < 60)
    {
        g5 = 'D';
    }
    else if (BCA305 < 40)
    {
        g5 = 'F';
    }

    // if-else for percentage grade
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 75 && percentage < 90)
    {
        grade = 'B';
    }
    else if (percentage >= 60 && percentage < 75)
    {
        grade = 'C';
    }
    else if (percentage >= 40 && percentage < 60)
    {
        grade = 'D';
    }
    else if (percentage < 40)
    {
        grade = 'F';
    }

    cout << "____________________________________________________\n";
    cout << "\nStudent Name         : " << name;
    cout << "\nStudent College Name : " << college;
    cout << "\nBCA301 Marks         : " << BCA301 << " " << g1;
    cout << "\nBCA302 Marks         : " << BCA302 << " " << g2;
    cout << "\nBCA303 Marks         : " << BCA303 << " " << g3;
    cout << "\nBCA304 Marks         : " << BCA304 << " " << g4;
    cout << "\nBCA305 Marks         : " << BCA305 << " " << g5;
    cout << "\nTotal Marks Obtained : " << total_mark;
    cout << "\nPercentage Obtained  : " << percentage << "%";
    cout << "\nOverall Grade        : " << grade;

    if (grade == 'F' || g1 == 'F' || g2 == 'F' || g3 == 'F' || g4 == 'F' || g5 == 'F')
        cout << "\nStudent has Failed the Examination.";
    else
        cout << "\nStudent has Passed the Examination.";

    cout << "\n_____________________________________________________\n";

    return 0;
}