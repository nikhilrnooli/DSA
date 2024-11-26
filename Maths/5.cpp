// Print all divisors

#include <bits/stdc++.h>

using namespace std;

void printDivisors(int n){
    for(int i=1; i<=n; i++){
        //i is completely divisible by n
        if(n % i ==0){
            cout << " "<< i << endl;
        }
       
    }
  
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    printDivisors(n);

    return 0;
}