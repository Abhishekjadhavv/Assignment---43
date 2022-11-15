// Write a c++ program, to demonstrate priority queue having a min element at top.
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(90);
    pq.push(76);
    pq.push(23);
    pq.push(12);
    pq.push(10);
    pq.push(5);
    pq.push(1);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}