## 198. House Robber
🔗 Link: [House Robber](https://leetcode.com/problems/house-robber/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Dynamic Programming

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

 

Example 1:

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
Example 2:

Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.
 

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 400
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the given array `nums` be empty?  
   No
3. Given the array [2,4,6,8,9,1,6], if I choose 2 then I cannot choose 4, is that correct?  
   Yes
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming  
   Dynamic programming is a method for solving complex problems by breaking them down into smaller subproblems and recording the results of these subproblems. In this case, we can define a dp array where
   dp[i] represents the maximum amount of money when considering taking i-th value. By defining the subproblems in this way, we caneventually solve the initial complex problem.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create a dp array to store the result of each subproblem. Return max(dp[-2], dp[-1]) to get the final result. 
1. Create the dp array and initialize the first three elements
2. Loop through the given array from index 3, which is the fourth element
   - dp[i] = max(dp[i-2], dp[i-3]) + nums[i]
3. Return max(dp[-2], dp[-1])

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of `nums`.
   - Time complexity: O(n). Since we iterate through the whole array for only one time
   - Space complexity: O(n). Since the `dp` array has the same size as the `nums` array.

