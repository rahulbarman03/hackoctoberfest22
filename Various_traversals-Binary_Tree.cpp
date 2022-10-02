#include<bits/stdc++.h>
using namespace std;
 

/*
          Binary Tree for the below code:

                       1
                     /   \
                    2     3
                   / \   / \
                  4  5  7   8
                    /      / \
                   6      9  10
                   
*/

//structure of binary tree
struct Node{
  int val;
  Node *left;
  Node *right;

  Node(int data){
    val=data;
    left=right=NULL;
  }
};

//Recursive Pre-Order
void preOrder(Node *root){
  if(root==NULL) return;
  cout<<root->val<<" ";
  preOrder(root->left);
  preOrder(root->right);
}

//Recursive In-Order
void inOrder(Node *root){
  if(root==NULL) return;
  inOrder(root->left);
  cout<<root->val<<" ";
  inOrder(root->right);
}

//Recursive Post-Order
void postOrder(Node *root){
  if(root==NULL) return;
  
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->val<<" ";
}


//Level Order Traversal
void levOrder(Node *root){
  if(root==NULL) return;
  queue<Node*> q;
  q.push(root);
  while(1){
    int size = q.size(); // use this instead of q.size() in loop becoz size is changing with every iteration...
    rof(0,size,1){
      Node *temp = q.front();
      q.pop();
      if(temp->left!=NULL) q.push(temp->left);
      if(temp->right!=NULL) q.push(temp->right);
      cout<<temp->val<<" ";
    }
    if(q.empty()) break;
  }
  
}


// Iterative preOrder
void preOrderIt(Node *root){
  if(root==NULL) return;

  stack<Node*> st;
  st.push(root);
  while(!st.empty()){
    Node* tmp = st.top();
    st.pop();
    cout<<tmp->val<<" ";
    if(tmp->right) st.push(tmp->right);
    if(tmp->left) st.push(tmp->left);
  }

}


// Iterative inOrder
void inOrderIt(Node *root){
  if(root==NULL) return;
  stack<Node*> st;
  Node* node=root;
  while(1){
    if(node!=NULL){
      st.push(node);
      node=node->left;
    }
    else{
      if(st.empty()) break;
      node = st.top();
      cout<<node->val<<" ";
      st.pop();
      node=node->right;
    }
  }  
}


// Iterative postOrder
void postOrderIt2(Node* root){
  stack<Node*> st1;
  stack<int> st2;
  st1.push(root);

  while(!st1.empty()){
    Node *tmp = st1.top();
    st1.pop();
    st2.push(tmp->val);
    if(tmp->left) st1.push(tmp->left);
    if(tmp->right) st1.push(tmp->right);
  }
  
  while(!st2.empty()){
    cout<<st2.top()<<" ";
    st2.pop();
  }
}


int main(){

  Node *root=new Node(1);
  root->left=new Node(2);
  root->left->left=new Node(4);
  root->left->right=new Node(5);
  root->left->right->left=new Node(6);
  root->right=new Node(3);
  root->right->left=new Node(7);
  root->right->right=new Node(8);
  root->right->right->left=new Node(9);
  root->right->right->right=new Node(10);

  cout<<"PreOrder Traversal: ";
  preOrder(root);
  cout<<endl;

  cout<<"InOrder Traversal: ";
  inOrder(root);
  cout<<endl;

  cout<<"PostOrder Traversal: ";
  postOrder(root);
  cout<<endl;

  cout<<"LevOrder Traversal: ";
  levOrder(root);
  cout<<endl;

  cout<<"PreOrder Traversal(Iterative): ";
  preOrderIt(root);
  cout<<endl;  

  cout<<"PostOrder Traversal 2 stack(Iterative): ";
  postOrderIt2(root);
  cout<<endl;

  cout<<"InOrder Traversal(Iterative): ";
  inOrderIt(root);
  cout<<endl;
  return 0;
}


