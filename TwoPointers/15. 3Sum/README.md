## 15. 3Sum
🔗 Link: [3Sum](https://leetcode.com/problems/3sum/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Two Pointers, Sorting

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:

Input: nums = [-1,0,1,2,-1,-4]  
Output: [[-1,-1,2],[-1,0,1]]  
Explanation:   
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.  
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.  
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.  
The distinct triplets are [-1,0,1] and [-1,-1,2].  
Notice that the order of the output and the order of the triplets does not matter.

Example 2:

Input: nums = [0,1,1]  
Output: []  
Explanation: The only possible triplet does not sum up to 0.  

Example 3:

Input: nums = [0,0,0]  
Output: [[0,0,0]]  
Explanation: The only possible triplet sums up to 0.  
 

Constraints:  

3 <= nums.length <= 3000  
-10^5 <= nums[i] <= 10^5

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Two Pointers  
   We can first select a target number and use two pointers to find out the answer pair where the sum of it plus terget number equals to zero. However since the array is not sorted, it will
   take O(n^2) to find the candidates pair. Thus,  we can first sort the given array so that we can find the pair in O(n).
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Traverse the given array and use the two pointers to find the valid candidates. At the same time create a vector to store the answer. 
1. Create the Vector
2. Sort the given array
3. Iterate through the array
   - left, right pointers starts from index+1 and array.size()-1
   - if the sum > target number,  right--
   - if the sum < target, left++
   - if the sum == target,  push answer into vector
4. return the vector

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
   - Time complexity: O(n^2)
   - Space complexity: O(1) if not consider the anser vector

