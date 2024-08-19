## 264. Ugly Number II
🔗 Link: [Ugly Number II](https://leetcode.com/problems/ugly-number-ii/description)  
💡 Difficulty: Medium  
🛠️ Topics: Hash Table, Math, Dynamic Programming, Heap (Priority Queue)

An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return the nth ugly number.

Example 1:

Input: n = 10  
Output: 12  
Explanation: [1, 2, 3, 4, 5, 6, 8, 9, 10, 12] is the sequence of the first 10 ugly numbers.

Example 2:

Input: n = 1  
Output: 1  
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
 

Constraints:

1 <= n <= 1690
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming  
   In this case if we check every number in increasing order, the runtime will be exteremely long since the ugly number is sparse. Thus, we should think about finding the ugly number by multiply 2,3 and 5. The question is how do we know the next smallest ugly number. As we all know, the new ugly number must be an old ugly number times 2 or 3 or 5. In this case,  we can simply compare the three candidates and find the smallest one to be the next ugly number. And we also need to be aware of the duplicated number, for example, 2\*3 and 3*2 are considered the same ugly number.    
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: same as above section

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
   - Space complexity: O(n)

