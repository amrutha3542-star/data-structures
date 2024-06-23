#include <iostream>
#include <string>
using namespace std;

struct Node {
    char data;
    Node* next;
};

class PalindromeSLL {
private:
    Node* head;

public:
    PalindromeSLL() {
        head = nullptr;
    }

    void insert(char value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    bool isPalindrome() {
        Node* current = head;
        string str;

        while (current != nullptr) {
            str += current->data;
            current = current->next;
        }

        string reversed = str;
        reverse(reversed.begin(), reversed.end());

        return str == reversed;
    }
};

int main() {
    PalindromeSLL sll;

    sll.insert('r');
    sll.insert('a');
    sll.insert('d');
    sll.insert('a');
    sll.insert('r');

    if (sll.isPalindrome()) {
        cout << "The linked list forms a palindrome." << endl;
    } else {
        cout << "The linked list does not form a palindrome." << endl;
    }

    return 0;
}
