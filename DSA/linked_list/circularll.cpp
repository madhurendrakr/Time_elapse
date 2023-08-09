#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void insertastend(node** head ,int data){
    node* newnode= new node();
    newnode->data=data;
    node* temp= (*head);
    do
    {
    cout<<"nodeuu6";
       temp=temp->next;
    }
     while (temp->next!=NULL);
temp->next= newnode;
newnode->next=(*head) ;
    
}
void print(node *head)
{
    // cout<<"hii";
    node *temp = head;
    do
    {
        cout << temp->data<<" ";
        temp=temp->next;
    } while (temp != head);
}
int main()
{
    node *head;
    node *one = new node();
    node *two = new node();
    node *third = new node();
    node *forth = new node();
    node *fifth = new node();
    node *sixth = new node();

    // assigning data
    one->data = 1;
    two->data = 2;
    third->data = 3;
    forth->data = 4;
    fifth->data = 5;
    sixth->data = 6;

    // connecting node
    one->next = two;
    two->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;
    sixth->next = one;
    insertastend(&head ,8);

    head = one;
    // cout<<"hii6";
    print(head);


    insertastend(&head ,9);

    print(head);
    return 0;
}