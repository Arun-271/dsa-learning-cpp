#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
void push(Node** head, int newValue) {
    Node* temp = new Node;
    temp->data = newValue;
    temp->next = (*head);
    (*head) = temp;
}
void insertAt(Node* previousNode, int newValue) {
    if (previousNode == NULL) {
        cout << "The given linked list is empty, Please use push or append method " << endl;
        return;
    }
    Node* temp = new Node;
    temp->data = newValue;
    temp->next = previousNode->next;
    previousNode->next = temp;
}
void append(Node** head, int newValue) {
    Node* temp = new Node;
    Node* last = *head;
    temp->data = newValue;

    if (*head == NULL) {
        temp->next = *head;
        *head = temp;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = temp;
    temp->next = NULL;
    return;

}
void deleteNode(Node** head, int key) {
    Node* temp = *head;
    Node* prev = NULL;
    // case 1 list is empty;

    if (temp == NULL) {
        cout << "The linked list is empty and nothing cannot be deleted! " << endl;
        delete temp;
        delete prev;
        return;
    }
    // case 2 delete the head .
    if (temp != NULL && temp->data == key) {
        *head = (*head)->next;
        delete temp;
        return;
    }
    // node is in other than head;
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
    return;
}
// Delete the entire Linked List
void deleteFullList(Node** head) {
    Node* current = *head;
    Node* next;
    while (current != NULL)
    {
        next = current->next;
        delete current;
        current = next;
    }
    *head = NULL;
}
int countAllNodes(Node* head) {
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count; // Works perfect.
}
void reverseList(Node** head) {
    Node* current = *head;
    Node* prev = NULL, * next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    return;
}
void printList(Node* head) {
    if (head == NULL) {
        std::cout << "The given list is empty! " << std::endl;
        return;
    }
    while (head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }
}

int main(int argc, const char* argv[]) {
    // insert code here...
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    Node* nothing = NULL;

    append(&head, 99);
    push(&head, -1);
    //insertAt(second, 25);
    //insertAt(third, 55);
    // insertAt(nothing, 55);
    // deleteNode(&head, 25);
    // deleteFullList(&head);
    printList(head);
    cout << "The total number of nodes in the linked list is : " << countAllNodes(head) << endl;
    // printList(nothing);
    cout << "--------------------------------------------------------- " << endl;
    cout << "REVERSED LIST" << endl;
    reverseList(&head);
    printList(head);
    cout << "The new head is : " << head->data << endl;
    return 0;
}
