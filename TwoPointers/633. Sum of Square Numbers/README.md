## 633. Sum of Square Numbers
🔗 Link: [Sum of Square Numbers](https://leetcode.com/problems/sum-of-square-numbers/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Math, Two Pointers, Binary Search 

Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5
Example 2:

Input: c = 3
Output: false
 

Constraints:

0 <= c <= 2^31 - 1

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Two Pointers  
   Use two pointer to point at 0 and root(c) in the begining. Move the two pointers inward to find out the qualified combination.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

1. Initialize two pointers `a` = 0 and `b` = root(c); 
2. While a+1 < b
   - if a*a + b\*b = c, return True
   - if a*a + b\*b < c, a++
   - if a*a + b\*b > c, b--
3. Return False

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
   - Space complexity: O(1)

