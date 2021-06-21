#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

int sumAtK(Node* root, int k){
    if(root==NULL)
        return -1;
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int level = 0, sum = 0;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node){
            if(level==k)
                sum+=node->data;
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        else if(!q.empty()){
            level++;
            q.push(NULL);
        }
    }
    return sum;
}

int main(){
    Node* root = new Node(12);
    root->left = new Node(10);
    root->right = new Node(14);
    root->left->left = new Node(8);
    root->left->right = new Node(11);
    root->right->left = new Node(13);
    root->right->right = new Node(15);

    cout<<sumAtK(root, 2)<<endl;
    return 0;
}