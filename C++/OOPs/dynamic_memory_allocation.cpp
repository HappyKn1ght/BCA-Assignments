// Program to sort n numbers using dynamic memory allocation
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    // dynamic memory allocation
    int *arr = new int[n];

    cout << "Enter numbers:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sorting in descending order
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Numbers in descending order:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // free memory
    delete[] arr;

    return 0;
}