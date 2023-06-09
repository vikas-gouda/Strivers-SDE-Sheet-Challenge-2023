/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *l1, Node *l2)
{
    // Write your code here.
    vector<int> ans;
    vector<int> num1;
    vector<int> num2;

    while (l1 != NULL)
    {
        num1.push_back(l1->data);
        l1 = l1->next;
    }

    while (l2 != NULL)
    {
        num2.push_back(l2->data);
        l2 = l2->next;
    }

    int n = num1.size();
    int m = num2.size();
    int carry = 0;
    int i = 0;
    int sum = 0;
    int last_digit = 0;
    while (i != n && i != m)
    {

        sum = (num1[i] + num2[i] + carry);
        last_digit = sum % 10;
        carry = sum / 10;
        ans.insert(ans.begin(), last_digit);
        i++;
    }

    while (i < n)
    {
        sum = num1[i] + carry;
        last_digit = sum % 10;
        carry = sum / 10;
        ans.insert(ans.begin(), last_digit);
        i++;
    }

    while (i < m)
    {
        sum = num2[i] + carry;
        last_digit = sum % 10;
        carry = sum / 10;
        ans.insert(ans.begin(), last_digit);
        i++;
    }

    if (carry != 0)
    {
        ans.insert(ans.begin(), carry);
    }

    reverse(ans.begin(), ans.end());

    Node *ans_node = new Node(ans[0]);
    Node *node = ans_node;
    for (int i = 1; i < ans.size(); i++)
    {
        Node *temp = new Node(ans[i]);
        ans_node->next = temp;
        ans_node = temp;
    }

    return node;
}
