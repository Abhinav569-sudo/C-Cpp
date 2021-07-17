//Linked list
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int d){
            data = d;
            next = NULL;
        }
};
//Insert at the head of the linked list
void createLinkedList(node* &head, int val){
    if(head == NULL){
        head = new node(val);
        return;
    }
    node* temp = new node(val);
    temp->next = head;
    head = temp;
}
//Insert at the end of the linked list
void insertAtTail(node* &head, int val){
    if(head == NULL){
        head = new node(val);
        return;
    }
    node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    node* temp = new node(val);
    curr->next = temp;
}
//Insert in the middle of the linked list
void insertAtMiddle(node* &head, int pos, int val){
    node* curr = head;
    for(int i=0; i<pos-1; i++){
        curr = curr->next;
    }
    node* temp = new node(val);
    temp->next = curr->next;
    curr->next = temp;
}
//To reverse the linked list
void reverseList(node *&head){
    node* prev= NULL;
    node* curr = head;

    while(curr!=NULL){
        node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head= prev;

}

void print(node* head){
    while(head!=NULL){
        cout << head->data << "->";
        head = head->next;
    }
}

int main(){
    node* head = NULL;
    cout << "Linked list is :" << endl;
    createLinkedList(head, 4);
    createLinkedList(head, 3);
    createLinkedList(head, 2);
    createLinkedList(head, 1);
    //print(head);
    insertAtTail(head, 6);
    insertAtMiddle(head, 4, 5);
    print(head);
    cout << "\n";
    cout << "Reverse Linked list is :" << endl;
    reverseList(head);
    print(head);

    return 0;
}
