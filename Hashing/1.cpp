//Number hashing

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter the elements present in the array: ";
        cin >> arr[i];
    }
    
    //pre-compute
    int hash [13]= {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] +=1;
    }
    
    int q;
    cout << "Enter the size of the numbers: ";
    cin >> q;
    while(q--){
        int number;
        cout << "Number of times nos. appeared in the array: ";
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }

    return 0;
}