#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data=val;
            next=NULL;
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

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void deleteAtHead(Node* &head){
        Node* todelete = head;
        head=head->next;
        delete todelete;
}

void deletion(Node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        if(head->data==val){
            deleteAtHead(head);
            return;
        }
    }

    Node* temp = head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }cout<<"NULL"<<endl;
}

void reverse_display(Node* head){
    if(head==NULL){
        return;
    }
    reverse_display(head->next);
    cout<<head->data<<"->";
}

// iterative approach
Node* iterative_reverse(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next=prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

// recursive approach 
Node* recursive_reverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* newHead = recursive_reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 15);
    insertAtTail(head, 17);
    insertAtTail(head, 11);
    insertAtTail(head, 19);
    display(head);
    reverse_display(head);
    // head = iterative_reverse(head);
    // display(head);
    // head = recursive_reverse(head); 
    // display(head);

    

    return 0;
}