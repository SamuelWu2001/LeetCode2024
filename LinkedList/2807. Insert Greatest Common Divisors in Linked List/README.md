## 2807. Insert Greatest Common Divisors in Linked List
🔗 Link: [Insert Greatest Common Divisors in Linked List](https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/?envType=daily-question&envId=2024-09-10)  
💡 Difficulty: Medium  
🛠️ Topics: Linked List, Math, Number Theory

Given the head of a linked list head, in which each node contains an integer value.

Between every pair of adjacent nodes, insert a new node with a value equal to the greatest common divisor of them.

Return the linked list after insertion.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

 

Example 1:

![image](https://github.com/user-attachments/assets/b3945e19-244c-4fc4-9375-3ac95c7a7760)

Input: head = [18,6,10,3]  
Output: [18,6,6,2,10,1,3]  
Explanation: The 1st diagram denotes the initial linked list and the 2nd diagram denotes the linked list after inserting the new nodes (nodes in blue are the inserted nodes).  
- We insert the greatest common divisor of 18 and 6 = 6 between the 1st and the 2nd nodes.  
- We insert the greatest common divisor of 6 and 10 = 2 between the 2nd and the 3rd nodes.  
- We insert the greatest common divisor of 10 and 3 = 1 between the 3rd and the 4th nodes.  
There are no more adjacent nodes, so we return the linked list.

Example 2:

![image](https://github.com/user-attachments/assets/553d8e49-585e-4ba6-b3e0-fc37c4633d45)

Input: head = [7]  
Output: [7]  
Explanation: The 1st diagram denotes the initial linked list and the 2nd diagram denotes the linked list after inserting the new nodes.  
There are no pairs of adjacent nodes, so we return the initial linked list.
 

Constraints:

The number of nodes in the list is in the range [1, 5000].  
1 <= Node.val <= 1000
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. LinkedList  
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: 

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of thec linked list and the average value in each node is m.
   - Time complexity: O(n * log(m))
   - Space complexity: O(1)

