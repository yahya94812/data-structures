// Internally implemented using a hash table.
// Provides average O(1) time complexity for insert, find, and erase operations.

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> uset;
    // unordered_set is an associative container that stores unique elements.
    // Unlike set, it does not maintain any order.
    // Internally implemented using a hash table.
    // Provides average O(1) time complexity for insert, find, and erase operations.

    uset.insert(10); // first it find the hash(10) and in that location it stores 10
    uset.insert(20);
    uset.insert(10); // duplicate - will be ignored

    cout << "Size: " << uset.size() << endl;

    // Check presence
    if (uset.find(20) != uset.end())
    {
        cout << "20 is present" << endl;
    }

    // Iterate (unordered!)
    cout << "Elements: ";
    for (int x : uset)
    {
        cout << x << " ";
    }
    cout << endl;

    uset.erase(10); // delete an element

    return 0;
}
