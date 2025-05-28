#include <iostream>
#include <string>
#include <utility> // Required for pair
using namespace std;

int main()
{
    // 1. Default initialization
    pair<int, string> p1; // p1.first is value-initialized (0), p1.second is default-constructed (empty string)

    // 2. Direct initialization (using constructor)
    pair<int, string> p2(10, "hello");

    // 3. Uniform initialization (C++11 and later)
    pair<double, char> p3{3.14, 'A'};

    // 4. Using make_pair (often preferred for type deduction)
    auto p4 = make_pair(true, 123.45); // p4 is pair<bool, double>

    // 5. Direct assignment
    pair<int, int> p5;
    p5.first = 5;
    p5.second = 7;

    // Accessing elements
    cout << "p2: " << p2.first << ", " << p2.second << endl;
    cout << "p3: " << p3.first << ", " << p3.second << endl;
    cout << "p4: " << p4.first << ", " << p4.second << endl;
    cout << "p5: " << p5.first << ", " << p5.second << endl;

    // Modifying elements
    p2.first = 20;
    p2.second = "world";
    cout << "p2 (modified): " << p2.first << ", " << p2.second << endl;

    // Comparison
    pair<int, int> pairA = {1, 5};
    pair<int, int> pairB = {1, 10};
    pair<int, int> pairC = {2, 3};

    cout << "pairA < pairB: " << (pairA < pairB) << endl;   // True (1 < 10)
    cout << "pairA == pairC: " << (pairA == pairC) << endl; // False
    cout << "pairA != pairC: " << (pairA != pairC) << endl; // True

    return 0;
}