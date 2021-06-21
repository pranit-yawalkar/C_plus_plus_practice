#include<bits/stdc++.h>
using namespace std;

// Linked List
class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void deleteAtHead(Node* &head, int val){
    if(head->data==val){
        Node* todelete = head;
        head = head->next;
        delete todelete;
    }
}

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void deletion(Node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head, val);
        return;
    }

    Node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }

    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 11);
    insertAtHead(head, 10);
    insertAtHead(head, 15);
    display(head);
    deletion(head, 11);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtHead(head);
    display(head);
    deletion(head, 12);
    display(head);
    insertAtHead(head, 10);
    insertAtHead(head, 15);
    display(head);
    return 0;
}