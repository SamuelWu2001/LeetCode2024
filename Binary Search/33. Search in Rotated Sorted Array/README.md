## 33. Search in Rotated Sorted Array
🔗 Link: [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Binary Search

There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
 

Constraints:

1 <= nums.length <= 5000  
-10^4 <= nums[i] <= 10^4  
All values of nums are unique.  
nums is an ascending array that is possibly rotated.  
-10^4 <= target <= 10^4  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Are all values of nums are unique?  
   Yes
2. Any requirement on time/space complexity?  
   O(log(n)) in time complexity
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Binary Search  
   Binary search is an efficient method to search a target element in a sorted array. Searching for an element naively can take O(N) time, but binary search can speed it up
   to O(log N). In this case, the array is sorted, so we can make use of binary search. However, since the sorted array has been rotated, we need to rethink the elimination logic.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Use two pointers, `left` and `right`,  to represent the current search range. Compare the target value with the middle element and the elements pointed by `left` and 
`right`, and eliminate half of the searching range. Repeat the above operation until the target is found.
1. Initilaize two pointers,  `left` and `right`.
2. While loop to reduce searching range
   - If the middle is the target value, return the index of middle element
   - Compare the target value with the middle element and the elements pointed by `left` and `right`
     - if the middle element > the element pointed by `left`
       - if the target value > the middle element, eliminate the first half
       - else if the target value < the element pointed by `left`, eliminate the first half
       - else eliminate the second half
     - else
       - if the target value < the middle element, eliminate the second half
       - else if the target value > the element pointed by `right`, eliminate the second half
       - else eliminate the first half
4. Return -1 if we can't find the target value

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
   - Space complexity: O(1)

