//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
   int atoi(string s) {
        //Your code here
        bool isNeg = s[0] == '-';
        
        if(isNeg)
            s = s.substr(1);
        
        int res = 0;
        
        for(char i : s){
            if(i >= '0' && i <= '9'){
                res = (res * 10) + (i - '0');    
            }
            else   return -1;
        }
        
        return (isNeg ? res * (-1) : res);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends