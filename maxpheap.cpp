// Write a c++ program, to show that priority_queue is by default a Max Heap.
#include<iostream>
#include<queue>
using namespace std;

int main(){
    
   
    //priority_queue is by default a Max Heap
    priority_queue <int> pq;
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