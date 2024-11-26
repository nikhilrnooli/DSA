#include <bits/stdc++.h>

using namespace std;

void explainIterators(){
    //Iterator ->  points to the memory where the element is lying.

    vector<int> v;

    vector<int>::iterator it = v.begin(); //Define a iterator and v.begin() means you are printing 
                                          //the memory address not the element


    it++; //It goes to the next memory location -> {20,10,23,11,38} -> so, from 20 it will go to 10.
    cout << *(it) << " "; //*(it) gives us the memory location of the element

    it = it+2; //It will shit to the +2 position {20,10,23,11,38} from 20 it'll go to 23
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();

    cout << v[0] << " " << v.at(0); // It accesses the first element of the vector
    cout << v.back() << " "; //{10,20,30} -> It means the element at the back 30

    for(vector<int>::iterator it = v.begin(); it !=v.end(); it++){
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it !=v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it: v){
        cout << it << " ";
    }
    
} 
