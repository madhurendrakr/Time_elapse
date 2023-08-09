#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<char> lst;
    for (int i = 0; i < 10; i++)
    {
        char c = 'a' + i;
        lst.push_back(c);
    }

    for (auto &m : lst)
    {
        cout << m << " " ;
    }

    lst.reverse();
    cout << endl;
    for (auto &m : lst)
    {
        cout << m << " " ;
    }

    return 0;
}