## 5. Longest Palindromic Substring

🔗 Link: [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/description/)

💡 Difficulty: Medium

🛠️ Topics: Two Pointers, String, Dynamic Programming

Given a string s, return the longest palindromic substring in s.

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.

## UMPIRE Method:

### Understand

> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.

1. Are `A` and `a` considered the same characters?
No
2. Any requirement on time/space complexity?

### Match

> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.

1. Two Pointers  
   Iterate through the entire string and everytime we visit an element, find out the largest palindromic substring when considering the visited element as the
   middle character. To be specific, we can use two pointers, left and right, to expand the substring until the elements pointefd by left and right pointers
   are diferent. Moreover, since the length of the palindromic substring may be odd, we also need to check the adjacent elements. If the value of the adjacent
   element is the same as that of visited element, we should expand the two pointers again to find out the potential largest substring. This algorithm has a time
   complexity of O(n^2) and a space complexity of O(1).
2. Dynamic Programming  
   Create a 2d dp array where dp[i][j] is true when s[i,j] is palindromic, and vice versa. Initially, we fill in true values in dp[i][j] where i==j and
   s[i] == s[j] for adjacent elements since one charater and two adjacent elements with same value must be palindromic . After that fill in other elements
   by the rule: `dp[i][j] is true if (dp[i+1][j-1] == true && s[i] == s[j])`. This method has both time and space complexity in O(n^2). 
   

### Plan

> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: The above explanation for Two Pointers.

1. Set up left and right pointers.
2. Iterate through the string
    - find out the lonegst palindromic substring by expanding from the visited element
    - if the adjacent element has the same value, find out the longest one
    - update the longest substring
3. Return the longest qualified substring

### Implement

> - Implement the solution (make sure to know what level of detail the interviewer wants)

see solution.cpp

### Review

> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.

### Evaluate

> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.

1. Assume n represents the length of the given string.
    - Time complexity: O(n^2)
    - Space complexity: O(1)
2. Using [the Manacher algorithm](https://medium.com/hoskiss-stand/manacher-299cf75db97e), the time complexity can be reduced to O(n).
