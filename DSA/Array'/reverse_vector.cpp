#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    stack<int> st1, st2;

    string name = "Madhurendra Kumar";

    cout << "String Before reversing :" << endl;
    cout << name << endl;

    for (auto m : name)
    {
        st2.push(m);
    }

    cout <<endl<< "string After reversing :" << endl;

    while (!st2.empty())
    {
        cout << char(st2.top());
        st2.pop();
    }
    cout << endl<<endl;
    cout << "Array Before reversing :" << endl;
    for (auto &n : arr)
        cout << n << " ";

    for (auto n : arr)
        st1.push(n);

    cout << endl<<endl<< "After reversing :" << endl;
    while (!st1.empty())
    {
        cout << st1.top() << " ";
        st1.pop();
    }
    cout << endl;
    cout <<"stack is empty or not : "<< st1.empty() << endl;
   

    return 0;
}