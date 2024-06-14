## 128. Longest Consecutive Sequence
🔗 Link: [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Hash Table, Union Find 

Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

 

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
 

Constraints:

0 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input array be empty?  
   Yes
3. Do we need to consider the original order while finding the longest consecutive sequence?  
   No
4. Any requirement on time/space complexity?  
   O(n) in time complexity
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Hash Table  
   To complete the task with O(n) time complexity, we can use the unordered_map data structure, where the find, insert and erase opreations each take O(1) time.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Store each element in the hash table and find the LCS while simultaneously removing the elements that have been used.  
1. Traverse the whole array to store the elements into the hash table
2. While loop
   - take the begin element
     - while loop to find the LCS including the current element
     - record the length of LCS
   - if there is no other element in the hash table, break
3. Return the longest length 
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

