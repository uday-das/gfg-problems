// Implement Dequeue Using Linked List

// { Driver Code Starts
// Initial Template for C++

// C++ implementation of Deque using
// doubly linked list
#include <bits/stdc++.h>

using namespace std;

// Node of a doubly linked list
struct Node {
    int data;
    Node* prev, *next;
    // Function to get a new node
    static Node* getnode(int data) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        newNode->prev = newNode->next = NULL;
        return newNode;
    }
};

// A structure to represent a deque
class Deque {
    Node* front;
    Node* rear;
    int Size;

  public:
    Deque() {
        front = rear = NULL;
        Size = 0;
    }

    // Operations on Deque
    void insertFront(int data);
    void insertRear(int data);
    void deleteFront();
    void deleteRear();
    int getFront();
    int getRear();
    bool isEmpty();
};

// Function to check whether deque
// is empty or not
bool Deque::isEmpty() {
    return (front == NULL);
}

// Function to return the element
// at the front end
int Deque::getFront() {
    // If deque is empty, then returns
    // garbage value
    if (isEmpty()) return -1;
    return front->data;
}

// Function to return the element
// at the rear end
int Deque::getRear() {
    // If deque is empty, then returns
    // garbage value
    if (isEmpty()) return -1;
    return rear->data;
}


 // } Driver Code Ends

void Deque::insertFront(int data) {
    // Your code here
    Node *newNode = Node::getnode(data);
    if(!front){
        front = newNode;
        rear = front;
        return;
    }
    front->prev = newNode;
    newNode->next = front;
    front = newNode;
}

// Function to insert an element
// at the rear end
void Deque::insertRear(int data) {
    // Your code here
    Node *newNode = Node::getnode(data);
    if(!front){
        front = newNode;
        rear = front;
        return;
    }
    rear->next = newNode;
    newNode->prev = rear;
    rear = newNode;
}

// Function to delete the element
// from the front end
void Deque::deleteFront() {
    // Your code here
    if(!front || !front->next){
        front = NULL;return;
    }
    front = front->next;
    front->prev = NULL;
}

// Function to delete the element
// from the rear end
void Deque::deleteRear() {
    // Your code here
    if(rear && rear->prev){
        rear = rear->prev;
        rear->next = NULL;
    }
    else{
        front = NULL;
        rear = NULL;
    }
}

// { Driver Code Starts.

// Driver program to test above
int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Deque dq;

        while (q--) {

            string qt;
            cin >> qt;

            if (qt == "ir") {
                int data;
                cin >> data;
                dq.insertRear(data);
            } else if (qt == "if") {
                int data;
                cin >> data;
                dq.insertFront(data);

            } else if (qt == "dr") {
                dq.deleteRear();
            } else if (qt == "df") {
                dq.deleteFront();
            }
        }

        cout << dq.getFront() << endl;
        cout << dq.getRear() << endl;
    }
    return 0;
}
  // } Driver Code Ends