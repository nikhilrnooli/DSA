// Print linearly from 1 to N

#include <bits/stdc++.h>

using namespace std;

void f(int i,int N){
    
        if(i > N) return;
        else cout << i << endl;

    f(i+1, N);
}

int main(){

    int N;
    cin >> N;
    f(1,N);
    return 0;
}