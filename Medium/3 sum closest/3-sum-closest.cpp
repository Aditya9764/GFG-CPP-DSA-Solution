//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int A[], int N, int X)
    {
        // code here
           sort(A,A+N);
        int sum=0,ans=INT_MAX;
        for(int i=0;i<N-2;i++){
            int s=i+1,e=N-1;
            while(s<e){
                if(abs(A[i]+A[s]+A[e]-X)<ans){
                    ans=abs(A[i]+A[s]+A[e]-X);sum=A[i]+A[s]+A[e];
                } 
                if(abs((A[i]+A[s]+A[e])-X)==0) return A[i]+A[s]+A[e];
                else if(A[i]+A[s]+A[e]>X) e--;
                else  s++;
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends