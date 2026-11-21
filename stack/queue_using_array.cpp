#include <iostream>
#include <vector>
using namespace std;

class myQueue {
public:

    vector<int> arr;
    int front;
    int rear;
    int size;

    // Constructor
    myQueue(int n) {
        size = n;
        arr.resize(size);

        front = 0;
        rear = 0;
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        return rear == size;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        arr[rear] = x;
        rear++;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        front++;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }

        return arr[front];
    }
};


int main() {

    // Create queue of size 5
    myQueue q(5);

    // Insert elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.peek() << endl;

    // Remove element
    q.pop();

    cout << "Front element after pop: "
         << q.peek() << endl;

    // Insert another element
    q.push(40);

    cout << "Front element: " << q.peek() << endl;

    // Check empty
    if (q.isEmpty()) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}