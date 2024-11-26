//Function Overloading -> Compiled Time Polymorphism

#include <bits/stdc++.h>

using namespace std;

class A {

    public:
    
    void sayHello(){
        cout << "Hello Nikhil" << endl;
    }

    void sayHello(char name){
        cout << "Hi" << endl;
    }

    int sayHello(string name){
        cout << "Hi" << endl;
        return 1;
    }
};

int main(){

    A obj;
    obj.sayHello();

    return 0;
}