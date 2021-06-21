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

int getHeight(Node* root){
    if(root==NULL)
        return 0;
    int lh = getHeight(root->left);
    int rh = getHeight(root->right);
    return max(lh, rh) + 1;
}

int getDia(Node* root){
    if(root==NULL)
        return 0;
    int lh = getHeight(root->left);
    int rh = getHeight(root->right);
    int currDia = lh + rh + 1;
    int ld = getDia(root->left);
    int rd = getDia(root->right);
    return max(currDia, max(ld, rd));
}


int main(){
    Node* root = new Node(12);
    root->left = new Node(10);
    root->right = new Node(15);
    root->left->left = new Node(8);
    root->left->right = new Node(11);
    root->left->right->right = new Node(10);
    root->left->right->right->right = new Node(5);
    root->left->right->right->right = new Node(4);
    root->right->left = new Node(13);
    root->right->right = new Node(16);
    cout<<getDia(root)<<endl;
    return 0;
}