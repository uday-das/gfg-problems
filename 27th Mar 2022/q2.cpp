// 2. C++ 2-D Arrays | Set-1

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n);

int main()
{
    int t;
    cin>>t;
    int a[M][M];
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        vector<vector<int>> b;
        b = transpose(a, n);
        for(int i=0;i < n;i++)
        {
            for(int j=0;j<n;j++){
                cout << b[i][j] << " ";
            }
        }
        cout<<endl;
    }
}

// } Driver Code Ends


vector<vector<int>> transpose(int a[][M], int n)
{
    vector <vector<int>> arr;
    for(int i = 0; i < M; i++)
    {
        vector <int> temp;
        for(int j = 0; j < n; j++)
        {
            int x = a[j][i];
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
    return arr;
}
    






