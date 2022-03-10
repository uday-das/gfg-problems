// 17. Linked List Delete at Position

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

Node *deleteAtPosition(Node *head, int pos)
{
    Node *ptr, *q;
    if (head == NULL)
        return head;
    if (pos == 1)
    {
        ptr = head;
        head = head->next;
        delete ptr;
        return head;
    }
    ptr = head;
    for (int i = 1; i <= pos - 2 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }
    q = ptr->next;

    if (ptr == NULL)
    {
        return head;
    }

    ptr->next = q->next;
    delete q;
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
        int pos;
        cin >> pos;
        head = deleteAtPosition(head, pos);
        displayList(head);
        cout << endl;
    }
    return 0;
} // } Driver Code Ends