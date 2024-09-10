## 725. Split Linked List in Parts
🔗 Link: [Split Linked List in Parts](https://leetcode.com/problems/split-linked-list-in-parts/description/?envType=daily-question&envId=2024-09-08)  
💡 Difficulty: Medium  
🛠️ Topics: Linked List

Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts.

The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.

The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.

Return an array of the k parts.

 

Example 1:

![image](https://github.com/user-attachments/assets/c967bb65-433f-4ab1-87d8-b11d0b859466)

Input: head = [1,2,3], k = 5  
Output: [[1],[2],[3],[],[]]  
Explanation:  
The first element output[0] has output[0].val = 1, output[0].next = null.  
The last element output[4] is null, but its string representation as a ListNode is [].  

Example 2:

![image](https://github.com/user-attachments/assets/b0e71451-5e7d-4d46-97fc-f829db1e973c)

Input: head = [1,2,3,4,5,6,7,8,9,10], k = 3  
Output: [[1,2,3,4],[5,6,7],[8,9,10]]  
Explanation:  
The input has been split into consecutive parts with size difference at most 1, and earlier parts are a larger size than the later parts.
 

Constraints:

The number of nodes in the list is in the range [0, 1000].  
0 <= Node.val <= 1000  
1 <= k <= 50

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of the given linked list.
   - Time complexity: O(n)
   - Space complexity: O(1)

