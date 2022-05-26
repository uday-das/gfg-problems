// Implement Queue using Linked List 

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
    }
// } Driver Code Ends


//Function to push an element into the queue.
void MyQueue :: push(int x)
{
    QueueNode * nw = new QueueNode(x);
    if(front == NULL)
    {
        front = rear = nw;
        return;
    }
    rear -> next = nw;
    rear = nw;
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
    int x;
    if(front == NULL)
        return -1;
    QueueNode * p = front;
    x = front -> data;
    front = front -> next;
    if(front == NULL)
        rear = NULL;
    delete p;
    return x;
}