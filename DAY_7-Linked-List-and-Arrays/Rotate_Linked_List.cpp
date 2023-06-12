/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k)
{
    // Write your code here.
    if (head == NULL)
        return head;

    Node *temp1 = head;
    int size = 1;
    while (temp1->next)
    {
        temp1 = temp1->next;
        size++;
    }
    temp1->next = head;

    k = k % size;
    int val = size - k - 1;
    Node *temp2 = head, *temp3 = head;
    while (val--)
    {
        temp2 = temp2->next;
    }
    temp3 = temp2->next;
    temp2->next = NULL;

    return temp3;
}