// 13. Linked List Insertion At Position 

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

// Complete this function
void insertAtPosition(Node *head, int pos, int x)
{
    Node *nw;
    if (head == NULL)
    {
        nw = new Node(x);
        head = nw;
        return;
    }

    Node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    if (pos > count)
        return;

    ptr = head;
    for (int i = 1; i < pos; i++)
    {
        ptr = ptr->next;
    }

    nw = new Node(x);
    nw->next = ptr->next;
    ptr->next = nw;
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
        int d;
        cin >> d;
        insertAtPosition(head, pos, d);
        displayList(head);
        cout << endl;
    }
    return 0;
} // } Driver Code Ends
