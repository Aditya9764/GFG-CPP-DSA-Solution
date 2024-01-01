//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
       /*    for(int i=s.length()-1; i>=0; i--)
        if((s[i] - 48) % 2 == 1)
            return s.substr(0,i+1);
    return "";
    */
          int n=s.size()-1;
        for(int i=n;i>=0;i--)
        {
            int x=s[i]-'0';
            if(x&1)
            return s.substr(0,i+1);
        }
        return "";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends