// Q6. Write a C++ program to create a text file and display the contents of a text file using file processing.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string text;
    // Create and write into file
    ofstream outFile("student.txt");
    outFile << "Name: Rahul\n";
    outFile << "Roll No: 101\n";
    outFile << "Marks: 85\n";
    outFile.close();
    // Read from file
    ifstream inFile("student.txt");
    cout << "Contents of file:\n\n";
    while (getline(inFile, text))
    {
        cout << text << endl;
    }
    inFile.close();
    return 0;
}