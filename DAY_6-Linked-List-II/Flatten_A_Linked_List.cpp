/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
#include <algorithm>
Node *flattenLinkedList(Node *head)
{
    // Write your code here
    vector<int> ans;
    Node *temp = head;

    while (temp != NULL)
    {
        ans.push_back(temp->data);

        if (temp->child != NULL)
        {
            Node *b = temp->child;

            while (b != NULL)
            {
                ans.push_back(b->data);
                b = b->child;
            }
        }

        temp = temp->next;
    }

    sort(ans.begin(), ans.end());
    //   for(int i=0;i<ans.size();i++)
    //   {
    //       cout<<ans[i]<<" ";
    //   }

    Node *fans = new Node(ans[0]);
    Node *ffans = fans;

    for (int i = 1; i < ans.size(); i++)
    {
        Node *store = new Node(ans[i]);
        fans->child = store;
        fans = store;
    }

    return ffans;
}
