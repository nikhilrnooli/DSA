// Factorial of N in parameterised

#include <bits/stdc++.h>

using namespace std;

void f(int i,int fact){
    if( i==0 || i==1) {
    cout << fact << " ";
    return;
    }
    f(i-1, fact*i);
}

int main(){
    int n;
    cin >> n;
    f(n,1);
}