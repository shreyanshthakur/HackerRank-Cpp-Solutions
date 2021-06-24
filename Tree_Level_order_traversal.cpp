#include <bits/stdc++.h>

using namespace std;
	
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/
//mycode
    void levelOrder(Node * root) {
        if(root==NULL){return;}
        queue<Node *> q;
        q.push(root);
        while(q.empty()==false){
            Node *node= q.front();
            cout<<node->data<<" ";
            q.pop();
            
            if(node->left != NULL)
                q.push(node->left);
            if(node->right != NULL)
                q.push(node->right);    
        }
        

    }
    //mycode

}; //End of Solution