#include<bits/stdc++.h>
using namespace std;

void reverse(int a[], int low, int high)
{
    while (low < high)
    {
        swap(a[low], a[high]);
        low++;
        high--;
    }
}

void left_rot(int a[], int n, int d)
{
    reverse(a, 0, d-1);
    reverse(a, d, n-1);
    reverse(a, 0, n-1);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    left_rot(a, 5, 2);

    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}