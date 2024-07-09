## 2653. Sliding Subarray Beauty
🔗 Link: [Sliding Subarray Beauty](https://leetcode.com/problems/sliding-subarray-beauty/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Hash Table, Sliding Window

Given an integer array nums containing n integers, find the beauty of each subarray of size k.

The beauty of a subarray is the xth smallest integer in the subarray if it is negative, or 0 if there are fewer than x negative integers.

Return an integer array containing n - k + 1 integers, which denote the beauty of the subarrays in order from the first index in the array.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,-1,-3,-2,3], k = 3, x = 2  
Output: [-1,-2,-2]  
Explanation: There are 3 subarrays with size k = 3.   
The first subarray is [1, -1, -3] and the 2nd smallest negative integer is -1.   
The second subarray is [-1, -3, -2] and the 2nd smallest negative integer is -2.   
The third subarray is [-3, -2, 3] and the 2nd smallest negative integer is -2.  

Example 2:

Input: nums = [-1,-2,-3,-4,-5], k = 2, x = 2  
Output: [-1,-2,-3,-4]  
Explanation: There are 4 subarrays with size k = 2.  
For [-1, -2], the 2nd smallest negative integer is -1.  
For [-2, -3], the 2nd smallest negative integer is -2.  
For [-3, -4], the 2nd smallest negative integer is -3.  
For [-4, -5], the 2nd smallest negative integer is -4.   

Example 3:

Input: nums = [-3,1,2,-3,0,-3], k = 2, x = 1  
Output: [-3,0,-3,-3,-3]  
Explanation: There are 5 subarrays with size k = 2.  
For [-3, 1], the 1st smallest negative integer is -3.  
For [1, 2], there is no negative integer so the beauty is 0.  
For [2, -3], the 1st smallest negative integer is -3.  
For [-3, 0], the 1st smallest negative integer is -3.  
For [0, -3], the 1st smallest negative integer is -3.  
 

Constraints:

n == nums.length   
1 <= n <= 10^5  
1 <= k <= n  
1 <= x <= k   
-50 <= nums[i] <= 50   

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can `x` bigger than `k`?  
   No
3. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Sliding Window   
   Since we need to find all beauty numbers in each continuous subsequence in this case, I think using a sliding window will be an optimal choice to traverse all possible qualified subsequences.
3. Ordered_map  
   As our goal is to find out the kth small number in the sliding window, I think the best way is to store the number and its frequency into a hashmap and sort the map by the key. In
   this way, we can simply use for loop to find the correct beauty number.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Using sliding window to traverse the jgiven array and record the visited element into ordered_map.   
1. Create the map and initialize `left` and `right` to represents the boundary of the sliding window
3. Iterate through the array
   - remove the element pointed by `left`
   - add the element pointed by `right`
   - Iterate the map
     - count += element.second
     - if count >= x , push_back element.first into `result`
   - else push_back 0 into `result`
4. Return `result`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of items in the array and k represents the size of the sliding window.
   - Time complexity: O(n*k)
   - Space complexity: O(k)

