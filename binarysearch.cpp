#include <iostream>
using namespace std;

int main() {
    int Arr[6], n;

    cout << "Enter 6 values:\n";
    for (int i = 0; i < 6; i++) { // Start loop from 0 to access Arr[0]
        cin >> Arr[i];
    }

    cout << "Enter value to search: ";
    cin >> n;

    int mid, low = 0, high = 5; // Use 5 as the upper bound for a 6-element array

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (Arr[mid] == n) {
            cout << "Number found at index: " << mid << endl;
            return 0;
        } else if (Arr[mid] < n) {
            low = mid + 1; // Decrease low instead of increasing mid
        } else {
            high = mid - 1; // Decrease high instead of increasing mid
        }
    }

    cout << "Number not found in the array." << endl;
    return 0;
}
