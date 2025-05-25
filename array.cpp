#include <iostream>
using namespace std;

class Array
{
private:
    int *array;
    int capacity;
    int size;

public:
    Array(int capacity)
    {
        this->capacity = capacity;
        size = 0;
        array = new int[capacity];
    }

    ~Array()
    {
        delete[] array;
    }

    void insert(int value)
    {
        if (size >= capacity)
        {
            cout << "Array is full. can't insert." << endl;
            return;
        }

        array[size++] = value;
    }

    void remove_at(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "invalid index." << endl;
            return;
        }

        for (int i = index; i < size - 1; i++)
        {
            array[i] = array[i + 1];
        }
        size--;
    }

    int search(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if (array[i] == value)
            {
                return i;
            }
        }
        return -1;
    }

    void display()
    {
        if (size == 0)
        {
            cout << "array is empty." << endl;
            return;
        }
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Array my_array(5);

    my_array.insert(1);
    my_array.insert(2);
    my_array.insert(3);

    my_array.display();

    my_array.remove_at(1);

    my_array.display();

    cout << "index of value = 1 is: " << my_array.search(1) << endl;

    return 0;
}