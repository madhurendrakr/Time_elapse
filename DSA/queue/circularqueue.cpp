#include <iostream>
using namespace std;

#define MAX 15
class cqueue
{
private:
    int front;
    int rear;

public:
    int arr[MAX];
    cqueue()
    {
        front = -1;
        rear = -1;
    }
    bool queueEmpty();
    bool queuefull();
    bool enqueue(int data);
    int dequeue();
   void printcqueue();
};

bool cqueue ::queueEmpty()
{
    if ((front == -1) || (rear > front))
    {
        cout << "Empty queue " << endl;
        return true;
    }
    return false;
}

bool cqueue ::queuefull()
{
    if (((front == MAX - 1) && (rear == 0)) || (front == (rear - 1)))
    {
        cout << "Empty is full " << endl;
        return true;
    }
    return false;
}

bool cqueue:: enqueue(int data)
{
    if (queuefull())
    {
        return -1;
    }
    else
    {
    if (front==-1){
        front =0 ;
    }
     arr[rear==(rear+1)%MAX]=data ;
     cout<<"Enqueued Element :"<<data<<endl;
    }
}
int cqueue:: dequeue()
{
    int element ;
    if (queueEmpty())
    {
        return -1;
    }
    else
    {
    element =arr[front++];
    cout<<"Dequeued Element :"<<element<<endl;
    }
}
void cqueue::printcqueue(){
    while(queueEmpty()){
        cout<<arr[front]<<endl;
       dequeue();
    }
}

int main()
{

    cqueue obj1;
    obj1.enqueue(4);
    obj1.enqueue(6);
    obj1.enqueue(9);
    obj1.enqueue(1);
    obj1.enqueue(0);
    obj1.enqueue(3);
    obj1.enqueue(45);
    obj1.enqueue(8);

obj1.printcqueue();
obj1.dequeue();
obj1.dequeue();
obj1.dequeue();

obj1.printcqueue();
    return 0;
}