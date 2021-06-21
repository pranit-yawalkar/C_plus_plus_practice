#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node*next;
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
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = n;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }cout<<"NULL"<<endl;
}

Node* merge_iterative(Node* &head1, Node* &head2){
    Node* p1 = head1;
    Node* p2 = head2;
    Node* dummyNode = new Node(-1);
    Node* p3 = dummyNode;

    while(p1!=NULL && p2!=NULL){
        if(p1->data<=p2->data){
            p3->next = p1;
            p1 = p1->next;
        }
        else{
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while(p1!=NULL){
        p3->next = p1;
        p1 = p1->next;
    }
    while(p2->next!=NULL){
        p3->next = p2;
        p2 = p2->next;
    }
    return dummyNode->next;
}

Node* merge_recursive(Node* &head1, Node* &head2){
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    Node* result;
    if(head1->data<=head2->data){
        result = head1;
        result->next = merge_recursive(head1->next, head2);
    }
    else{
        result = head2;
        result->next = merge_recursive(head1, head2->next);
    }
    return result;
}

int main(){
    int arr1[] = {2, 5, 6, 7};
    int arr2[] = {3, 4, 7, 9};
    Node* head1 = NULL; Node* head2 = NULL;
    for(int i=0;i<4;i++)
        insertAtTail(head1, arr1[i]);
    for(int i=0;i<4;i++)
        insertAtTail(head2, arr2[i]);
    display(head1);
    display(head2);
    Node* newhead = merge_recursive(head1, head2);
    display(newhead);
    // newhead = merge_recursive(head1, head2);
    // display(newhead);

    return 0;
}