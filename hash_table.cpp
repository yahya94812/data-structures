// Hash Table Implementation Using Separate Chaining (Linked List)
// Hash Tables store key-value pairs allowing for fast insertion, deletion, and search operations.
#include <iostream>
#include <list>
using namespace std;

const int TABLE_SIZE = 10; // size of array

class HashTable
{
private:
    list<pair<int, string>> table[TABLE_SIZE]; // array of lists(of pairs)

    int hash_function(int key)
    {
        return key % TABLE_SIZE;
    }

public:
    // insert key-value pair
    void insert(int key, const string &value)
    {
        int index = hash_function(key);

        for (auto &node : table[index])
        { // here the node is a pair in the list and table[index] is a list
            if (node.first == key)
            {
                // update existing value for a key
                node.second = value;
                return;
            }
        }
        table[index].emplace_back(key, value); // insert new pair node
    }

    void remove(int key)
    {
        int index = hash_function(key);

        for (auto node = table[index].begin(); node != table[index].end(); node++)
        {
            if (node->first == key)
            {
                table[index].erase(node);
                return;
            }
        }
        cout << "key " << key << " not found." << endl;
    }

    string search(int key)
    {
        int index = hash_function(key);
        for (const auto &entry : table[index])
        {
            if (entry.first == key)
            {
                return entry.second;
            }
        }
        return "key not found!\n";
    }

    void display()
    {
        for (int i = 0; i < TABLE_SIZE; i++)
        {
            cout << "bucket " << i << " ";
            for (const auto &entry : table[i])
            {
                cout << "[ " << entry.first << " : " << entry.second << " ]";
            }
            cout << endl;
        }
    }
};

int main()
{
    HashTable my_hashtable;
    my_hashtable.insert(1, "one"); //(key, value)
    my_hashtable.insert(11, "eleven");
    my_hashtable.insert(2, "two");

    my_hashtable.display();

    cout << "search key 11: " << my_hashtable.search(11) << endl;

    my_hashtable.remove(1);
    my_hashtable.display();

    return 0;
}