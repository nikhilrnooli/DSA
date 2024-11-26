// Print linearly from N to 1

#include <bits/stdc++.h>

using namespace std;

void f(int i,int N){
        if(i<1) return;
        else cout << i << endl;
        
        f(i-1,N);
}

int main(){
    int N;
    cin >> N;
    f(N,N);
    return 0;
}