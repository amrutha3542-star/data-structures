#include <iostream>

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

int main() {
    Node* head = nullptr;

    insert(head, 5);
    insert(head, 10);
    insert(head, 15);

    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
