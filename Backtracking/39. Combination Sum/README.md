## 39. Combination Sum
🔗 Link: [Combination Sum](https://leetcode.com/problems/combination-sum/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Backtracking

Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
frequency
 of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

 

Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
Example 2:

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
Example 3:

Input: candidates = [2], target = 1
Output: []
 

Constraints:

1 <= candidates.length <= 30
2 <= candidates[i] <= 40
All elements of candidates are distinct.
1 <= target <= 40

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Are `[2,2,3]` and `[2,3,2]` considered the same?
   Yes
2. Is the array of distinct integers candidates sorted?
   Yes
3. Any requirement on time/space complexity?
   No
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Backtraking
   Backtracking algorithms can use pruning to quickly eliminate combinations that do not meet certain conditions, avoiding unnecessary computations.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Use recursion to fill in values. If no suitable value can be found, backtrack to explore other possible combinations.
1. Recursion
   - Check if there is a number is less than or equal to the target value
     - If there are no qualified numbers, backtrack to the previous step
     - Otherwise, fill in the number and update the remaining target value
       - If the remaining target value is zero, record the combination and backtrack to find other possibilities
       - Otherwise, continue to the next recursion level
2. Return all the qualified combinations

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
   - Time complexity: O(nlog(n))
   - Space complexity: O(n)

