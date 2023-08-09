#include <iostream>
using namespace std;
class binarytree
{
public:
    int data;
    binarytree *left;
    binarytree *right;
};
binarytree *newnode(int data)
{
    binarytree *node = new binarytree;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inorder(binarytree* root)
{
    if(root!=NULL){

    inorder(root->left);
    cout << root->data<<endl;
    inorder(root->right);
    }
}

void preorder(binarytree* root)
{
    if(root!=NULL){

    cout << root->data<<endl;
    inorder(root->left);
    inorder(root->right);
    }
}
void postorder(binarytree* root)
{
    if(root!=NULL){

    inorder(root->left);
    inorder(root->right);
    cout << root->data<<endl;
    }
}


int main()
{
    int data;
    // cout << "enter root value : ";
    // cin >> data;
    data=9;
    binarytree* root = newnode(data);
    root->left = newnode(4);
    root->right = newnode(5);
    root->left->left = newnode(7);
    root->left->right = newnode(6);
    cout<<"inorder traversal :"<<endl;
    inorder(root);
    cout<<"preorder traversal :"<<endl;
    preorder(root);
    cout<<"postorder traversal :"<<endl;
    postorder(root);

    return 0;
}