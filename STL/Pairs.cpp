#include <bits/stdc++.h>

using namespace std;

void Pairs(){
    //single set of values
    pair <int,int> p = {1,3}; //Define a pair
    cout <<"First number is:  " <<  p.first << endl <<"Second number is: "  << p.second << " "; 


    //multiple values in pairs 
    pair <int, pair <int,int>> q = { 2, {3, 5}};
     cout <<"  " <<  q.second.first << endl;

}


int main(){

    Pairs();
    return 0;
}