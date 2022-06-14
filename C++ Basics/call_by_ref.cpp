// { Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

void reverse_dig(int &a, int &b)
{
    int r1, r2, rev1 = 0, rev2 = 0;
    while (a > 0)
    {
        r1 = a % 10;
        a = a / 10;
        rev1 = rev1 * 10 + r1;
    }

    a = rev1;
    while (b > 0)
    {
        r2 = b % 10;
        b = b / 10;
        rev2 = rev2 * 10 + r2;
    }
    b = rev2;
}
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        reverse_dig(a, b);
        swap(a, b);
        cout << a << " " << b << endl;
    }
    return 0;
} // } Driver Code Ends