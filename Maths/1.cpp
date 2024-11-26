// Extraction of digits
#include <bits/stdc++.h>

using namespace std;

int cnt=0;
void myDigits(int n){
    while(n>0){         //7789 > 0 ?
        int lastdigit = n % 10;   //7789 % 10 = 9
        cout << " " << lastdigit << endl;  //9
        cnt = cnt +1;  //1
        n = n/10;  //7789/10 = 778
    }
    cout << cnt;
}


int main(){
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;
    myDigits(n); //7789
    return 0;
}

