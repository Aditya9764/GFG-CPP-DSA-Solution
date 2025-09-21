class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
       int lo = 0, hi = arr.size() - 1;

    // Iterate while hi >= lo
    while (hi >= lo) {
      
        // Check if arr[lo] = is odd
        if (arr[lo] % 2 != 0) {
            if (arr[hi] % 2 == 0) {
              
                // Swap arr[lo] and arr[hi]
                swap(arr[lo], arr[hi]);
                lo++;
                hi--;
            } else {
                hi--;
            }
        } else {
            lo++;
        }
    }
    sort(arr.begin(), arr.begin() + lo);
    hi += 1;
    sort(arr.begin() + hi, arr.end());
    }
};