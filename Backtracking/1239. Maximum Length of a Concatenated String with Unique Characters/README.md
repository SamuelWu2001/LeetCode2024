## 1239. Maximum Length of a Concatenated String with Unique Characters
🔗 Link: [Maximum Length of a Concatenated String with Unique Characters](https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, String, Backtracking, Bit Manipulation

You are given an array of strings arr. A string s is formed by the concatenation of a subsequence of arr that has unique characters.

Return the maximum possible length of s.

A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

Example 1:  
Input: arr = ["un","iq","ue"]  
Output: 4  
Explanation: All the valid concatenations are:
- ""
- "un"
- "iq"
- "ue"
- "uniq" ("un" + "iq")
- "ique" ("iq" + "ue")
Maximum length is 4.

Example 2:  
Input: arr = ["cha","r","act","ers"]
Output: 6  
Explanation: Possible longest valid concatenations are "chaers" ("cha" + "ers") and "acters" ("act" + "ers").  

Example 3:  
Input: arr = ["abcdefghijklmnopqrstuvwxyz"]  
Output: 26  
Explanation: The only string in arr has all 26 characters.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input array be empty?
   No
2. Does every element in the given array has no duplicated characters?
   No, there might be duplicated characters in a single element.
3. What is the maximum length of the given array?
   16
4. Are the letters case-sensitive?
   There are onlt lowercase English letter
5. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Backtracking
   In this case , since we need to find out the longest qualified combinations and the maximum length of the given array is only 16, I believe that the backtracking method will be
   appropriate since it can find out every possible combinations and eliminate unqualified combination quickly through pruning. 
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Use recursive helper function to implement backtrack 
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

