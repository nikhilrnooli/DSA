//Largest Element in an array

#include <bits/stdc++.h>

using namespace std;

void largestElement(vector <int> &arr, int n){
    int largest = arr[0]; 
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        
    }
    cout << largest << " ";
}

int main(){
    int n; 
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    largestElement(arr, n);
    
    return 0;
}