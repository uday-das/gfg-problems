// 1. Average

// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;


 // } Driver Code Ends
//User function Template for Java

class Solution
{
    int posAverage(int numbers[], int size)
    {
        int sum = 0, c = 0;
        for(int i = 0; i < size; i++)
        {
            if(numbers[i] >= 0)
            {
                c++;
                sum += numbers[i];
            }
        }
        return sum/c;
    }
}

// { Driver Code Starts.
    
class GFG
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);  
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n;  
            n=sc.nextInt();  
            int[] numbers = new int[n];    
            for(int i=0; i<n; i++)  
            {    
                numbers[i]=sc.nextInt();  
            }  
            Solution ob = new Solution();
            int avg=ob.posAverage(numbers,n);
            System.out.println(avg);
        }
    }
}

  // } Driver Code Ends