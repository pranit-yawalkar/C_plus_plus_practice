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

void evenAfterOdd(Node* &head){
    Node* odd = head;
    Node* even = head->next;
    Node* evenStart = even;

    while(odd->next!=NULL && even->next!=NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 11);
    insertAtTail(head, 67);
    insertAtTail(head, 98);
    insertAtTail(head, 12);
    insertAtTail(head, 9);
    // insertAtTail(head, 45);
    display(head);
    evenAfterOdd(head);
    display(head);
    return 0;
}