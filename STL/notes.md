# STL

## key containers
* vector - Dynamic arrays, most commonly used
* deque - Double-ended queue for front/back operations
* stack - LIFO operations
* queue - FIFO operations
* priority_queue - Heap implementation
* set/multiset - Balanced BST, O(log n) operations
* unordered_set - Hash set, O(1) average operations
* map/multimap - Key-value pairs with ordering implemented by BST
* unordered_map - Hash map for fast lookups
* An associative container is a type of container in the C++ Standard Template Library (STL) where elements are stored in a way that allows fast retrieval based on keys.
* In associative containers, the position of elements is determined by their key, not by the order of insertion.
* They support fast searching, insertion, and deletion using keys — often in O(log n) time (or O(1) for unordered ones).


## key methods of all containers
* push_back(), pop_back(), size(), empty()
* insert(), erase(), find()
* begin(), end() // for iterators
* front(), back()
* clear(), at(index) // bounds check
* operator[] //Access element without bounds checking
  
## key algorithms
* sort() - Quick sorting
* binary_search(), lower_bound(), upper_bound() - Binary search variants
* min_element(), max_element() - Find extremes
* accumulate() - Sum/reduce operations
* reverse() - Reverse containers
* unique() - Remove consecutive duplicates
* next_permutation() - Generate permutations

