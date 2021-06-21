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

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }cout<<"NULL"<<endl;
}

void intersect(Node* &head1, Node* &head2, int pos){
    Node* temp = head1;
    pos--;
    while(pos--){
        temp = temp->next;
    }
    Node* temp2 = head2;
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

int length(Node* &head){
    Node* temp = head;
    int l = 1;
    while(temp!=NULL){
        temp = temp->next;
        l++;
    }
    return l;
}

int instersection(Node* &head1, Node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    Node* ptr1;
    Node* ptr2;
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while(d--){
        ptr1 = ptr1->next;
        if(ptr1==NULL)
            return -1;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2)
            return ptr1->data;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    insertAtTail(head1, 12);
    insertAtTail(head1, 11);
    insertAtTail(head1, 10);
    insertAtTail(head1, 7);
    insertAtTail(head1, 6);
    display(head1);
    insertAtTail(head2, 14);
    insertAtTail(head2, 18);
    display(head2);
    intersect(head1, head2, 3);
    display(head2);

    cout<<instersection(head1, head2)<<endl;
    return 0;
}