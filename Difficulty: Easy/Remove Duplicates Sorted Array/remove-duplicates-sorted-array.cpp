class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here

        for(int i=arr.size() ; i>=1 ;i--)
        {
            if(arr[i]==arr[i-1])
        {
            arr.erase(arr.begin()+i);
        }
        }
        return arr.size();
    }
};