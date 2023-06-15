#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int n) {
        size = n;
        arr = new int[size];
        top = -1;
    }

    bool is_empty() {
        return top == -1;
    }

    bool is_full() {
        return top == size - 1;
    }

    void push(int element) {
        if (is_full()) {
            cout << "stack is full" << endl;
            return;
        }
        arr[++top] = element;
    }

    int pop() {
        if (is_empty()) {
            cout << "stack is empty" << endl;
            return -1;
        }
        return arr[top--];
    }
    
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter the size of stack: ";
    cin >> n;

    Stack s(n);

    int choice, element, popped;

    while (true) {
        cout << "Stack Operations:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Exit" << endl;

        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to push: ";
                cin >> element;
                s.push(element);
                break;
            case 2:
                popped = s.pop();
                if (popped != -1) {
                    cout << popped << endl;
                }
                break;
            case 3:
                cout << "Thank you" << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}