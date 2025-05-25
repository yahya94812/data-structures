#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.front(); // return front element
    q.back();
    q.size(); // return size
    q.empty(); // return true if empty
    q.pop();

    return 0;
}