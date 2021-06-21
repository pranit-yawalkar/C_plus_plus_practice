#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    if(head==NULL){
        n->next = n;
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    if(head==NULL){
        insertAtHead(head, val);
        return;
    }
    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;            
    }
    temp->next = n;
    n->next = head;
}

void display(Node* head){
    Node* temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
    cout<<endl;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = head->next;
    Node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(Node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count!=pos-1){
        temp = temp->next;
        count++;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 10);
    insertAtTail(head, 18);
    insertAtTail(head, 15);
    insertAtTail(head, 13);
    display(head);
    insertAtHead(head, 9);
    display(head);
    deletion(head, 2);
    display(head);
    deletion(head, 1);
    display(head);

    return 0;
}