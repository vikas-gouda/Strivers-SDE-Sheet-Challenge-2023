/****************************************************************

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

*****************************************************************/

Node *findIntersection(Node *firstHead, Node *secondHead)
{
    // Write your code here
    Node *temp1 = firstHead;
    Node *temp2 = secondHead;

    int size1 = 0;
    int size2 = 0;

    while (temp1 != NULL)
    {
        size1++;
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        size2++;
        temp2 = temp2->next;
    }

    Node *big = NULL;
    Node *small = NULL;
    int diff = 0;
    if (size1 > size2)
    {
        big = firstHead;
        small = secondHead;
        diff = size1 - size2;
    }
    else
    {
        big = secondHead;
        small = firstHead;
        diff = size2 - size1;
    }

    while (diff--)
    {
        big = big->next;
    }

    while (big != NULL && small != NULL)
    {
        if (big == small)
        {
            return big;
        }

        big = big->next;
        small = small->next;
    }
    return NULL;
}