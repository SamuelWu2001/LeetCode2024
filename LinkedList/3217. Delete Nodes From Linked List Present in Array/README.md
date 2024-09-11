## 3217. Delete Nodes From Linked List Present in Array
🔗 Link: [Delete Nodes From Linked List Present in Array](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/description/?envType=daily-question&envId=2024-09-06)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Hash Table, Linked List

You are given an array of integers nums and the head of a linked list. Return the head of the modified linked list after removing all nodes from the linked list that have a value that exists in nums.

 

Example 1:

![image](https://github.com/user-attachments/assets/88cf6d93-68bf-4fb1-a94a-0ad9e79cc6d1)

Input: nums = [1,2,3], head = [1,2,3,4,5]

Output: [4,5]

Explanation:



Remove the nodes with values 1, 2, and 3.  


Example 2:

![image](https://github.com/user-attachments/assets/bf6190b1-477a-4cc5-99bb-7dfda39f1385)


Input: nums = [1], head = [1,2,1,2,1,2]

Output: [2,2,2]

Explanation:



Remove the nodes with value 1.


Example 3:

![image](https://github.com/user-attachments/assets/1f5042ef-dcf9-4799-b310-21586e755a4f)

Input: nums = [5], head = [1,2,3,4]

Output: [1,2,3,4]

Explanation:



No node has value 5.

 

Constraints:

1 <= nums.length <= 10^5  
1 <= nums[i] <= 10^5  
All elements in nums are unique.  
The number of nodes in the given list is in the range [1, 10^5].  
1 <= Node.val <= 10^5  
The input is generated such that there is at least one node in the linked list that has a value not present in nums.  

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
1. Assume n represents the number of items in the array, m represents the length of the given linkedlist.
   - Time complexity: O(n+m)
   - Space complexity: O(n)

