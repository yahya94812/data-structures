#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    // map is an associative container that stores key-value pairs in sorted order of keys using a balanced BST.
    // Keys are unique and automatically sorted
    // O(log n) time complexity for insert, delete, search
    // Implemented as balanced BST (Red-Black tree)
    // Keys are immutable once inserted

    // Insertion:
    // Method 1: Using []
    m[1] = "one";
    m[2] = "two";
    m[1] = "ONE"; // Updates existing value

    // Method 2: Using insert()
    m.insert({3, "three"});

    // Method 3: Using emplace()
    m.emplace(5, "five");

    // Access:
    // Method 1: Using [] (creates if doesn't exist)
    string val = m[1];

    // Method 2: Using at() (throws exception if doesn't exist)
    string val = m.at(1);

    // Method 3: Using find()
    auto it = m.find(1);
    if (it != m.end())
    {
        string val = it->second;
    }

    // Search:
    // Check if key exists
    if (m.find(1) != m.end())
    {
        // Key exists
    }

    // Or using count()
    if (m.count(1))
    {
        // Key exists (returns 1 or 0 for map)
    }

    // Deletion:
    m.erase(1);         // Remove by key
    m.erase(m.find(2)); // Remove by iterator

    // Iteration:
    // Method 1: Range-based loop
    for (auto &p : m)
    {
        cout << p.first << " -> " << p.second << endl;
    }

    // Method 2: Iterator
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
    }

    // Method 3: Structured binding (C++17)
    for (auto &[key, value] : m)
    {
        cout << key << " -> " << value << endl;
    }

    // inshort
    map<string, int> m1;
    m1["apple"] = 5;          // Insert/update - O(log n)
    m1.insert({"banana", 3}); // Alternative insert
    m1.erase("apple");        // Remove by key - O(log n)
    m1.find("apple");         // Find by key - O(log n)
    m1.count("apple");        // Check if key exists - O(log n)
    m1.size();                // Get size - O(1)
    // Iteration (keys are sorted)
    for (auto p : m)
    {
        cout << p.first << ": " << p.second << "\n";
    }
    // lower_bound(key) - Iterator to first element ≥ key
    // upper_bound(key) - Iterator to first element > key

    map<int, string, greater<int>> desc_map; // descending key order

    // Use cases: Frequency counting, memoization

    // Multimap
    // similar to map except it can contain more the one same key
    // so m.count(key) //method may be useful here
    // this is similar to set vs multiset relation
    
    return 0;
}