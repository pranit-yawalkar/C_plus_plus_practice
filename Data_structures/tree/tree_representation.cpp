#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

int main(){
    struct Node* root = new Node(12);
    root->left = new Node(14);
    root->right = new Node(15);
    root->left->left = new Node(16);
    root->left->right = new Node(20);
    return 0;
}