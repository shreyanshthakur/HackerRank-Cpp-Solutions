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

void diagonal(Node* root) {
    if(!root) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp==NULL) {
            
            if(q.empty()) return;
            cout<<endl;
            q.push(NULL); //push delimiter
        }
        else {
            while(temp) {
                cout<<temp->data<<" ";
                if(temp->left) q.push(temp->left);
                temp=temp->right;
            }
        }
    }
}
    
//Driver Code
int main(){
    /* Constructed binary tree is
            1
          /   \
         2     3
       /   \
      4     5
  */
    Node* root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);
    diagonal(root);

    return 0;
}
