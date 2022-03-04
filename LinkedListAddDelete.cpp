#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node * next;
};
void push(Node ** head, int newValue){
    Node * temp = new Node;
    temp->data = newValue;
    temp->next = (*head);
    (*head) = temp;
}
void insertAt(Node * previousNode , int newValue){
    if(previousNode == NULL){
        cout << "The given linked list is empty, Please use push or append method " << endl;
        return;
    }
    Node * temp = new Node;
    temp->data = newValue;
    temp->next = previousNode->next;
    previousNode->next = temp;
}
void append(Node ** head , int newValue){
    Node * temp = new Node;
    Node * last = *head;
    temp->data = newValue;
    
    if(*head==NULL){
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
void deleteNode(Node ** head , int key){
    Node * temp = *head;
    Node * prev = NULL;
    // case 1 list is empty;
    if (temp == NULL){
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
    while (temp!=NULL && temp->data !=key) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
    return;
}
void printList(Node * head){
    while (head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Node * head = new Node;
    Node * second = new Node;
    Node * third = new Node;
    head->data =1;
    head->next =second;
    second->data =2;
    second->next =third;
    third->data =3;
    third->next =NULL;
    Node * nothing = NULL;
    
    append(&head, 99);
    push(&head, -1);
    insertAt(second, 25);
    insertAt(nothing, 55);
    deleteNode(&nothing, 25);
    printList(head);
    printList(nothing);
    return 0;
}
