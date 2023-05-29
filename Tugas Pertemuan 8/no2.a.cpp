#include <iostream>

using namespace std;
struct Node {
int data;
struct Node *left;
struct Node *right;

Node(int data){
  this -> data = data;
left = right = NULL;
} 
};

void preorderTransversal(struct Node* node){
  if(node == NULL) return;

  cout << node -> data << " ";
  preorderTransversal(node -> left);
  preorderTransversal(node -> right);
  
}

void postorderTransversal(struct Node* node){
  if (node == NULL) return;

  postorderTransversal(node -> left);
  postorderTransversal(node -> right);
  cout << node -> data << " ";
}

  void inorderTransversal(struct Node* node){
    if (node == NULL) return;
    
    inorderTransversal(node -> left);
      cout << node -> data << " ";
      inorderTransversal(node -> right);
  }


int main(){
  struct Node* root = new Node(15);
  root -> left = new Node (30);
  root -> right = new Node (27);
  root -> left -> left = new Node (25);
  root -> left -> right = new Node (29);

  cout << "Inorder Transversal Output ";
  inorderTransversal(root);

  cout <<"\nPreorder Transversal Output ";
  preorderTransversal(root);
  
  cout <<"\nPostorder Transversal Output ";
  postorderTransversal(root);
}