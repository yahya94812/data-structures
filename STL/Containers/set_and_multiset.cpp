#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Set, Unique Sorted Elements implemented using BST
    set<int> s;

    s.insert(10); // Insert element - O(log n)
    s.insert(11);
    s.insert(12);
    s.insert(13);

    s.erase(10);        // Remove element - O(log n)
    s.erase(s.begin()); // also work
    s.find(10);         // Find element - O(log n)
    s.count(10);        // Check if exists (returns 0 or 1) - O(log n)
    s.size();           // Get size - O(1)
    s.empty();          // Check if empty - O(1)

    // Iteration (elements are sorted)
    for (auto x : s)
        cout << x << " ";
    cout << endl;

    s.lower_bound(12); // Iterator to first element ≥ x
    s.upper_bound(12); // Iterator to first element > x
    s.clear();         // Remove all elements

    // Use cases: Remove duplicates, maintain sorted order

    // Multiset almost similar to Set except it allows duplicates, it stores multiple copies of the same value as individual nodes.
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);                   // Both elements will be stored
    ms.insert(11);
    cout << ms.count(10) << endl;    // check the number of occurrence of value(10) - O(log n)
    auto range = ms.equal_range(10); // Returns pair of lower_bound and upper_bound
    for (auto it = range.first; it != range.second; it++)
    {
        cout << *it << " "; // Prints all 10's
    }
    cout<<endl;
    // multiset: Allows duplicates, useful for frequency

    multiset<int, greater<int>> desc_ms; // descending order

    return 0;
}
