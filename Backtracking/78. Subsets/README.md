## 78. Subsets
🔗 Link: [Subsets](https://leetcode.com/problems/subsets/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Backtracking, Bit Manipulation  

Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Are [2,3] and [3,2] considered the same one?  
   Yes
2. Can the input array be empty?  
   No
3. Are there a maximum value for the length of the input array?  
   The maximum length is 10
4. Any requirement on time/space complexity?  
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Backtracking  
   The backtracking algorithm is suitable for the subset-related problems, and through pruning, the algorithm can quickly eliminate unqualified combinations. As for the drawback,
   the backtracking algorithm suffers from exponential time complexity issues. When the problem's solution space is very large, this can lead to excessively long runtime and recursion
   stack overflow issues. In this case, the maximum length of input array is only 10, so I believe the backtracking method is appropriate. 
   
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Use DFS to traverse the `nums` and find all subsets
1. Recursion
   - add the current element to the `global vector`
   - call next recursion function
   - remove the current element from the `global vector`
   - call next recursion function
   - if we traverse the entire input array, add the `global vector` to the `result` (subset array) and backtrack to find other subsets
2. Return the `result`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of the input array.
   - Time complexity: O(2^n)
   - Space complexity: O(2^n)

