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
        head=n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
};

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }cout<<"NULL"<<endl;
}


// Time Complexity->O(N)
Node* reverse_k(Node* &head, int k){
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;

    int count = 0;
    while(currptr!=NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr!=NULL){
        head->next = reverse_k(nextptr, k);
    }

    return prevptr;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 10);
    insertAtTail(head, 2);
    insertAtTail(head, 5);
    display(head);

    Node* newHead = reverse_k(head, 2);
    display(newHead);
    
    return 0;
}