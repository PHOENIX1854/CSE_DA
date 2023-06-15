#include <iostream>
using namespace std;

class Stack {
private:
    int a[100];
    int t;

public:
    Stack() {
        t = -1;
    }

    void Push(int e) {
        if (t >= 100 - 1) {
            cout << "Stack is full. Cannot push element." << endl;
        } 
        else {
            t++;
            a[t] = e;
            cout << "Pushed element: " << e << endl;
        }
    }

    void Pop() {
        if (t < 0) {
            cout << "Stack is empty. Cannot pop element." << endl;
        } else {
            int pe = a[t];
            t--;
            cout << "Popped element: " << pe << endl;
        }
    }

    bool IsEmpty() {
        return (t < 0);
    }
};

int main() {
    Stack stack;
    int c, e;

    do {
        cout << "Stack Operations:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> c;

        switch (c) {
            case 1:
                cout << "Enter element to push: ";
                cin >> e;
                stack.Push(e);
                break;

            case 2:
                stack.Pop();
                break;

            case 3://exiting
                break;

            default:
                cout << "please try again" << endl;
        }

    } while (c != 3);

    return 0;
}
