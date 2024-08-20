## 1140. Stone Game II
🔗 Link: [Stone Game II](https://leetcode.com/problems/stone-game-ii/description/?envType=daily-question&envId=2024-08-20)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Math, Dynamic Programming, Prefix Sum, Game Theory 

Alice and Bob continue their games with piles of stones.  There are a number of piles arranged in a row, and each pile has a positive integer number of stones piles[i].  The objective of the game is to end with the most stones. 

Alice and Bob take turns, with Alice starting first.  Initially, M = 1.

On each player's turn, that player can take all the stones in the first X remaining piles, where 1 <= X <= 2M.  Then, we set M = max(M, X).

The game continues until all the stones have been taken.

Assuming Alice and Bob play optimally, return the maximum number of stones Alice can get.

 

Example 1:

Input: piles = [2,7,9,4,4]  
Output: 10  
Explanation:  If Alice takes one pile at the beginning, Bob takes two piles, then Alice takes 2 piles again. Alice can get 2 + 4 + 4 = 10 piles in total. If Alice takes two piles at the beginning, then Bob can take all three piles left. In this case, Alice get 2 + 7 = 9 piles in total. So we return 10 since it's larger. 

Example 2:
 
Input: piles = [1,2,3,4,5,100]    
Output: 104
 

Constraints:

1 <= piles.length <= 100  
1 <= piles[i] <= 10^4

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?  
   O(n^3) in time
3. Can we assume that Bob always take the maximum number of piles?  
   No, just like Alice, Bob also play optimal
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming  
   This is a obvious dp problem. The question is how to define our dp array? Is it a 1d or a 2d dp problem? Since both players play optimal, every time when they make decicion, they should
   take all the remaining piles into account. **Thus the key point is to start from the last pile and iterate back to the first one.** To be more specific, we can create a 2d dp array
   where dp[i][m] means the maximum score the user can get while starting at index i with M=m. In this case, our goal is to find out the  dp[0][1].  
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Same as above section

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
   - Time complexity: O(n^3)
   - Space complexity: O(n^2)

