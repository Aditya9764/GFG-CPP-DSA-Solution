//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        int a= 1 ;
    int b =2 ;
    int c ;
    if(n==0)
    {
        return 1 ;
    }
    if(n==1 || n==2)
    {
        return n ;
    }
    for(int i = 3 ; i<=n; i++)
    {
        c = (a+b) % 1000000007; ;
        a= b;
        b=c ;
    }
    return c ;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends