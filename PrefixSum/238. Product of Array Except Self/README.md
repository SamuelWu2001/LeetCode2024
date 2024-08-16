## 238. Product of Array Except Self
🔗 Link: [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Prefix Sum 

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]  
Output: [24,12,8,6]  

Example 2:

Input: nums = [-1,1,0,-3,3]  
Output: [0,0,9,0,0]  
 

Constraints:

2 <= nums.length <= 10^5  
-30 <= nums[i] <= 30  
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 

Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
2. Is the array sorted?  
   No
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Prefix Sum  
   We can not simply use division operator, which means that we can only use multiple operator. And since the problem ask a O(n) in time, we have to reduce the redundant calculate. In this
   case we can use prefix array to record the cumulative product from the first element to the current element and the other suffix array to store the product in the reverse order. After
   completing this two vectors, we can calculate the ans array where `ans[i] = predix[i-1] * suffix[i+1]` 
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
   - Time complexity: O(n)
   - Space complexity: O(n)

