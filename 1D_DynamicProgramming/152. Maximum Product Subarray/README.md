## 152. Maximum Product Subarray
🔗 Link: [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Dynamic Programming

Given an integer array nums, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

 

Example 1:

Input: nums = [2,3,-2,4]  
Output: 6  
Explanation: [2,3] has the largest product 6.

Example 2:

Input: nums = [-2,0,-1]  
Output: 0  
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.  
 

Constraints:

1 <= nums.length <= 2 * 10^4  
-10 <= nums[i] <= 10  
The product of any subarray of nums is guaranteed to fit in a 32-bit integer.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
2. Is the array sorted?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Same as above
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

