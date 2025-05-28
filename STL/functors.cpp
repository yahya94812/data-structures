// In C++, overloading operator()() means giving a class the ability to behave like a function — this is often called making a function object or functor.
// we can overload classes for '+' by using `operator+(ClassName obj_name){}` handel the custom addition logic, then we can perform this_obj + obj
// similarly we can use `operator()(parameters)` for overloading ()
// Functors in C++ STL are objects that can be called like functions. They're implemented as classes or structs that overload the operator(). Functors provide more flexibility than regular functions because they can maintain state and be customized through constructors.

#include <iostream>
#include <functional> //STL predefined built in functors
using namespace std;

// my custom functor
class Adder
{
private:
    int x;

public:
    Adder(int val) : x(val) {}

    int operator()(int y) // the parenthis just after `operator` specify that we are doing `()` operator overloading ,now objects of that class to be "callable" like a function.
    {
        return x + y;
    }
};

int main()
{
    Adder add5(5);
    cout << add5(10) << endl; // Calls operator(): prints 15

    greater<int> greater_object; // has no constructor therefore no parenthesis if applies it become function declaration
    cout << greater_object(11, 9) << endl;
    // greater<int>()(a, b) return true of false (1, 0)

    // use functors as function
    cout << greater<int>()(0, 9) << endl;

    // use of functor in algorithm
    vector<int> v = {1, 2, 3, 4, 5, 6};
    sort(v.begin(), v.end(), greater<int>()); // we are passing the anonymous) object(functor) of the greater<int> class.
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    // Lambda instead of custom functor
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int threshold = 5;
    auto count = std::count_if(nums.begin(), nums.end(),
                               [threshold](int n)
                               { return n > threshold; });
    std::cout << "Numbers greater than " << threshold << ": " << count << std::endl; // 5

    // Common STL Functors
    // Arithmetic: std::plus<T>, std::minus<T>, std::multiplies<T>, std::divides<T>
    // Comparison: std::equal_to<T>, std::not_equal_to<T>, std::greater<T>, std::less<T>
    // Logical: std::logical_and<T>, std::logical_or<T>, std::logical_not<T>

    // State Maintenance: Can store data between function calls
    // Customization: Constructor parameters allow flexible behavior
    // Performance: Often inlined by compilers, potentially faster than function pointers
    // Type Safety: Template-based, providing compile-time type checking
    
    return 0;
}
