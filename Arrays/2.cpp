//Find Second largest element in array 

#include <bits/stdc++.h>

using namespace std;

void sLargest(int arr[], int n){
    int largest = arr[0];
    int slargest = INT_MIN;

    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    } 

    if(slargest == INT_MIN){
        cout << "There is not second largest element."<< endl;
    }
    else{
    cout << slargest;
    }
}

int main(){

    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sLargest(arr,n);
    
}


//For second smallest
int secondSmallest(vector<int> &a, int n ){
    int smallest = a[0];
    int ssmallest = INT_MAX;

    for(int i=1; i<n; i++){
        if(a[i] < smallest){
            ssmallest =  smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest  && a[i] < ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;

}