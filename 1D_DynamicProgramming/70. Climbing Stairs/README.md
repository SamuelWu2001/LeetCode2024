## 70. Climbing Stairs
🔗 Link: [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/description/)  
💡 Difficulty: Easy  
🛠️ Topics: Math, Dynamic Programming, Memoization

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 

Constraints:

1 <= n <= 45

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Are different arrangements of the same elements considered the same case?  
   No
2. Any requirement on time/space complexity?  
   O(n) in both time and space complexity
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming  
   Dynamic Programming is a method for solving complex problems by breaking them down into smaller subproblems and recording the the results of these subproblems.
   In this case we can define the dp array where dp[i] represents the maximum amount of steps of the first i elements. By defining the subproblems in this way,
   we can eventually solve the initial complex problem.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create a dp array to store the result of each subproblem. Use this equation `dp[i] = dp[i-1] + dp[i-2], where i>=2` to calculate dp[i] and return 
dp.back() as the final result.
1. Create the dp array
2. Loop for n times
   - dp[i] = dp[i-1] + dp[i-2]
3. Return the last element of dp array

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the given value.
   - Time complexity: O(n)
   - Space complexity: O(n)

