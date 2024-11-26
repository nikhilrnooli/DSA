//Print from N to 1 using backtracking

#include <bits/stdc++.h>

using namespace std;
  
void f(int N, int i){
    if(N<i) return;
    else
    f(N,i+1);
    cout << i << " ";

}
int main(){
    int N;
    cin >> N;
    f(N,1);
}