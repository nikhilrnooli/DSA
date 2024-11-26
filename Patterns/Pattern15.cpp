#include <bits/stdc++.h>

using namespace std;

void Pattern15(int n){
    for(int i=n; i>=1; i--){
        for(char ch ='A'; ch<= 'A'+i; ch++){
            cout << ch << " ";
        }
        cout << endl;

    }
}


int main(){
    int n;
    cin >> n;
    Pattern15(n);
}