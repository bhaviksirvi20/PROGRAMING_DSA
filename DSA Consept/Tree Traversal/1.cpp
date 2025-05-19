#include<iostream>
using namespace std;

struct tree{
  char data;
  tree *left;
  tree *right;
  
  tree(char val){
      data = val;
      left = right = NULL;
  }
};

void preorder(tree *root){
    if(root == NULL) return;
    cout << root->data << " " ;
    preorder(root->left);
    preorder(root->right);
}
void inorder(tree *root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " " ;
    inorder(root->right);
}
void postorder(tree *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " " ;
}

int main()
{
    tree *root = new tree('A');
    root->left = new tree('B');
    root->right = new tree('C');
    root->left->left = new tree('D');
    root->left->right = new tree('E');
    root->right->left = new tree('F');
    root->right->right = new tree('G');
    
    cout << "-----------------------" << endl;
    
    cout << "PRE-ORDER : " << endl;
    cout << "ROOT : LEFT : RIGHT " << endl;
    preorder(root);

    cout << endl;
    cout << "-----------------------" << endl;

    cout << "IN-ORDER : " << endl;
    cout << "LEFT : ROOT : RIGHT " << endl;
    inorder(root);

    cout << endl;
    cout << "-----------------------" << endl;

    cout << "POST-ORDER : " << endl;
    cout << "LEFT : RIGHT : ROOT" << endl;
    postorder(root);

    cout << endl;
    cout << "-----------------------" << endl;
}