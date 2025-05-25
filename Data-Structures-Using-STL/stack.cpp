#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.top();   // return top element
    s.pop();   // not return any thing
    s.size();  // return size
    s.empty(); // true if empty

    return 0;
}