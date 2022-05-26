// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
public:
    void swap(int arr[], int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    void quickSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int pi = partition(arr, l, r);
            quickSort(arr, l, pi - 1);
            quickSort(arr, pi + 1, r);
        }
    }

    int partition(int arr[], int l, int r)
    {
        int i = l - 1;
        int pivot = arr[r];

        for (int j = l; j < r; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, r);
        return i + 1;
    }
};

// { Driver Code Starts.
int main()
{
    int arr[1000], n, T, i;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        Solution ob;
        ob.quickSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
} // } Driver Code Ends