## 735. Asteroid Collision
🔗 Link: [Asteroid Collision](https://leetcode.com/problems/asteroid-collision/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Stack, Simulation  

We are given an array asteroids of integers representing asteroids in a row.

For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.

 

Example 1:  

Input: asteroids = [5,10,-5]  
Output: [5,10]  
Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.    
Example 2:   

Input: asteroids = [8,-8]  
Output: []  
Explanation: The 8 and -8 collide exploding each other.  
Example 3:  

Input: asteroids = [10,2,-5]  
Output: [10]  
Explanation: The 2 and -5 collide resulting in -5. The 10 and -5 collide resulting in 10.
 

Constraints:

2 <= asteroids.length <= 10^4  
-1000 <= asteroids[i] <= 1000  
asteroids[i] != 0  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input array be empty?  
   No
3. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Stack  
   We can utilize the FILO property of the stack data structure to store the visited asteroid. The collision will only happens when the top element of the stack is positive while the
   visited element is negative. In this case, we need to address with the collision problem. For other situation, we can directly push the current asteroid into stack.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Traverse the entire given array and push them into stack while addresing collision issue when it happens.
1. Create the Stack
2. Iterate through the given array
   - if the stack is empty, push the current asteroid into the stack
   - else while loop (if the top element of the stack is positive while the current asteroid is negative)
     - if the size of the current asteroid is smaller than that of the top element, break
     - if the size of the current asteroid is equal to that of the top element, pop out the top element and break
     - if the size of the current asteroid is bigger than that of the top element
       - pop out the top element
       - if the stack is empty, break
   - else push the current asteroid into the stack
3. Return the stack

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

