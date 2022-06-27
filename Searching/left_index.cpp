// Left Index

// { Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
// Function to find element in sorted array

int leftIndex(int N, int arr[], int X)
{
    int low = 0, high = N - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (X > arr[mid])
            low = mid + 1;
        else if (X < arr[mid])
            high = mid - 1;
        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}

// { Driver Code Starts.

// Driver Code
int main()
{

    // Testcase input
    int testcases;
    cin >> testcases;

    // Looping through all testcases
    while (testcases--)
    {
        int sizeOfArray;
        cin >> sizeOfArray;

        int arr[sizeOfArray];

        // Array input
        for (int index = 0; index < sizeOfArray; index++)
        {
            cin >> arr[index];
        }

        int elemntToSearch;
        cin >> elemntToSearch;

        cout << leftIndex(sizeOfArray, arr, elemntToSearch) << endl;
    }

    return 0;
} // } Driver Code Ends