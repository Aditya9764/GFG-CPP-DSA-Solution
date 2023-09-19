<h2><a href="https://practice.geeksforgeeks.org/problems/find-smallest-range-containing-elements-from-k-lists/1">Smallest range in K lists</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given <strong>K</strong> sorted lists of integers,&nbsp;<strong>KSortedArray[]</strong>&nbsp;of size <strong>N</strong> each. The task is to 
  find the smallest range that includes at least one element from each of the <strong>K</strong> lists. If more than one such range's are found, return&nbsp;the first such range found.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5, K = 3
KSortedArray[][] = {{1 3 5 7 9},
                    {0 2 4 6 8},
                    {2 3 5 7 11}}
<strong>Output: </strong>1 2<strong>
Explanation: </strong>K = 3
A:[1 3 5 7 9]
B:[0 2 4 6 8]
C:[2 3 5 7 11]
Smallest range is formed by number 1
present in first list and 2 is present
in both 2nd and 3rd list.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4, K = 3
KSortedArray[][] = {{1 2 3 4},
                    {5 6 7 8},
                    {9 10 11 12}}
<strong>Output: </strong>4 9</span></pre>

<p><span style="font-size:18px"><strong>Your Task</strong> : </span></p>

<p><span style="font-size:18px">Complete the function&nbsp;<strong><em>findSmallestRange</em></strong>() that receives array , array size n and k as parameters and returns the output range (as a pair in cpp and array of size 2 in java and python)</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity </strong>:&nbsp;O(n * k *log k)<br>
<strong>Expected Auxilliary Space&nbsp;</strong>&nbsp;: O(k)</span></p>

<div><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= K,N &lt;= 500</span></div>

















Approach Discuss
1) Take the first element of every k array
2) Now put them in minheap and also keep track of maximum element from that.
3) From minheap we have a min element and we also now have a maximum element
4) This creates a range
5) To reduce range of [A,B] increaseA and decrease B
6) We cannot decrease B as it is first element of any one of the array.   decreasing it will lead to exclusion of that array.
7) So  we have to just increase A 
8) The array which was having min ele just take next element from that array and let other k-1 elements same in heap
9) Continue till we get to end of any one array
