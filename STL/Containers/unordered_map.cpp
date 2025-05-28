#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // An unordered_map is a hash table–based associative container that stores key–value pairs with unique keys, just like a map — but faster (on average).
    // Unordered map for O(1) average operations, O(1) for insert/find/erase

    unordered_map<string, int> umap;

    // Insert elements
    umap["apple"] = 3; // first it calculate the hash of string and in that location it stores both key(string) and value(int)
    umap["banana"] = 5;
    umap["apple"] = 4; // Updates the value for key "apple"

    // Access and print
    cout << "apple: " << umap["apple"] << endl;
    cout << "banana: " << umap.at("banana") << endl;

    // Check key
    if (umap.count("apple"))
    {
        cout << "apple is present" << endl;
    }

    // Iterate (unordered order!)
    for (auto &[key, value] : umap)
    {
        cout << key << ": " << value << endl;
    }

    // Collisions are handled using chaining (usually a list or dynamic array in each bucket).

    return 0;
}
