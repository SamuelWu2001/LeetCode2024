## 2826. Sorting Three Groups
🔗 Link: [Sorting Three Groups](https://leetcode.com/problems/sorting-three-groups/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Binary Search, Dynamic Programming

You are given an integer array nums. Each element in nums is 1, 2 or 3. In each operation, you can remove an element from nums. Return the minimum number of operations to make nums non-decreasing.

 

Example 1:

Input: nums = [2,1,3,2,1]

Output: 3

Explanation:

One of the optimal solutions is to remove nums[0], nums[2] and nums[3].

Example 2:

Input: nums = [1,3,2,1,3,3]

Output: 2

Explanation:

One of the optimal solutions is to remove nums[1] and nums[2].

Example 3:

Input: nums = [2,2,2,2,3,3]

Output: 0

Explanation:

nums is already non-decreasing.

 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 3

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input array be empty?  
   No
3. What is the maximum length of the given array?  
   100
4. Any requirement on time/space complexity?  
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.

- In this problem we can first find the longest non-decreasing subsequence and then return nums.size() - length of the subsequence as the final answer.
  - In order to find the longest non-decreasing subsequence we can either use backtracking or dynamic programming.
  - Considering that the maximum length of the given array is 100, I believe that the dp method is more appropriate.

1. Dynamic Programming
   - We can define the dp array that dp[i] represent the longest length of the non-decreasing subsequence while considering taking ith element. And the formula to get dp[j] will be :
     `dp[j] = dp[k]+1 where k<j and nums[k]<nums[j]`. By defining the subproblems in this way, the overall time complexity will be O(n^2) since everytime we want to acquire the value
     of dp[j] we need to go through every element before it.
   - We can define the dp array in other way where dp[i] represent the length of the longest non-decreasing subsequence while considering taking value i as the last value. And since
     there only three possible values of the given array we can get dp[j] through the formula : `dp[j] = dp[k]+1 where k<=j`. By defining subproblems in this way, the overall time
     complexity will be O(n)
  
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.
see the above section
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
   - Time complexity: O(n)
   - Space complexity: O(1)

