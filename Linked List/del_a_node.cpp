// 1. Delete a Node in Single Linked List

// { Driver Code Starts

#include <stdio.h>
#include <stdlib.h>
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

void append(struct Node **head_ref, struct Node **tail_ref, int new_data)
{
    struct Node *new_node = new Node(new_data);

    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

/* Function to get the middle of the linked list*/
struct Node *deleteNode(struct Node *head, int);

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

/* Driver program to test above function*/
int main()
{
    int T, i, n, l;

    cin >> T;

    while (T--)
    {
        struct Node *head = NULL, *tail = NULL;

        cin >> n;
        for (i = 1; i <= n; i++)
        {
            cin >> l;
            append(&head, &tail, l);
        }

        int kk;
        cin >> kk;
        head = deleteNode(head, kk);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends

/*You are required to complete below method*/
Node *deleteNode(Node *head, int x)
{
    if (head == NULL)
        return NULL;
    if (x == 1)
        return head->next;
    Node *p = head;
    for (int i = 1; i <= x - 2; i++)
    {
        p = p->next;
    }
    Node *t = p->next;
    p->next = p->next->next;
    delete t;
    return head;
}