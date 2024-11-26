#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];  // Use the value, not the index
    int i = low + 1;       // Start from the next element after the pivot
    int j = high;

    while (i <= j) {
        // Find element greater than pivot
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        // Find element smaller than or equal to pivot
        while (j > low && arr[j] > pivot) {
            j--;
        }
        // Swap elements to correct sides
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    // Swap pivot to its correct position
    swap(arr[low], arr[j]);
    return j;
}

void qS(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qS(arr, low, pIndex - 1);
        qS(arr, pIndex + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    qS(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
