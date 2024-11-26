// Check if it's a Palindrome

#include <bits/stdc++.h>

using namespace std;
   
void myNum(int n){
    int revNum =0;
    int dup = n;

    while(n>0){     
        int lastdigit = n % 10; 
        revNum = (revNum * 10) + lastdigit; 
        n = n/10; 
    }
    if(dup == revNum) cout << "It is a Palindrome";
    else 
    cout << "It is not a Palindrome";
}

int main(){

    int n;
  
    cout << "Enter the number: ";
    cin >> n;
    myNum(n);
    return 0;
}