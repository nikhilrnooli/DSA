//Method Overloading -> Runtime Polymorphism

#include <bits/stdc++.h>

using namespace std;

class Parent {
    
    public:
        void show(){
            cout << "Inside parent class" << endl;
        }
};

class subclass1: public Parent {
    
    public:
        void show(){
            cout << "Inside subclass 1" << endl;
        }
};

class subclass2: public Parent {
    
    public:
        void show(){
            cout << "Inside subclass 2" << endl;
        }
};

int main(){

    subclass1 obj1;
    subclass2 obj2;

    obj1.show();
    obj2.show();
    return 0;
}