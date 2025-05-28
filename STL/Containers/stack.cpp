#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(10);
    cout<< s.top()<<endl;
    cout<< s.size()<<endl;
    cout<< s.empty()<<endl;
    s.pop(); //it return void

    return 0;
}