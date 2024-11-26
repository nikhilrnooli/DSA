#include <bits/stdc++.h>

using namespace std;

void explainSet(){

    set<int> st;
    st.insert(4);
    st.insert(5);
    st.insert(1);
    st.insert(9);
    st.insert(7);

    for(auto it = st.begin(); it !=st.end(); it++){
        cout << *it << endl;
    }
    
     auto it = st.find(3); 
    if (it != st.end()) {
        cout << "Element " << *it << " found in the set." << endl;
    } else {
        cout << "Element 3 not found in the set." << endl;
    }

    st.erase(7); //It erases the element 7 //It takes logarithmic time

    int cnt = st.count(1); //It tells if the elements are present in the set -> 0- Np
                           // 1- present.

    auto it = st.find(4);
    st.erase(it);  // erases 4 it takes constant time

    auto it1 = st.find(4);
    auto it2 = st.find(9);
    st.erase(it1,it2); //{4,5,1,7} [first,last)
}

int main(){

    explainSet();
    return 0;
}