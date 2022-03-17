// 2. Modular Node

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void append(struct Node** headRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

int modularNode(Node* head, int k);

// Driver program to test above
int main()
{
    int t;
    cin>>t;
    while(t--){
        struct Node* head = NULL;
        int n, tmp, k;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        cin>>k;
        cout<<modularNode(head, k)<<endl;
    }
	return 0;
}
// } Driver Code Ends


int modularNode(Node* head, int k)
{
    Node * ptr = head;
    int count = 0, x = -1;                  // if no modular node found
    while(ptr != NULL)
    {
        count++;
        if(count % k == 0)                  // i = count 
            x = ptr -> data;
        ptr = ptr -> next;
    }
    return x;
}
