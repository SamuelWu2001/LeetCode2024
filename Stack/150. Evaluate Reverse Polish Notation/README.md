## 150. Evaluate Reverse Polish Notation
🔗 Link: [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Sort, Hash  

You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

Evaluate the expression. Return an integer that represents the value of the expression.

Note that:

The valid operators are '+', '-', '*', and '/'.  
Each operand may be an integer or another expression.  
The division between two integers always truncates toward zero.  
There will not be any division by zero.  
The input represents a valid arithmetic expression in a reverse polish notation.  
The answer and all the intermediate calculations can be represented in a 32-bit integer.  
 

Example 1:  

Input: tokens = ["2","1","+","3","*"]  
Output: 9  
Explanation: ((2 + 1) * 3) = 9  

Example 2:  

Input: tokens = ["4","13","5","/","+"]  
Output: 6  
Explanation: (4 + (13 / 5)) = 6  

Example 3:  

Input: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]  
Output: 22  
Explanation: ((10 * (6 / ((9 + 3) * -11))) + 17) + 5  
= ((10 * (6 / (12 * -11))) + 17) + 5  
= ((10 * (6 / -132)) + 17) + 5  
= ((10 * 0) + 17) + 5  
= (0 + 17) + 5  
= 17 + 5  
= 22  
  

Constraints:

1 <= tokens.length <= 10^4  
tokens[i] is either an operator: "+", "-", "*", or "/", or an integer in the range [-200, 200].  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Stack  
   In this case, from the example cases we can realize that before a operation string there must be two valid numbers that we can all them `a` and `b` respectively. So we can use a
   stack structure to store the number and every time when we visited a operation sring we can pop out the latest two number as `a` and `b` to calculate the answer and push it back to
   the stack to do the next operation. And when we gone through the whole given array, we can suggest that there will only have one value in the stack which is our final answer.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: See the above section
1. Create the stack
2. Iterate through the given array
   - if the token is a number then push into stack
   - else
     - pop out the latest two number and do the calculation
     - add the result back into the stack
3. Return `stack.top()`

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

