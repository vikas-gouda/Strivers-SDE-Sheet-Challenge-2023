#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int> *sortTwoLists(Node<int> *list1, Node<int> *list2)
{
    // Write your code here.
    vector<int> v1;

    while (list1 != NULL)
    {
        v1.push_back(list1->data);
        list1 = list1->next;
    }

    while (list2 != NULL)
    {
        v1.push_back(list2->data);
        list2 = list2->next;
    }

    if (v1.empty())
    {
        return NULL;
    }
    sort(v1.begin(), v1.end());

    Node<int> *ans = new Node<int>(v1[0]);
    Node<int> *return_ans = ans;

    for (int i = 1; i < v1.size(); i++)
    {
        Node<int> *temp = new Node<int>(v1[i]);
        ans->next = temp;
        ans = temp;
    }

    return return_ans;
}
