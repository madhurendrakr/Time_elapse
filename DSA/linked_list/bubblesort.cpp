#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void bubblesort(Node *&root)
{
    Node *head = root;
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    head = root;
    Node *temp1 = head;

    bool swap = true;

    while (true)
    {
        swap = false;

        while (temp1->next != NULL)
        {

            if (temp1->val > temp1->next->val)
            {
                int temp = temp1->val;
                temp1->val = temp1->next->val;
                temp1->next->val = temp;

                temp1 = temp1->next;

                swap = true;
            }

            else
            {
                temp1 = temp1->next;
            }
        }
        temp1 = head;

        if (swap == false)
        {
            break;
        }
    }

    cout << endl;

    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(2);
    head->next->next->next = new Node(0);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(61);
    head->next->next->next->next->next->next = new Node(7);

    bubblesort(head);

    //  while (head != NULL)
    //  {
    //    cout << head->val << " ";
    //    head = head->next;
    //    cout<<"hii" ;
    //  }

    return 0;
}