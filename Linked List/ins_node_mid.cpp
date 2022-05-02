// 12. Insert in Middle of Linked List 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

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

// function to display the linked list
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insertInMiddle(Node *head, int x);

int main()
{
    int T, n, x;
    cin >> T;
    while (T--)
    {
        cin >> n >> x;

        struct Node *head = new Node(x);
        struct Node *tail = head;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            tail->next = new Node(x);
            tail = tail->next;
        }

        cin >> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}
// } Driver Code Ends

// Function to insert a node in the middle of the linked list.
Node *insertInMiddle(Node *head, int x)
{
    if (head == NULL)
        return head;
    Node *t1, *t2;
    Node *nw = new Node(x);
    t1 = t2 = head;
    while (t1 != NULL && t2->next != NULL && t2->next->next != NULL)
    {
        t2 = t2->next->next;
        t1 = t1->next;
    }
    nw->next = t1->next;
    t1->next = nw;
    return head;
}
