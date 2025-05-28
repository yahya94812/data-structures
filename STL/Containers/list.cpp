// list is a doubly-linked list container that allows efficient insertion and deletion at any position.
// Doubly-linked list implementation
// O(1) insertion/deletion at any position (if you have iterator)

#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Declaration:
    list<int> l;
    list<string> words;
    list<int> l = {1, 2, 3, 4, 5};
    list<int> l(5, 10); // 5 elements, all = 10

    // Adding Elements:
    l.push_back(10);    // Add at end
    l.push_front(5);    // Add at beginning
    l.emplace_back(20); // Construct at end
    l.emplace_front(1); // Construct at beginning

    // Insert at specific position
    auto it = l.begin();
    advance(it, 2);   // Move iterator to position 2
    l.insert(it, 15); // Insert 15 at position 2

    // Removing Elements:
    l.pop_back();  // Remove last
    l.pop_front(); // Remove first
    l.remove(10);  // Remove all occurrences of 10
    l.remove_if([](int x)
                { return x > 5; }); // Remove based on condition

    // Erase at specific position
    auto it = l.begin();
    advance(it, 2);
    l.erase(it); // Remove element at position 2

    // Erase range
    l.erase(l.begin(), next(l.begin(), 3)); // Remove first 3 elements

    // Accessing Elements:
    int first = l.front(); // First element
    int last = l.back();   // Last element
                           // Note: No random access like l[i]I

    // Size Operations:
    int size = l.size();
    bool empty = l.empty();
    l.clear();       // Remove all elements
    l.resize(10);    // Resize to 10 elements
    l.resize(10, 5); // Resize to 10, new elements = 5

    // Iteration:
    // Forward iteration
    for (int x : l)
    {
        cout << x << " ";
    }

    // Using iterators
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    // Reverse iteration
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << " ";
    }

    // Unique List Operations:

    // Splice (Move elements between lists):
    list<int> l1 = {1, 2, 3};
    list<int> l2 = {4, 5, 6};

    // Move entire l2 to l1
    l1.splice(l1.end(), l2); // l1: {1,2,3,4,5,6}, l2: empty

    // Move single element
    auto it = l2.begin();
    l1.splice(l1.begin(), l2, it); // Move first element of l2 to front of l1

    // Move range
    l1.splice(l1.end(), l2, l2.begin(), next(l2.begin(), 2));

    // Merge (Combine sorted lists):
    list<int> l1 = {1, 3, 5};
    list<int> l2 = {2, 4, 6};
    l1.merge(l2); // l1: {1,2,3,4,5,6}, l2: empty

    // Sort:
    l.sort();                 // Ascending order
    l.sort(greater<int>());   // Descending order
    l.sort([](int a, int b) { // Custom comparator
        return abs(a) < abs(b);
    });

    // Unique (Remove consecutive duplicates):
    list<int> l = {1, 1, 2, 2, 2, 3, 1};
    l.unique(); // Result: {1, 2, 3, 1} (only consecutive removed)

    // With custom predicate
    l.unique([](int a, int b)
             { return abs(a) == abs(b); });

    // Reverse:
    l.reverse(); // Reverse the entire list

    return 0;
}