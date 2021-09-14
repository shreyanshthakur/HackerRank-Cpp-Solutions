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

void iterativePreorderTraversal(Node* root) {
    if(root==NULL) return;
    stack<Node*> s;
    s.push(root);
    while(!s.empty()) {
        Node* temp = s.top();
        cout<<s.top()->data<<" ";
        s.pop();
        if(temp->right!=NULL) {
            s.push(temp->right);
        }
        if(temp->left!=NULL) {
            s.push(temp->left);
        }
        
    }
}
    
//Driver Code
int main(){
    /* Constructed binary tree is
            10
          /   \
        8      2
      /  \    /
    3     5  2
  */
    Node* root = newNode(10);
    root->left = newNode(8);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->left = newNode(2);
    iterativePreorderTraversal(root);

    return 0;
}
