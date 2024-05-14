## 55. Jump Game
🔗 Link: [Jump Game](https://leetcode.com/problems/jump-game/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Dynamic Programming, Greedy 

You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
 

Constraints:

1 <= nums.length <= 10^4
0 <= nums[i] <= 10^5

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the value of an element be negative?  
   No
2. Any requirement on time/space complexity?  
   O(n) in time and O(1) in space.
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Greedy  
   The advantage of greedy algorithms lies in their simplicity and efficiency, often resulting in relatively low time complexity. However, while greedy algorithms make each step based on the current locally
   best choice, this local optimality may not lead to a globally optimal solution in many cases. In this case, we can directly calculate the farthest distance for each element and once the distance exceeds
   the length of the given array, return True.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Starting from the first element, calculate the farthest reachable position, then iterate from the next element to the farthest one to calculate the next farthest reachable position, and so on. 
If the farthest position exceeds the length of array, return True.
1. Initialize the `reachable` array with the first element.
2. Iterate through the `reachable` array
   - calculate the farthest position for each element and record the farthest one
   - if the farthest position exceeds the length of given array, return True
   - Otherwise, upadate the `reachable` array and continue to step 2
3. Return False if we exit the loop while the farthest position doesn't exceed the length of the given array

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
1. Edge Case: [0], [1,0], [0,1]
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of the given array.
   - Time complexity: O(n)
   - Space complexity: O(1)
2. If we directly check whether we would get stuck at an element with a value of 0, we can get the answer more quickly (although the time complexity remains unchanged).

