#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    if(head!=NULL)
        head->prev = n;
    head = n;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head ->next;
    }cout<<endl;
}


void insertAtTail(Node* &head, int val){    
    Node* n = new Node(val);
    if(head==NULL){
        insertAtHead(head, val);
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(Node* &head){
    Node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

void deletion(Node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(temp!=NULL && count!=pos){
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if(temp->next!=NULL)
        temp->next->prev = temp->prev;
    delete temp;
}




int main(){
    Node* head = NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 11);
    insertAtTail(head, 10);
    insertAtTail(head, 8);
    insertAtTail(head, 6);
    insertAtTail(head, 3);
    insertAtHead(head, 1);
    display(head);
    deletion(head, 4);
    display(head);
    deletion(head, 1);
    display(head);  

    return 0;
}