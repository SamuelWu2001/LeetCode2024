## 1653. Minimum Deletions to Make String Balanced
🔗 Link: [Minimum Deletions to Make String Balanced](https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/description/)  
💡 Difficulty: Medium  
🛠️ Topics: String, Dynamic Programming, Stack 

You are given a string s consisting only of characters 'a' and 'b'​​​​.

You can delete any number of characters in s to make s balanced. s is balanced if there is no pair of indices (i,j) such that i < j and s[i] = 'b' and s[j]= 'a'.

Return the minimum number of deletions needed to make s balanced.

 

Example 1:

Input: s = "aababbab"  
Output: 2  
Explanation: You can either:  
Delete the characters at 0-indexed positions 2 and 6 ("aababbab" -> "aaabbb"), or  
Delete the characters at 0-indexed positions 3 and 6 ("aababbab" -> "aabbbb").  

Example 2:

Input: s = "bbaaaaabb"  
Output: 2  
Explanation: The only solution is to delete the first two characters.
 

Constraints:

1 <= s.length <= 10^5  
s[i] is 'a' or 'b'​​.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming  
   In this case, we should only focus on the incoming char. We can first initialize two variables, `count_b` and `deletions`. If the char is 'b', then it will not break the balance,
   so we plus one to the `count_b` and do not update `deletions`. However, if we encounter 'a', then we should think about whether to delete the current element itself or all the 'b'
   before it. That is, we should maintain the new `deletions` by comparing `deletions+1` and `count_b` and take the smaller one. Once we traversed all the string, we can return `deletions`
   as our answer.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Same as above section

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of characters in the string.
   - Time complexity: O(n)
   - Space complexity: O(1)

