// (pronounced "deck", short for double-ended queue) for front/back operations
// allows fast insertion and deletion from both the front and the back.
// Insertion and deletion from both ends: push_front, push_back, pop_front, pop_back.
// Slower random insertions/deletions compared to list, but faster than vector for front insertions.
// deque is typically implemented as a list of arrays.
// Unlike vector, deque may not store all elements in contiguous memory.it is implemented typically a map of blocks (or buffers) rather than a contiguous memory block like vector
// [Map (array of pointers)] ---> [Block 1] [Block 2] ... [Block N]
// The map is an array of pointers to these blocks. This design allows efficient insertion/removal from both ends.

// push_back(val)
// Adds val to the last block.
// If the last block is full, a new block is allocated and the pointer is added to the map.

//  push_front(val)
// Adds val to the first block.
// If the first block is full, a new block is allocated and prepended in the map.

// operator[] or at(i)
// Computes:
// block_index = (start_index + i) / block_size
// element_index = (start_index + i) % block_size
// Accesses the element using: map[block_index][element_index].

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(1);
    dq.push_front(0);

    dq.front(); // return front element
    dq.back();

    cout << dq.at(0) << endl;
    cout << dq[1] << endl;

    for (auto x : dq)
        cout << x << " ";
    cout << endl;

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    dq.pop_back();
    dq.pop_front();

    return 0;
}