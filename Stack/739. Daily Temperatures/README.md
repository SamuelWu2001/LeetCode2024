## 739. Daily Temperatures
🔗 Link: [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Stack, Monotonic Stack

Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

 

Example 1:

Input: temperatures = [73,74,75,71,69,72,76,73]  
Output: [1,1,4,2,1,1,0,0]  

Example 2:

Input: temperatures = [30,40,50,60]  
Output: [1,1,1,0]  

Example 3:

Input: temperatures = [30,60,90]  
Output: [1,1,0]
 

Constraints:

1 <= temperatures.length <= 10^5  
30 <= temperatures[i] <= 100

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Stack  
   We can store the temp and its index into stack and make sure our stack is always in decreasing order. Once the incomming element is unqualified, pop out the top element until it
   satisfy the decreasing order. Everytime when we pop out an element, we shuold update the answer. 
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
1. Assume n represents the number of items in the array.
   - Time complexity: O(n)
   - Space complexity: O(n)

