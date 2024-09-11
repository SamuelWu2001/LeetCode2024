## 494. Target Sum
🔗 Link: [Target Sum](https://leetcode.com/problems/target-sum/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Dynamic Programming, Backtracking

You are given an integer array nums and an integer target.

You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.

For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
Return the number of different expressions that you can build, which evaluates to target.

 

Example 1:

Input: nums = [1,1,1,1,1], target = 3  
Output: 5  
Explanation: There are 5 ways to assign symbols to make the sum of nums be target 3.  
-1 + 1 + 1 + 1 + 1 = 3  
+1 - 1 + 1 + 1 + 1 = 3  
+1 + 1 - 1 + 1 + 1 = 3  
+1 + 1 + 1 - 1 + 1 = 3  
+1 + 1 + 1 + 1 - 1 = 3  

Example 2:

Input: nums = [1], target = 1  
Output: 1  
 

Constraints:

1 <= nums.length <= 20  
0 <= nums[i] <= 1000   
0 <= sum(nums[i]) <= 1000  
-1000 <= target <= 1000  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming  
   dp[i][j] represents the number of qualifired conbinations when considering taking pre ith elements withe the sum of j. The status transiction rules will be: `dp[i+1][j] = dp[i][j-nums[i]] + dp[i][j+nums[i]]` 
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: same as above section

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of items in the array and m represents the sum of them.
   - Time complexity: O(n*m)
   - Space complexity: O(n*m)

