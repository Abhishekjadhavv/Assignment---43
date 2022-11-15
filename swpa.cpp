// Write a c++ program, to swap the elements of two priority queues of int type.
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq1;
    priority_queue<int> pq2;

    // assign value in first queue
    pq1.push(10);
    pq1.push(23);
    pq1.push(45);
    pq1.push(67);

    // assign value in second queue
    pq2.push(87);
    pq2.push(34);
    pq2.push(48);
    pq2.push(34);

    pq1.swap(pq2);

    cout << "First queue" << endl;
    while (!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout<<endl;
    
    cout << "second queue" << endl;
    while (!pq2.empty())
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }

    return 0;
}