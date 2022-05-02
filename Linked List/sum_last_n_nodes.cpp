// 1. Find the Sum of Last N nodes of the Linked List 

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
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *headRef;
	new_node->data = newData;
	new_node->next = NULL;
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

int sumOfLastN_Nodes(struct Node* head, int n);

// Driver program to test above
int main()
{
    int t;
    cin>>t;
    while(t--){
        struct Node* head = NULL;
        int n,m,tmp;
        cin>>m>>n;
        while(m--){
            cin>>tmp;
            append(&head, tmp);
        }
        cout<<sumOfLastN_Nodes(head, n)<<endl;
    }
	return 0;
}
// } Driver Code Ends


// your task is to complete this function 
// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
    Node * ptr = head;
    int count = 0;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr -> next;
    }
    
    ptr = head;
    for(int i = 1; i <= count-n; i++)
    {
        ptr = ptr -> next;
    }
    
    int sum = 0;
    while(ptr != NULL)
    {
        sum += ptr -> data;
        ptr = ptr -> next;
    }
    return sum;
}