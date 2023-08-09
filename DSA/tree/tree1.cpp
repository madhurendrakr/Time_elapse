#include <bits/stdc++.h>
using namespace std; 

class node
{
public:
    int data;
    node* left;
    node* right;

};

node* newnode(int val){
    node* node1 =new node();
    node1->data= val ;
    node1 ->left=NULL;
    node1 ->right=NULL;
    return node1;
}

void preorder (node* n){
    while(n!=NULL){
        cout<<n->data <<" ";
        preorder(n->left);
        preorder(n->right);
      
    }
}

int main()
{
//  node * root=newnode(1);
 node * one=newnode(1);
 node * two=newnode(2);
 node * three=newnode(3);
 node * four=newnode(4);
 node * five=newnode(5);
 node * six=newnode(6);

 one->left=two;
 one->right=three;

 two->left=four;
 two->right=five;

 three->left=six;
 
 preorder(one);


return 0;
}

And the some of the other of the fact of the all of the sem and the some of the all of the sem and the some of the all of the fact  and the some of the other of the nation of the all of the fact of the all of the nation of the all of the sem and the some of the all of the  nation of the all of the nation of the all of the fact and the exam and the some of the all of the sem and the some of the all of the fact of  the all of the sem and the some of  other of the nation of the all of the sem and and the some of the all of the fact and the nation of the all of the nation of the all of the sem. And the some of the other of the fact of the other of the sem and the some of the other other nation of the all of the nation of the nation of the other nation of the all of the nation of of the nation of nation.