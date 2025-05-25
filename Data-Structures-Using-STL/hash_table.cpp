#include <iostream>
#include <unordered_map> // the most common way to implement a hash table is by using the unordered_map container from the <unordered_map> header. This container uses a hash table internally to store key-value pairs.
#include <string>
using namespace std;

int main()
{
    unordered_map<string, int> hashTable; //it create bucket to store key-value pair at hash(key) location and the size of bucket is dynamically changed when changed all the hash should be recomputed, we can explicitly specify the bucket size by some methods;

    // inserting key-value pair in hash table
    hashTable["apple"] = 3; // it calculate the hash of string "apple" and the hash location is used to store 3
    hashTable["banana"] = 5;
    hashTable["orange"] = 2;

    // accessing values from keys
    cout << "apple: " << hashTable["apple"] << endl; //first compute hash of "apple" and then in hash location it found key-value pair with key="apple"

    string key = "banana";
    if (hashTable.find(key) != hashTable.end()) //hashTable.find(key) only search for a key not value
    {
        cout << key << " is in hash table" << endl;
    }
    else
    {
        cout << key << " is not in hash table" << endl;
    }

    // iterating through the hash table
    cout << "all key-value pairs in hash table" << endl;
    for (const auto &pair : hashTable) //hashTable maintain the linkedlist to track the inserted (or occupied) key-value pair in the bucket so that this buckets only accessed
    {
        cout << pair.first << " : " << pair.second << endl;
    }

    hashTable.erase("orange");

    cout << "all key-value pairs in hash table" << endl;
    for (const auto &pair : hashTable)
    {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}