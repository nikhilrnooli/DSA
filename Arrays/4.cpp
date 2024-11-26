//Remove duplicates in-place from sorted array

#include <bits/stdc++.h>

using namespace std;

int rmDuplicate(int arr[], int n){
    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int newSize = rmDuplicate(arr,n);

    for(int i=0; i<newSize; i++){
        cout << arr[i] << " ";
    }

    return 0;
}