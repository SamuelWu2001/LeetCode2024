## 1774. Closest Dessert Cost
🔗 Link: [Closest Dessert Cost](https://leetcode.com/problems/closest-dessert-cost/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Dynamic Programming, Backtracking

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 
Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
2. Is the array sorted?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Sort  
   We can start from sorting the given array, then check if there are consecutive items with the same value. If there are, we return True; otherwise, we reach the end of the array and return False.
2. Sort the elements of the array in a HashMap or Set  
   We traverse each element in the array and check them before storing in a Set. If the element isn't in the Set,  we add it. If we finish iterating through all elements without any duplicate, we return False. 
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create a Set to store numbers. If the number is already in the Set, return True. Otherwise we reach the end of the array and return False.  
1. Create the Set
2. Iterate through the array
   - check if the number is already in the Set
   - add the number into the Set
3. Return False if we reach the end of the array

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
2. Using an unordered_set, we can optimize the time complexity to O(n).

