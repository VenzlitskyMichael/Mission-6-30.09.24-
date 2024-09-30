#include <iostream>

using namespace std;

void Sort(int arr[], int n, bool asc) {
    bool swap;
    for (int i = 0; i < n - 1; i++) {
        swap = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if ((asc && arr[j] > arr[j + 1]) || (!asc && arr[j] < arr[j + 1])) {
                std::swap(arr[j], arr[j + 1]); // No working with out std; Why?
                swap = true; 
            }
        }
        if (!swap) break;
    }
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    Sort(arr, n, true);
    cout << "Sort elements (in high): ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    Sort(arr, n, false);
    cout << "Sort elements (on down): ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
