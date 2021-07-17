#include<iostream>
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
//Insertion
//To insert at the head node
void insertAtHead(node* &head,int val){
    if(head==NULL){
        head = new node(val);
        return;
    }
    node* temp = new node(val);
    // (*temp).next =head;
    temp->next = head;
    head = temp;
}
//To find the length of the list
int length(node* head){
    int count = 0;
    while(head != NULL){
        head = head->next;
        count++;
    }
    return count;
}
//To print the linked list
void print(node* head){
    while(head!=NULL){
        cout << head->data << "->";
        head = head->next;
    }
}
//inset at tail of the linked list
void insertAtTail(node* &head,int val){
    if(head==NULL){
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
//To insert at the middle of the linked list
void insertAtMiddle(node* &head, int pos, int val){
    if(head == NULL || pos == 0){
        insertAtHead(head ,val);
    }else if(pos > length(head)){
        insertAtTail(head, val);
        return;
    }
    node* curr = head;
    for(int i=0; i<pos-1; i++){
        curr = curr->next;
    }
    node* temp = new node(val);
    temp->next = curr->next;
    curr->next = temp;
}
//Deletion
//Delete from the first node
void deleteHead(node* &head){
    if(head == NULL){
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}
//Delete from the tail
void deleteTail(node* &head){
    node* curr = head;
    while(curr->next->next != NULL){
        curr = curr->next;
    }
    node* temp = curr->next;
    curr->next = NULL;
    delete temp;
}
//Delete from the middle
void deleteMiddle(node* &head, int pos){
    if(head == NULL){
        return;
    }else if(pos > length(head)){
        deleteTail(head);
    }else if(pos == 0){
        deleteHead(head);
        return;
    }
    node* curr = head;
    for(int i=0; i<pos-1; i++){
        curr = curr->next;
    }
    node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
}
//Search
bool Search(node* head, int key){
    node* curr = head;
    while(curr != NULL){
        if(curr->data == key){
            return 1;
            curr = curr->next; //
        }
    }
    return 0;
}
bool searchRecursive(node* head, int key){
    if(head == NULL){
        return 0;
    }
    if(head->data == key){
        return 1;
    }
    return searchRecursive(head->next, key);
}
//Reversing the linked list
void reverseList(node* &head){
    node* prev = NULL, *curr = head, *fwd = head;
    while(curr != NULL){
        fwd = fwd->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    head = prev;
}
//main function
int main(){
    node* head = NULL;
    insertAtHead(head,4);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtTail(head,5);
    insertAtMiddle(head, 2, 3);
    //deleteHead(head);
    //cout << length(head) << endl;
    print(head);

    //searchRecursive(head, 5);

    reverseList(head);
    cout << endl;
    print(head);
    return 0;

}
