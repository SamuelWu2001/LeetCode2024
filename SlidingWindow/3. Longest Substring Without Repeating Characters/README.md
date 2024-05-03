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

