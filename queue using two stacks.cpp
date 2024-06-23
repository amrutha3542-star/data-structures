#include <iostream>
#include <stack>

class Queue {
private:
    std::stack<int> inbox;
    std::stack<int> outbox;

public:
    void enqueue(int value) {
        inbox.push(value);
    }

    int dequeue() {
        if (outbox.empty()) {
            while (!inbox.empty()) {
                outbox.push(inbox.top());
                inbox.pop();
            }
        }

        int front = outbox.top();
        outbox.pop();
        return front;
    }

    bool isEmpty() {
        return inbox.empty() && outbox.empty();
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;

    q.enqueue(4);

    std::cout << q.dequeue() << std::endl;
    std::cout << q.dequeue() << std::endl;

    return 0;
}
