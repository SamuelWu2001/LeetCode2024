## 300. Longest Increasing Subsequence
🔗 Link: [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Binary Search, Dynamic Programming

Given an integer array nums, return the length of the longest strictly increasing subsequence.


Example 1:

Input: nums = [10,9,2,5,3,7,101,18]
Output: 4
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
Example 2:

Input: nums = [0,1,0,3,2,3]
Output: 4
Example 3:

Input: nums = [7,7,7,7,7,7,7]
Output: 1
 

Constraints:

1 <= nums.length <= 2500
-10^4 <= nums[i] <= 10^4
 

Follow up: Can you come up with an algorithm that runs in O(n log(n)) time complexity?
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input array be empty?  
   No
3. Can the subsequence be discontinuous?  
   Yes
4. Any requirement on time/space complexity?  
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming  
   Dynamic programming is a method for solving complex problems by breaking them down into smaller subproblems. In this case, we can define the dp array where dp[i] represents the
   maximum length of the strictly increasing subsequence while considering taking the ith element. By defining subproblems in this way,  we can eventually solve the initial complex
   problems by returning the maximum value of the dp array.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create a `dp` array where dp[i] represents the maximum length of the strictly increasing subsequence while considering taking the ith element. And fill in other element of `dp` array by the formula: `dp[i] = max(maxVal, dp[j]+1), where j<i and nums[j]<nums[i]`. 

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of items in the array.
   - Time complexity: O(n^2)
   - Space complexity: O(n)
2. Can you come up with an algorithm that runs in O(n log(n)) time complexity?
   - traverse the entire string for 1 time => O(n) in time
     - we need to find out the longest length while considering taking the current element
   - Give the definition that `sorted` array is store all the sorted previous elements before current element
   - use `lower_bound` function which finds the first index that is not smaller than the current value => O(log(n)) in time

