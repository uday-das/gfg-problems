// 1. Union of Two Linked Lists

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* makeUnion(struct Node* head1, struct Node* head2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        printList(makeUnion(first,second));
    }
    return 0;
}
// } Driver Code Ends



struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    set <int> s;
    Node * t1 = head1;
    Node * t2 = head2;
    while(t1 -> next != NULL)
    {
        t1 = t1 -> next;
    }
    t1 -> next = t2;
    t1 = head1;
    
    while(t1 != NULL)
    {
        s.insert(t1 -> data);
        t1 = t1 -> next;
    }
    
    Node * tail = NULL;
    Node * head3 = NULL;
    for(int i : s)
    {
        Node * nw = new Node(i);
        if(head3 == NULL)
            head3 = tail = nw;
        else
            tail -> next = nw;
            tail = nw;
    }
    return head3;
}
	





