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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        vector<int> v;
        ListNode *temp = head;

        while (temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> store;
        int i = v.size() / k;
        int j = 0;
        while (i--)
        {
            vector<int> v1;
            int t = k;
            while (t--)
            {
                v1.push_back(v[j]);
                j++;
            }

            reverse(v1.begin(), v1.end());

            for (int l = 0; l < v1.size(); l++)
            {
                store.push_back(v1[l]);
            }
        }

        while (j != v.size())
        {
            store.push_back(v[j]);
            j++;
        }

        ListNode *ans = new ListNode(store[0]);
        ListNode *fans = ans;
        for (int i = 1; i < store.size(); i++)
        {
            ListNode *temp1 = new ListNode(store[i]);
            ans->next = temp1;
            ans = temp1;
        }

        return fans;
    }
};