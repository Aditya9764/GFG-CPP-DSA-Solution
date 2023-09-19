//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


// } Driver Code Ends
// you are required to complete this function 
// function should print the required range
class Solution{
    public:
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
          //code here
                  pair<int, int> ans;
        int range = INT_MAX;

        // Create a min-heap to track the minimum element from each array.
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        // Initialize an array of pointers to track the current element index in each array.
        vector<int> pointers(k, 0);

        int maxElement = INT_MIN;

        // Initialize the min-heap with the first element from each array.
        for (int i = 0; i < k; i++) {
            minHeap.push({KSortedArray[i][0], i});
            maxElement = max(maxElement, KSortedArray[i][0]);
        }

        while (true) {
            // Get the minimum element from the min-heap.
            pair<int, int> current = minHeap.top();
            minHeap.pop();

            int currentMin = current.first;
            int arrayIndex = current.second;

            // Calculate the current range.
            if (maxElement - currentMin < range) {
                range = maxElement - currentMin;
                ans = {currentMin, maxElement};
            }

            // If we reach the end of any array, break the loop.
            if (pointers[arrayIndex] == n - 1)
                break;

            // Move the pointer of the array with the minimum element.
            pointers[arrayIndex]++;
            int nextElement = KSortedArray[arrayIndex][pointers[arrayIndex]];

            // Update the min-heap with the next element.
            minHeap.push({nextElement, arrayIndex});
            maxElement = max(maxElement, nextElement);
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[N][N];
        pair<int,int> rangee;
        for(int i=0; i<k; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        Solution obj;
	    rangee = obj.findSmallestRange(arr, n, k);
	    cout<<rangee.first<<" "<<rangee.second<<"\n";
    }   
	return 0;
}


// } Driver Code Ends