#include <iostream>

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

Node* intersect(Node* head1, Node* head2) {
    Node* dummy = new Node(-1);
    Node* tail = dummy;
    
    while (head1 && head2) {
        if (head1->data == head2->data) {
            tail->next = new Node(head1->data);
            tail = tail->next;
            head1 = head1->next;
            head2 = head2->next;
        } else if (head1->data < head2->data) {
            head1 = head1->next;
        } else {
            head2 = head2->next;
        }
    }
    
    return dummy->next;
}

int main() {
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    
    Node* head2 = new Node(2);
    head2->next = new Node(3);
    head2->next->next = new Node(4);
    
    Node* result = intersect(head1, head2);
    
    while (result) {
        std::cout << result->data << " ";
        result = result->next;
    }
    
    return 0;
}
