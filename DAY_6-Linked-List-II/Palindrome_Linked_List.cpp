#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head)
{
    // Write your code here.
    if (head == NULL || head->next == NULL)
    {
        return true;
    }

    vector<int> ans;

    while (head != NULL)
    {
        ans.push_back(head->data);
        head = head->next;
    }

    int n = ans.size();
    for (int i = 0; i < n; i++)
    {
        if (ans[i] != ans[n - 1 - i])
        {
            return false;
        }
    }

    return true;
}