// 2. Burning Tree

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void path(Node *root, int target, vector<Node *> temp, vector<Node *> &v)
    {
        if (root == NULL)
            return;
        if (root->data == target)
        {
            temp.push_back(root);
            v = temp;
            return;
        }
        temp.push_back(root);
        path(root->left, target, temp, v);
        path(root->right, target, temp, v);
    }
    int maxdis(Node *root, Node *bloc)
    {
        if (root == NULL)
            return -1;
        if (root->data == bloc->data)
            return -1;
        int l = maxdis(root->left, bloc);
        int r = maxdis(root->right, bloc);
        return max(l, r) + 1;
        // if(root->left==NULL && root->right==NULL) return 0;
    }
    int minTime(Node *root, int target)
    {
        vector<Node *> v;
        vector<Node *> temp;
        path(root, target, temp, v);
        int maxi = INT_MIN;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if(i == v.size() - 1)
            {
                Node *tt = new Node(-999999);
                maxi = max(maxi, maxdis(v[i], tt));
            }
            else
            {
                int dis = maxdis(v[i], v[i + 1]) + (v.size() - i - 1);
                maxi = max(maxi, dis);
            }
        }
        // Your code goes here
        return maxi;
    }
};

// { Driver Code Starts.

int main()
{
    int tc;
    scanf("%d ", &tc);
    while (tc--)
    {
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin >> target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout << obj.minTime(root, target) << "\n";

        cin.ignore();
    }

    return 0;
}
// } Driver Code Ends
