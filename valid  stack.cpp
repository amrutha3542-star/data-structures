#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }

    return 0;
}
