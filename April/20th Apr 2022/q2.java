// 2. Factorial

// { Driver Code Starts
//Initial Template for Java

import java.util.Scanner;

class q2 {
    
 // } Driver Code Ends
//User function Template for Java

public static int nFactorial(int n){
    int ans = 1;
    
    for(int i = 1; i <= n; i++)
        ans = ans * i;
    
    return ans;
}

// { Driver Code Starts.

    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t-- > 0) {
            int n = scn.nextInt();
            int ans = nFactorial(n);
            System.out.println(ans);
        }
        scn.close();
    }
}  // } Driver Code Ends
