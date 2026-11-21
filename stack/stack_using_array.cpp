#include <iostream>
#include <vector>
using namespace std;

class myStack {
public:
        //int *arr
      vector<int> arr;
    int top;
    int size;

    // Constructor
    myStack(int n) {
        size = n;
        //arr=new int[n];
        arr.resize(size);
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack is full" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        top--;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }

        return arr[top];
    }
};


int main() {

    // Create stack of size 5
    myStack s(5);

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    // See top element
    cout << "Top element: " << s.peek() << endl;

    // Remove top element
    s.pop();

    cout << "Top element after pop: " << s.peek() << endl;

    // Check empty
    if (s.isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }

    // Add another element
    s.push(40);

    cout << "Top element: " << s.peek() << endl;

    return 0;
}