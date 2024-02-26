//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    // Complete this function
    long long int count(long long int n)
    {
       
        long long N = 3 ; 
        long long W = n ; 
        int wt[3] = { 3, 5,10 } ; 
         vector<vector<int>> dp(N+1 , vector<int>(W+1, 0));
        for(int i =0;i<N+1;i++){
          dp[i][0] =1 ; 
        };
        for(int i =1;i<N+1;i++){
            for(int j =1;j<W+1;j++){
                if( wt[i-1]<=j ){
                    
                    dp[i][j]=  (dp[i][j-wt[i-1]]   +   dp[i-1][j]);
                }else{
                    
                    dp[i][j]=dp[i-1][j];
                }
            }
        };
        return dp[N][W];
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends