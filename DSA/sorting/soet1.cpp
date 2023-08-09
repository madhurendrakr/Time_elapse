#include <bits/stdc++.h>
using namespace std;

class ListNode
{
    int val;
    ListNode* next;

public:
    ListNode *sortList(ListNode *head)
    {
        set<int> ans;
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        while (temp1)
        {
            ans.insert(temp1->val);
            temp1 = temp1->next;
        }

        auto itr = ans;
        for(auto it:ans)
        {
            temp2->val = it;
            temp2 = temp2->next;
           if(temp2==NULL){
            break ;
           }
        }
    return head;
    }
}
;

int main()
{

    //  cout<<;
    //  cin>> ;
    return 0;
}