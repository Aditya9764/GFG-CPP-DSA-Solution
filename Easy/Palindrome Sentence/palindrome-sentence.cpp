//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    // code here 
	     int start = 0 ;
        int end = s.size() - 1 ;

        while(start <= end )
        {
            if(isalnum(s[start])==false)
            {
                start++ ;
                continue ;
            }
            if(isalnum(s[end])==false)
            {
                end-- ;
                continue ;
            }
            
            if( tolower(s[start]) != tolower(s[end]))
            {
                return false ;
            }
            else
            {
            start++ ;
            end -- ;
            }
        }
        return true ;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends