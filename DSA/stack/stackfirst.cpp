#include <iostream>
using namespace std;
// #define  max 10 ;
class stack
{
public:
    int arr[10];
    int top;
    stack()
    {
        top = -1;
        cout << "constructor called" << endl;
    }
};
int main()
{
    stack *stack1;
    *stack1 = new int[10] ;
    return 0;
}