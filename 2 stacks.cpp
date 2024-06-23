#include <iostream>
#include <stack>

int main() {
    std::stack<int> bottomStack, topStack;

    bottomStack.push(10);
    topStack.push(20);

    std::cout << "Bottom Stack Top Element: " << bottomStack.top() << std::endl;
    std::cout << "Top Stack Top Element: " << topStack.top() << std::endl;

    return 0;
}
