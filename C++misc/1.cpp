//Print the name N times

#include <bits/stdc++.h>

using namespace std;

void printName(const string& name, int n){
    for(int i=0;  i<n; i++){
        cout << name <<endl;
    }
}
int main(){
    string name;
    int n;

    cout << "Enter the name: " << endl;
    getline(cin,name);
    
    cout << "Enter the number of times to print: ";
    cin >> n;

    printName( name, n);

    return 0;
}