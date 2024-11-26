// Reverse a number i.e 7789 -> 9877

#include <bits/stdc++.h>

using namespace std;

int revNum =0;
void myNum(int n){
    while(n>0){     //7789 > 0?
        int lastdigit = n % 10; //7789 % 10 = 9
        //cout << " " << lastdigit << endl;
        revNum = (revNum * 10) + lastdigit; // (0*10) + 9
        n = n/10; //7789/10 = 778

    }
    cout << revNum;
}

int main(){
    int n;
    cout << "Enter the number: " ;
    cin >> n;
    myNum(n);
    return 0;
}