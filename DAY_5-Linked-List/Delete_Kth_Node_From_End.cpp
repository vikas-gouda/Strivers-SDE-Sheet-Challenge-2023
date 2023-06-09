/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *removeKthNode(Node *head, int n)
{
    // Write your code here.
    if (head == NULL || (head->next == NULL && n == 1))
    {
        return NULL;
    }

    Node *temp = head;

    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    temp = head;

    if (cnt == n)
    {
        head = head->next;
        return head;
    }

    cnt = cnt - n;
    int i = 1;
    Node *curr = head;
    while (i < cnt)
    {
        curr = curr->next;
        i++;
    }
    temp = curr->next;
    curr->next = curr->next->next;
    temp->next = NULL;
    delete temp;
    return head;
}
