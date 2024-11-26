#include <bits/stdc++.h>

using namespace std;

void Pattern19(int n){
    int iniS=0;
    for(int i=0; i<n; i++){
        //stars
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        //spaces
        for(int j=0;j<iniS;j++){
            cout << " ";
        }
        //stars
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        
        cout << endl;
        iniS += 2;
    }
     iniS = 8;
    for(int i=1; i<=n; i++){
         //stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        //spaces
        for(int j=0;j<iniS;j++){
            cout << " ";
        }
        //stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
        iniS -=2;
        
    }
 }

int main(){

    int n;
    cin>> n;
    Pattern19(n);
    return 0;
}