#include <iostream>
using namespace std;

#define MAX 5

class Deque {
    int arr[MAX];
    int front, rear;

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    // Insert at Front
    void insertFront(int value) {
        if ((front == 0 && rear == MAX - 1) || front == rear + 1) {
            cout << "Deque is Full\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = MAX - 1;
        }
        else {
            front--;
        }

        arr[front] = value;
    }

    // Insert at Rear
    void insertRear(int value) {
        if ((front == 0 && rear == MAX - 1) || front == rear + 1) {
            cout << "Deque is Full\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (rear == MAX - 1) {
            rear = 0;
        }
        else {
            rear++;
        }

        arr[rear] = value;
    }

    // Display
    void display() {
        if (front == -1) {
            cout << "Deque is Empty\n";
            return;
        }

        int i = front;

        while (true) {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % MAX;
        }

        cout << endl;
    }
};

int main() {
    Deque dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertFront(2);

    dq.display();

    return 0;
}