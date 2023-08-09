#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int num, num1, num2, temp;

    do
    {   
        cout<<endl;
        cout << "Enter the operation :" << endl;
        cout << "0. Exist operation " << endl;
        cout << "1. Push in Stack" << endl;
        cout << "2. Acess Top Element" << endl;
        cout << "3. Pop Element " << endl;

        cin >> num;
        switch (num)
        {
        case 1:
            cout << " Enter the number of Element to push :" << endl;
            cin >> num1;
            for (int i = 0; i < num1; i++)
            {
                cout << "Enter " << i + 1 << " element" << endl;
                cin >> temp;
                st.push(temp);
            }
            break;

        case 2:
            if (!st.empty())
            {
                cout << st.top();
            }
            else
            {
                cout << "stack is Empty " << endl;
            }
            break;

        case 3:
            if (st.empty())
            {
                cout << "stack is Empty " << endl;
                break;
            }
            cout << "Enter the Number of element to pop out" << endl;
            cin >> num2;
            if(num2>st.size()){
                cout<<"Only "<<st.size()<<" element is available "<<endl;
                
            }
            for (int j = 0; j < num2; j++)
            {
                if (st.empty())
                {
                    cout << "stack is Empty " << endl;
                    break;
                }
                cout << j + 1 << " element is popped out " << st.top() << endl;
                st.pop();
            }
            break;
          case 0:
            break;
          
        default:
            cout << "Enter valid option :" << endl;
            break;
        }
    } while (num != 0);
    cout<<endl<<endl;
    cout << "OPERATION ENDED " << endl<<endl;

    return 0;
}

//Due to the some of the other of the fact and the figure of the all of the sem and the some of the other of the nation of the all of the sem and the some of the other of the fact and the some of the all of the sem and the some of the all of the  nation of the all of the fact and the figure of the all of the sem and the some of the all of the sem and the some of the all of the fact and the figure of the all of the sem 