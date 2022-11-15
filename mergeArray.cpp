// Given two sorted arrays A[] and B[] of sizes N and M respectively, the task is to
// merge them in a sorted manner using priority_queue.
// Example:
// Input: A[] = { 5, 6, 8 }, B[] = { 4, 7, 8 }
// Output: 4 5 6 7 8 8

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int A[] = {5, 6, 8}, B[] = {4, 7, 8};
    int sizeN = 3, sizeM = 3;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < sizeN; i++)
    {
        pq.push(A[i]);
    }

    for (int i = 0; i < sizeM; i++)
    {
        pq.push(B[i]);
    }

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}