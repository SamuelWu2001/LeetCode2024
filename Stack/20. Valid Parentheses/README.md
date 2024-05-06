## 20. Valid Parentheses
🔗 Link: [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/description/)  
💡 Difficulty: Easy  
🛠️ Topics: String, Stack  

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
   O(n) in time and space complexity
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Stack  
   Use a Stack to store open brackets and when identifying a close bracket, match it with the latest open bracket from the stack.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create a stack to store open brackets and remove the elements when the corresponded close brackets are found. If the close bracket doesn't match or if the stack is not empty when we reach
the end of the input string, return False; otherwise, return True.
1. Create the Stack
2. Iterate through the string
   - if the character is an open bracket, add to the Stack
   - if the character is an close bracket, match it with the latest open bracket
     - if it matches, remove the first element from the Stack
     - if it doesn't, return False
3. Return True if we reach the end of the string with an empty Stack; otherwise, return False.

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
1. The length of the input string is odd.
2. Close brackets more than open brackets. EX: "{", "()]"
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of the input string.
   - Time complexity: O(n)
   - Space complexity: O(n)

