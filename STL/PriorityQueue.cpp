#include <bits/stdc++.h>

using namespace std;

void explainPriority(){
    /*priority_queue<int>pq;
    pq.push(1); //{1}
    pq.push(4); //{4,1}
    pq.push(5); //{5,4,1}
    pq.emplace(8); //{8,5,4,1}
    pq.emplace(10); //{10,8,5,4,1}
    cout << " " << pq.top() << endl;
    pq.pop(); //deletes the highest element {10}
    cout << " " << pq.top() << endl; //prints 8 */
    //size swap empty functions are the same

  //Minimum Heap - If I want a priority queue which stores the minumum element
  priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1); //{1}
    pq.push(4); //{1,4}
    pq.push(5); //{5,4,1}
    cout << pq.top();
}
  


int main(){
    
    explainPriority();
    return 0;
}

/* Time Complexity

Push - log(n)
Pop - O(1)
Top - log(n)
*/