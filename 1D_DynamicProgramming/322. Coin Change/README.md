## 322. Coin Change
🔗 Link: [Coin Change](https://leetcode.com/problems/coin-change/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Dynamic Programming, Breadth-First Search

You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

 

Example 1:

Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
Example 2:

Input: coins = [2], amount = 3
Output: -1
Example 3:

Input: coins = [1], amount = 0
Output: 0
 

Constraints:

1 <= coins.length <= 12
1 <= coins[i] <= 2^31 - 1
0 <= amount <= 10^4

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Is the coins array sorted?  
   Yes
2. Any requirement on time/space complexity? 
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Backtracking  
   Since we want to find the fewest number of coins, the most instinctive way is to start filling in bigger coins. Backtracking is the best choice since
   it can use pruning to quickly eliminate combinations that do not meet certain conditions, avoiding unnecessary computations. When there are no suitable
   coins, we can return to the previous step and explore other possibilities.
2. Dynamic Programming  
   Dynamic Programming is a method for solving complex problems bybresking them down into smaller subproblems adn recording the results of these subproblems.
   In this case we can define a dp array where dp[i] represents the fewest number of coins to reach an amount of i. Through defining the subproblems in this way, we
   can eventually solve the initial complex problem.
3. Discussion  
   Assuming n represents the length of coins array and m represents the target amount. 
   - Backtracking
     - time complexity: O(n^m) => worst case
     - space complexity: O(m)
   - Dynamic Programming
     - time complexity: O(m*n)
     - space complexity: O(m)
    Since the time complexity of Backtracking is relatively large, we choose Dynamic Programming in this case.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create a dp array where dp[i] represents the fewest number of coins to reach an amount of i. Get the current element's valuebase on previous element.
1. Create the dp array
2. Loop `amount` times
   - loop through each elements j in the coins array which is smaller than the current value
     - find out the fewest one through comparing corresponding dp[amount-j]
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
1. Assuming n represents the length of coins array and m represents the target amount. 
   - time complexity: O(m*n)
   - space complexity: O(m)
