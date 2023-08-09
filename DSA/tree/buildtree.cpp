#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }

};

Node *buildtree(Node *root)
{
    int data;
    cout << "Enter data : ";
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left of node " << data << endl;
    root->left = buildtree(root->left);

    cout << "Enter data for right of node " << data << endl;
    root->right = buildtree(root->right);

    return root;
}

void levelorder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


int maxheight(auto root)
{

    if (root ==NULL)
    {
        return 0;
    }

    int leftheight = maxheight(root->left);
    int rightheight = maxheight(root->right);

int maxhgt=max(leftheight, rightheight);

    return  maxhgt+1;
}


void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}

int main()
{
    Node *root = NULL;
    root = buildtree(root);

    preorder(root);

    cout << endl
         << " level order traversal :" << endl;
    levelorder(root);

    cout<<" height of tree :";
    int height =maxheight(root);


    cout<<height;
    and the some of the other of the fact

    return 0;

}