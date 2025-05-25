#include <iostream>
using namespace std;

class Queue{
    private:
        int* array;
        int front;
        int rear;
        int capacity;
        int count;
    
    public:
        Queue(int capacity){
            this->capacity = capacity;
            array = new int[capacity];

            front = 0;
            rear = -1;
            count = 0;
        }

        ~Queue(){
            delete[] array;
        }

        void enqueue(int value){
            if(count == capacity){
                cout<<"queue overflow."<<endl;
                return;
            }

            rear = (rear + 1)%capacity;
            array[rear]=value;
            count++;
        }

        bool is_empty(){
            return count == 0;
        }

        int dequeue(){
            if(is_empty()){
                cout<<"queue underflow."<<endl;
                return -1;
            }

            int temp = array[front];
            front = (front + 1)%capacity;
            count--;
            return temp;
        }

        int peek(){
            if(is_empty()){
                cout<<"queue is empty."<<endl;
                return -1;
            }

            return array[front];
        }

        void display(){
            if(is_empty()){
                cout<<"queue is empty."<<endl;
                return;
            }

            for(int i = 0; i<count; i++){
                int temp = (front + i)%capacity;
                cout<<array[temp]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Queue my_queue(10);

    my_queue.enqueue(1);
    my_queue.enqueue(2);
    my_queue.enqueue(3);

    my_queue.display();

    my_queue.dequeue();

    cout << "front element: " << my_queue.peek() << endl;

    return 0;
}