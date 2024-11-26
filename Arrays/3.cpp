// Check if the array is sorted

#include <bits/stdc++.h>

using namespace std;

bool aSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool isSorted = aSort(arr, n);

    if (isSorted)
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}