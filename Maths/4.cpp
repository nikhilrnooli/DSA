// Check if Armstrong

#include <bits/stdc++.h>

using namespace std;

void checkNum(int n){
    int sum = 0;
    int revNum = 0;
    int dup =n;
    while(n>0){
        int ld = n % 10;
        sum = sum + (ld*ld*ld);
        revNum = (revNum * 10) + ld;
        n = n/10;
    }
    if(sum == dup ) { cout << "The number is an Armstrong number.";
    }
    else {cout << "The number is not an Armstrong Number.";}
    
}

int main(){
    
    int n;
    cout << "Enter the number: ";
    cin>> n;
    checkNum (n);
    
    return 0;

}