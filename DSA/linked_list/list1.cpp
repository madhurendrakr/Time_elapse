#include <iostream>
using namespace std;

class Node
{
public:
    int data;

    Node *next;
    Node()
    {
        this->next = NULL;
    }
};

void push(Node *&head)
{
    static int i = 1;
    int data;
    cout << " Enter data " << i++ << " :";
    cin >> data;

    while (data != -1)
    {

        Node *newnode = new Node();
        newnode->data = data;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next = newnode;
            
        }
        cout << " Enter data " << i++ << " :";
        cin >> data;
    }
    cout<<" List ended "<<endl;
    i=i-1;
    return;
}

bool delete1(Node* &head)
{
    int val;
    if (head== NULL)
    {
        cout << "Empty list :";
        return false;
    }
    else
    { Node*temp=head;
        while (temp->next != NULL)
        {
            val = (temp->data);
            cout << "deleted element : "<<val<< endl;
            temp = temp->next;
        }
    }
}
void display(Node *&head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    int num;
   
   do{   
    cout << "Enter the Operation :"<<endl;
    cout << "1.Insertion " << endl;
    cout << "2.Deletion " << endl;
    cout << "3.Display " << endl;
    cin >> num;
    switch (num)
    {
    case 1:
        /* code */
        push(head);
        break;
    case 2:
        /* code */
        delete1(head);
        break;
    case 3:
        /* code */
        display(head);
        break;

    default:
        cout << " Invalid Operation : " << endl;
        break;
    }
    cout<<endl;
   }
   while(num!=-1);

    return 0;
}