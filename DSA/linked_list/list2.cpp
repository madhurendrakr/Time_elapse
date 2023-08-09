#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

Node *newnode(int data)
{
    Node *node = new Node();
    node->value = data;
    node->next = NULL;

    return node;
}

void insert(Node *&node, int data)
{
    Node *temp = node;
    int postion;
    cout << "1.Begin" << endl
         << "2.postion" << endl
         << "End" << endl;

    cout << " Enter position to insert node :" << endl;
    Node *newNode = newnode(data);

    cin >> postion;
    switch (postion)
    {

    case 1:
        newNode->next = node;
        node = newNode;
       
        break;

    case 2:
        for (int i = 2; i < postion; i++)
        {
            temp = temp->next;
        }
        temp->next=newNode;
        break;

    case 3:
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
      
        break;
    }
}

int main()
{
    Node *head = NULL;
    int n;
    cout<<" Enter number of data to insert:"<<endl;
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
      int data;
      cout<<"Enter data :"<<endl;
      cin>>data;
    insert(head,data);
    }
    

    return 0;
}