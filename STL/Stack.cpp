#include <bits/stdc++.h>

using namespace std;

void explainStack(int n)
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(4);
    st.emplace(5);
    // cout <<st.top() << endl;
    st.pop();
    // cout << st.top() <<endl;
    cout << st.size();
}

int main()
{
    int n;
    explainStack(n);
    return 0;
}