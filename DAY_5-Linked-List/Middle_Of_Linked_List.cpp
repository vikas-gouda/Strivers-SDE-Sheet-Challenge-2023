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

Node *findMiddle(Node *head)
{
    // Write your code here

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *fast = head;
    Node *slow = head;

    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;

        if (fast->next != NULL)
        {
            fast = fast->next;
        }
    }

    return slow;
}
