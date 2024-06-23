#include <iostream>

struct Node {
    int data;
    Node* next;
};

int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    Node* head = new Node();
    head->data = 1;

    Node* second = new Node();
    head->next = second;
    second->data = 2;

    Node* third = new Node();
    second->next = third;
    third->data = 3;
    third->next = nullptr;

    std::cout << "Number of nodes in the linked list: " << countNodes(head) << std::endl;

    return 0;
}
