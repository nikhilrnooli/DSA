#include <bits/stdc++.h>

using namespace std;


void createVector(){

    vector<int> v;      //Define a vector

    v.push_back(1);     //It pushes two in the vector -> {1}
    v.emplace_back(2);  //It is similar to push_back but faster -> {2}

    vector<pair<int, int>> vec; // If we want to use pair in vector

    vec.push_back({1,2}); // {1,2}
    vec.emplace_back({3,2}); // {3,2}

    vector<int> vec(5,100); // {100,100,100,100,100} -> It means 5 copies of 100
    vector<int> vec(5); // {0,0,9,9,7} -> It will give any 5 garabe value according to compiler

    vector<int> v1(5,20); // {20,20,20,20,20}
    vector<int> v2(v1); //It will copy the values of v1 in v2. -> {20,20,20,20,20}
}