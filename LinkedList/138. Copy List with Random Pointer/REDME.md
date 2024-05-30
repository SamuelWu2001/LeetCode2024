## 138. Copy List with Random Pointer
🔗 Link: [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Hash Table, Linked List 

A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.

Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.

Return the head of the copied linked list.

The linked list is represented in the input/output as a list of n nodes. Each node is represented as a pair of [val, random_index] where:

val: an integer representing Node.val
random_index: the index of the node (range from 0 to n-1) that the random pointer points to, or null if it does not point to any node.
Your code will only be given the head of the original linked list.

 

Example 1:
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/2c9abf2f-cba9-4b01-adc0-574a693eb4f5)
Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]

Example 2:
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/d15729b3-2a42-47d5-ab22-bfbcbc55caba)
Input: head = [[1,1],[2,1]]
Output: [[1,1],[2,1]]

Example 3:
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/09bf42fd-466a-44c9-8a74-e2df8f60141a)
Input: head = [[3,null],[3,0],[3,null]]
Output: [[3,null],[3,0],[3,null]]

Constraints:

0 <= n <= 1000
-104 <= Node.val <= 104
Node.random is null or is pointing to some node in the linked list.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the head be null?  
   Yes
3. What is the maximum length of the given linked list?  
   1000 
4. What is the range of values that a node can hold?  
   -10000-10000  
6. time / space complexity?  
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Iterate (while loop)  
   Since the random pointer of the original node may point to the node behind it, we should traverse every node first and build a new linked list without setting random pointers.
2. Hash Table  
   In order to make the random pointers point to the right place, we can use a hashmap to store the two nodes from the old and new linked lists which have the same index. And when we
   get the address where the original random pointer point, we can use the hashmap to find the corresponding address that the new random pointer should point to.      
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Travase through the entire linked list for one time, make the new linked list without setting random pointers and store the corresponding nodes into a hashmap. Go through second time to set the random pointers based on the hashmap.

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

