#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq; // Stores the largest element at the top, Internally implemented as a binary max heap.
    pq.push(10);
    pq.push(5);
    pq.push(11);
    pq.push(1);

    pq.top(); // return the front element of priority_queue, only the way to get resultant value no front(), back() because it is implemented as heap
    pq.pop(); // remove top node and hepify remaining nodes
    pq.size();

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> minpq; // customized
    // Stores int values.
    // Uses a vector<int> to store elements internally.
    // Uses greater<int> as the comparator → forms a min-heap.
    pq.push(10);
    pq.push(5);
    pq.push(11);
    pq.push(1);

    pq.top();
    pq.pop();

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
