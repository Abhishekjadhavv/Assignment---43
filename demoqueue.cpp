// Write a c++ program, to demonstrate priority queue.
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(45);
    pq.push(90);
    pq.push(64);

    cout << "size of queue is " << pq.size() << endl;
    pq.pop();
    cout << "size of queue is " << pq.size() << endl;

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    if (pq.empty())
    {
        cout << "priority queue is empty" << endl;
    }
    else
    {
        cout << "priority queue is not empty" << endl;
    }
    return 0;
}