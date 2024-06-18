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

General Idea: Use recursive helper function to implement backtrack algoroithm and use a hashmap to store the taken letters.
1. Initialize `maxLength` and `record` wherer `maxLength` represents the longest length of the qualified combinations and `record` is an `unordered_map` to store the taken letters.
2. Recursion
   - if the index is equal to the size of the given array
      - update `maxLength` by compare it with `record.size()`
      - return
   - if all the characters in the current element are not in the hashmap
     - add those characters into `record`
     - go to the next recursion step (consider taking the current element)
     - remove those characters from `record`
   -  go to the next recursion step (consider not taking the current element)
   -  return
4. Return `maxLength`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of items in the array and m represents the average size of each element.
   - Time complexity: O(2^n*m)
   - Space complexity: O(n)

