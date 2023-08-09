// A complete working C++ program to
// demonstrate all insertion methods
// on Linked List
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node
{
	public:
	int data;
	Node *next;
};

// Given a reference (pointer to pointer)
// to the head of a list and an int, inserts
// a new node on the front of the list.
void push(Node* &head_ref, int new_data)
{
	
	// 1. allocate node
	Node* new_node = new Node();

	// 2. put in the data
	new_node->data = new_data;

	// 3. Make next of new node as head
	new_node->next = (head_ref);

	// 4. move the head to point
	// to the new node
	(head_ref) = new_node;
}

// Given a node prev_node, insert a new
// node after the given prev_node


// This function prints contents of
// linked list starting from head
void printList(Node *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

// Driver code
int main()
{
	
	// Start with the empty list
	Node* head = NULL;
	
	
	
	// Insert 7 at the beginning.
	// So linked list becomes 7->6->NULL
	push(head, 7);
	
	// Insert 1 at the beginning.
	// So linked list becomes 1->7->6->NULL
	push(head, 1);
	
    push(head, 8);
    push(head, 5);
    push(head, 5);
    push(head, 5);
	

	
	cout<<"Created Linked list is: ";
	printList(head);
	
	return 0;
}
// This code is contributed by rathbhupendra, arkajyotibasak

