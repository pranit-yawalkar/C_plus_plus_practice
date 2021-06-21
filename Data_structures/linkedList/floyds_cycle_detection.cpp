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
    Node* temp = head;

    if(head==NULL){
        head = n;
        return;
    }

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

void makeCycle(Node* &head, int pos){
    Node* temp = head;
    Node* startNode;

    int count = 1;
    while (temp->next!=NULL)
    {
        if(count = pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool detectCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

void removeCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (fast!=slow);
    
    fast = head;
    while(fast->next!=slow->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 9);
    insertAtTail(head, 5);
    insertAtTail(head, 7);
    insertAtTail(head, 5);
    display(head);
    makeCycle(head, 3);
    // display(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    return 0;
}