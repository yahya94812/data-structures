#include <iostream>
#include <vector> //dynamic array
#include <algorithm> //for sorting and searching
using namespace std;

int main()
{
    // 1. creating array
    vector<int> v;        // empty vector
    vector<int> v(5);     // size=5, default values=0
    vector<int> v(5, 10); // size=5, default values=10
    vector<int> v = {1, 2, 3, 4, 5};

    // 2. accessing elements
    v[1];
    v[3];
    v[v.size() - 1];
    v.front();
    v.back();

    // 3. updating elements
    v[1] = 5;
    v[3] = 4;

    // 4. adding elements
    v.push_back(9);

    // 5. removing elements
    v.pop_back();

    // 6. inserting at position
    v.insert(v.begin() + 2, 99); //(iterator, value); v.begin() return the iterator(pointer) of the first element

    // 7. erase element
    v.erase(v.end() - 1); //(iterator)

    // 8. clear all elements
    v.clear();

    // 9. check size, empty
    v.size();
    v.empty();

    // 10. loop through array
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int val : v)
    {
        cout << val << " ";
    }

    // 11. sorting (efficient)
    sort(v.begin(), v.end());   // sort() function, not method
    sort(v.rbegin(), v.rend()); // descending

    // 12. removing duplicates (for sorted only)
    v.erase(unique(v.begin(), v.end()), v.end()); // unique func shift all unique elements at the left side and return the iterator of the elements next to the last unique element

    // 13. reverse array
    reverse(v.begin(), v.end());

    // 14. searching
    // linear search
    auto it = find(v.begin(), v.end(), 5); // linear search, v.end() is the iterator(exclusive, one paste the end)
    if (it != v.end())
    {
        cout << "element is found" << endl;
    }

    // binary search
    int target = 3;
    auto it = lower_bound(v.begin(), v.end(), target); // return the iterator of the first element >= target
    if (it != v.end() && *it == target)
        cout << "element is found at index: " << it - v.begin() << endl;
    else
        cout << "element is not found" << endl;

    // binary search (return bool)
    bool found = binary_search(v.begin(), v.end(), 3); // return bool value work with sorted array


    return 0;
}