#include<iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(a) / sizeof(a[0]);
    int value;

    cout << "Enter the number to search: ";
    cin >> value;

    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (a[mid] == value) {
            cout << "Found at index: " << mid << endl;
            return mid;
        }
        else if (a[mid] < value) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
 
    cout << "Not found!" << endl;
    return 0;
}
