## 3. Longest Substring Without Repeating Characters
🔗 Link: [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)   
💡 Difficulty: Medium  
🛠️ Topics: Array, Sliding Window  

Given a string s, find the length of the longest substring without repeating characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Constraints:

0 <= s.length <= 5 * 10^4
s consists of English letters, digits, symbols and spaces

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input be empty?  
   Yes
2. Any requirement on time/space complexity?
   O(n) in time and O(min(M, N)) in space
3. Are the characters case-sensitive? For example, is 'a' different from 'A'?  
   Yes
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Sliding Window  
   We can set up two pointers to represent the start and the end of the sliding window. Move the end pointer until a repeat character is found and move the start pointer to remove the repeated charactor. Keep track of the maximum length of the window. When the end pointer reaches the end of the input string, return the maximum value.
  
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Iterate  through the entire string and record the maximum length of the sliding window, while also checking whether there is repeated character in the sliding window.
1. Create the unordered_set
2. Initialize the sliding window at the first element
3. Iterate through the string by moving the end pointer right
   - if the character is repeated, update both the unordered_set and the start pointer
   - update the maximum length
4. Return the maximum length if we reach the end of the array

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of the input string and m represents the size of the unordered_set.
   - Time complexity: O(n)
   - Space complexity: O(min(n, m))

