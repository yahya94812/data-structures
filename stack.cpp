#include <iostream>
using namespace std;

class Stack
{
private:
    int *array;
    int top;
    int capacity;

public:
    Stack(int capacity)
    {
        this->capacity = capacity;
        array = new int[capacity];
        top = -1;
    }

    ~Stack()
    {
        delete[] array;
    }

    void push(int value)
    {
        if (top >= capacity - 1)
        {
            cout << "stack overflow." << endl;
            return;
        }
        array[++top] = value;
    }

    int pop()
    {
        if (top < 0)
        {
            cout << "stack is empty." << endl;
            return -1;
        }

        return array[top--];
    }

    int peek()
    {
        if (top < 0)
        {
            cout << "stack is empty." << endl;
            return -1;
        }

        return array[top];
    }

    int is_empty()
    {
        return top < 0;
    }

    void display()
    {
        if (is_empty())
        {
            cout << "stack is empty." << endl;
            return;
        }
        for (int i = top; i >= 0; i--)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack my_stack(10);

    my_stack.push(1);
    my_stack.push(2);
    my_stack.push(3);

    my_stack.display();

    int popped = my_stack.pop();
    cout << "Popped element: " << popped << endl;

    my_stack.display();

    int top_elem = my_stack.peek();
    cout << "Top element of stack is: " << top_elem << endl;

    return 0;
}