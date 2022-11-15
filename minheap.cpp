// Write a c++ program, to use priority_queue to implement min heap.
#include<iostream>
#include<queue>
using namespace std;

int main(){
    //Min Heap
    priority_queue <int,vector<int>,greater<int>> pq;
    pq.push(5);
    pq.push(1);
    pq.push(10);
    pq.push(30);
    pq.push(20);
  
    // One by one extract items from max heap
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
  
    return 0;
}