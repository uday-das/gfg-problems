// Merge two sorted linked lists

// { Driver Code Starts
#include <iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *sortedMerge(struct Node *a, struct Node *b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int data;
        cin >> data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin >> data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin >> data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for (int i = 1; i < m; i++)
        {
            cin >> data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends

// Function to merge two sorted linked list.
Node *sortedMerge(Node *head1, Node *head2)
{
    if (head1 == NULL)
        return head1;
    if (head2 == NULL)
        return head2;

    Node *head, *p, *nw;
    nw = p = head = NULL;
    Node *t1 = head1;
    Node *t2 = head2;

    if (t1->data < t2->data)
    {
        nw = new Node(t1->data);
        p = head = nw;
        t1 = t1->next;
    }
    else if (t2->data < t1->data)
    {
        nw = new Node(t2->data);
        p = head = nw;
        t2 = t2->next;
    }
    else
    {
        nw = new Node(t1->data);                        // 1st node created
        p = head = nw;                                  // pointing p and head to 1st node

        nw = new Node(t2->data);
        p->next = nw;                                   // 1st node linked to 2nd
        p = p->next;                                    // pointing p to 2nd node

        t1 = t1->next;
        t2 = t2->next;
    }

    while (t1 != NULL && t2 != NULL)
    {
        if (t1->data < t2->data)
        {
            nw = new Node(t1->data);
            p->next = nw;
            p = p->next;
            t1 = t1->next;
        }
        else if (t2->data < t1->data)
        {
            nw = new Node(t2->data);
            p->next = nw;
            p = p->next;
            t2 = t2->next;
        }
        else
        {
            nw = new Node(t1->data);
            p->next = nw;
            p = p->next;
            nw = new Node(t2->data);
            p->next = nw;
            p = p->next;

            t1 = t1->next;
            t2 = t2->next;
        }
    }
    while (t1 != NULL)
    {
        nw = new Node(t1->data);
        p->next = nw;
        p = p->next;
        t1 = t1->next;
    }
    while (t2 != NULL)
    {
        nw = new Node(t2->data);
        p->next = nw;
        p = p->next;
        t2 = t2->next;
    }
    return head;
}