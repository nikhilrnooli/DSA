// Print from 1 to N using backtracking

#include <bits/stdc++.h>

using namespace std;

void f(int i, int N){
    if(i<1) return;
    f(i-1,N);
    cout << i << endl;
}

int main(){

    int N;
    cin >> N;
    f(N,N);
}