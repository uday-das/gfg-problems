// 14. Insert In Sorted Linked List

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void displayList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// } Driver Code Ends
// User function Template for C++

Node *insertInSorted(Node *head, int data)
{
    if (head == NULL)
        return head;

    Node *p = head;
    Node *nw;
    if (data < head->data)
    {
        nw = new Node(data);
        nw->next = head;
        head = nw;
        return head;
    }

    p = head;
    while (p->next != NULL && data > p->next->data)
    {
        p = p->next;
    }

    nw = new Node(data);
    nw->next = p->next;
    p->next = nw;
    return head;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        cin >> data;
        head = insertInSorted(head, data);
        displayList(head);
        cout << endl;
    }
    return 0;
} // } Driver Code Ends