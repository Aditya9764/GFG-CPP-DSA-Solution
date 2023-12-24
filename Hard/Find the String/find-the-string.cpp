//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
  void dfs(string curr , string & ans ,  unordered_map<string, int> & mp, int k )
    {
        string temp;
        int n = curr.size();
        // adding character at the end and if feasible then add other wise go for the other
        for(int i=k-1;i>=0;i--)
        {
            temp = curr.substr(1,n-1);
            
            //add the new character in the  substring
            temp+=char(i+'0');
            // now if we dont found then add into it and update the map
            if(mp.find(temp)==mp.end())
            {
                mp[temp]=1;
                ans+=char(i+'0');
                dfs(temp,ans,mp,k);
              
            }
        }
          return;
    }
    string findString(int n, int k) {
        
        
        // for giving the length of the string the answer is
        // n + k^n-1;
        // proof  n number of string + and the substring if we keep adding the another character
        
        // so basically what we are going to do here is that
        // we are keep adding a single character at the end of the answer string
        // and check from hashing whether we have that subset or not
        // if we have it then choose another character and
        // if we dont have it then add to the answer string and update it
        // until we end up adding the last characater
        // that's how we get the minimum required string
        
        string ans = "";
        string temp = "";
        unordered_map<string, int> mp;
        
        // initiate with the base substring 00..ntimes
        for(int i=0;i<n;i++)
        {
            ans+="0";
        }
        
        // adding to the temporary
        temp+=ans;
        //updating the substring
        mp[temp]=1;
        // now we are keep looking for the characters and append it using dfs
        dfs(temp,ans,mp,k);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N>>K;
        Solution ob;
        string ans = ob.findString(N, K);
        int ok=1;
        for(auto i:ans){
            if(i<'0'||i>K-1+'0')
                ok=0;
        }
        if(!ok){
            cout<<-1<<endl;
            continue;
        }
        unordered_set<string> st;
        for(int i=0;i+N-1<ans.size();i++){
            st.insert(ans.substr(i,N));
        }
        int tot=1;
        for(int i=1;i<=N;i++)
            tot*=K;
        if(st.size()==tot)
        {
            cout<<ans.size()<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
} 
// } Driver Code Ends