#include <iostream>
#include <queue>

class Stack {
private:
    std::queue<int> q1, q2;

public:
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        std::swap(q1, q2);
    }

    void pop() {
        if (!q1.empty()) {
            q1.pop();
        }
    }

    int top() {
        if (!q1.empty()) {
            return q1.front();
        }
        return -1; // Stack is empty
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    Stack stack;
    
    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << stack.top() << std::endl; // Output: 3

    stack.pop();
    std::cout << stack.top() << std::endl; // Output: 2

    return 0;
}
