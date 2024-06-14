## 647. Palindromic Substrings
🔗 Link: [Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Two Pointers, String, Dynamic Programming  

Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

 

Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
 

Constraints:

1 <= s.length <= 1000
s consists of lowercase English letters.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input string be empty?  
   No
3. Are the characters case sensitive? Are 'A' and 'a' considered to be the same?  
   There are only lowercase English letters.
4. Are the different (index) elements with the same value considered to be the same?  
   No
5. Any requirement on time/space complexity?  
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Two pointers  
   Two pointers is suitable for solving palindromic-related problems through checking characters outwards from the center. In this case, we can traverse the entire string and find out every qualified substring by two pointers and the time complexity should be O(n^2).
2. Dynamic Programming  
   We can also use dp methods to avoid repeated calculation for the reason that if `aba` is a palindrome than `xabax` will be a palindrome as well. In this case we can create a 2d dp array, where dp[i][j] represents whether substring[i,j] is a palindrome or not. By following the formuala : `dp[i][j] is true when dp[i+1][j-1] is true and s[i] == s[j]` we can fill in the whole 2d array and return the final answer. This method will also take O(n^2) in time complexity. 
   
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Use the two pointers method mentioned above
1. Traverse the input string
   - Consider the visited character to be the center one.
   - Move the two pointers outward to find every qualified substring.
   - If the previous character are the same as current visited character, use the two pointers to find out every qualified substring with even length.
2. Return result
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
   - Space complexity: O(1)
