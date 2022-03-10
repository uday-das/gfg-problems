// 10. Search In Linked List

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

bool searchLinkedList(struct Node *head, int x);

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
        int x;
        cin >> x;
        cout << searchLinkedList(head, x) << endl;
    }
    return 0;
} // } Driver Code Ends

// User function Template for C++

bool searchLinkedList(Node *head, int x)
{
    Node *p1 = head;
    while (p1 != NULL)
    {
        if (p1->data == x)
            return true;
        p1 = p1->next;
    }
    return false;
}