//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string s, int n)
        {
            map<char,int> mp;
            for(int i=0;i<s.size();i++){
                if(s[i]!=s[i-1])
                mp[s[i]]++;
            }
            
            int cnt=0;
            for(auto it :mp){
               if(it.second==n) cnt++;
            }
            
            return cnt;
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends