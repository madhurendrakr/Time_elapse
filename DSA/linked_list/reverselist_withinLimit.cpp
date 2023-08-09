// Approach 1 ->  find left pointer node and use it to revere list as required


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *leftptr = head;
        ListNode *temp;

        for (int i = 2; i <= left; i++)
        {
            leftptr = leftptr->next;
        }
        temp = leftptr;

        vector<int> vec;
        for (int i = left; i <= right; i++)
        {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        reverse(vec.begin(), vec.end());

        temp = leftptr;

        for (int j = left, k = 0; j <= right; j++)
        {
            temp->val = vec[k++];
            temp = temp->next;
        }
        return head;
    }
};