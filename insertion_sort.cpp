#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;


    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Insertion Sort
    for(int i = 1; i < n; i++)
    {    
        int current = arr[i];
        int j = i - 1;

        while(arr[j]>current && j>=0)
        {
           arr[j+1]=arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    // Print sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
