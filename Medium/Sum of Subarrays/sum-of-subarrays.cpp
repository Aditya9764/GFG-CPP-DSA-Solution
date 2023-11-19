//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
 /*
    logic : jiss element ki position jitni bich me hogi wo utne hi jyada subarray me present hoga
        number of subarrays in which X will present = (n-i)*(i+1)
        
        eg : a[] --> 1 2 3 
        N = 3
        for(1): i = 0, so num no of present in the subarrays = (3-0)*(0+1) = 3
        so 1 will present in 3 subarrays : [1] [1,2] [1,2,3]
        
        for(2) : i=1, so present = (3-1)*(1+1) = 4
        2 will present in 4 subarrays : [2] [1,2] [1,2,3] [2,3]
        
        for(3) : i=2 ---> (3-2)*(2+1) = 3
        subarrays : [3] [1,2,3] [2,3]
    */
    long long subarraySum(long long a[], long long n)
    {
        long long sum = 0;
         long mod = 1000000007;
        // Your code goes here
        for(int i =0 ; i<n ; i++)
        {
            sum +=(a[i]*(i+1)*(n-i))%mod;
        }
        return sum%mod;
    }
};

//{ Driver Code Starts.
int main()
 {
     long long t; 
     cin>>t;
     while(t--)
     {
         long long n; cin>>n;
         long long a[n+5];
         for(long long i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.subarraySum(a, n)<<endl;
     }
    return 0;
}

// } Driver Code Ends