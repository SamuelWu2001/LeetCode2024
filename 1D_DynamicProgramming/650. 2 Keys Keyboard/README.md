## 650. 2 Keys Keyboard
🔗 Link: [2 Keys Keyboard](https://leetcode.com/problems/2-keys-keyboard/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Math, Dynamic Programming

There is only one character 'A' on the screen of a notepad. You can perform one of two operations on this notepad for each step:

Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).  
Paste: You can paste the characters which are copied last time.  
Given an integer n, return the minimum number of operations to get the character 'A' exactly n times on the screen.  

 

Example 1:

Input: n = 3  
Output: 3  
Explanation: Initially, we have one character 'A'.  
In step 1, we use Copy All operation.  
In step 2, we use Paste operation to get 'AA'.  
In step 3, we use Paste operation to get 'AAA'.

Example 2:

Input: n = 1  
Output: 0
 

Constraints:

1 <= n <= 1000

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming  
   In this case if we want to get the minimum operations then we should find the maximum value m where n%m == 0. And the ans(n) will be ans(m) + n/m. Since we need to copy one time and paste for n/m-1 times. And in order to get m, we can use a factor started from 2 and check if n%factor == 0, if true then m = n/factor, else increase factor and keep findigng m.   
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Same as above  
1. `factor = 2`, `steps = 1` 
2. while n > 1
   - if n%factor == 0
    - steps += factor
    - n /= factor
   - else
    - ++factor
3. return steps

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
   - Time complexity: O(n)
   - Space complexity: O(1)

