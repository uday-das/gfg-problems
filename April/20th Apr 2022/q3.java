// 3. Fibonacci Number

// { Driver Code Starts
//Initial Template for Java

import java.util.Scanner;

class Main {
    
// } Driver Code Ends
//User function Template for Java

public static int fibonacci(int n){
    if(n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

// { Driver Code Starts.

    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t-- > 0) {
            int n = scn.nextInt();
            int ans = fibonacci(n);
            System.out.println(ans);
        }
        scn.close();
    }
}  // } Driver Code Ends
