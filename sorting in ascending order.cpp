#include <iostream>
#include <algorithm>

int main() {
    std::string str = "hello";
    std::sort(str.begin(), str.end());
    std::cout << "Sorted string: " << str << std::endl;
    
    return 0;
}
