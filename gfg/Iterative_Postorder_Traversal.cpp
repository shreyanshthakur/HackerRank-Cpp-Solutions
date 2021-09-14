#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
Node *newNode(int data)
{
    Node *node = new Node;
    node->data = data;
    node->right = node->left = NULL;
    return node;
}

void iterativePostorderTraversal(Node* root) {
    if(root==NULL) return;
    stack<Node*> s,r;
    s.push(root);
    while(!s.empty()) {
        Node* temp = s.top();
        r.push(temp);
        s.pop();
        if(temp->left!=NULL) {
            s.push(temp->left);
        }
        if(temp->right!=NULL) {
            s.push(temp->right);
        }
    }
    while(!r.empty()) {
        cout<<r.top()->data<<" ";
        r.pop();
    }
}
    
//Driver Code
int main(){
    Node* root = NULL;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    iterativePostorderTraversal(root);

    return 0;
}
