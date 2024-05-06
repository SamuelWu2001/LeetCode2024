## 21. Merge Two Sorted Lists
🔗 Link: [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/description/)  
💡 Difficulty: Easy  
🛠️ Topics: Linked List, Recursion  

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:
Input: list1 = [], list2 = []
Output: []

Example 3:
Input: list1 = [], list2 = [0]
Output: [0]

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Does the merged linked list need to be sorted?  
   Yes
2. Can list1 or list2 be empty?  
   Yes
3. When two linked lists have the same value, which one come first?  
   There are no rules, you can choose freely.
4. Any requirement on time/space complexity?  
   O(m+n) in time and O(1) in space.
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.

For Linked List problems, we want to consider the following approaches:

- Dummy Head. Would using a dummy head as a starting point help simplify our code and handle edge cases? A dummy head can help us rearrange our list  
- Two Pointer. If we used two pointers to iterate through the list at different speeds, would that help us solve this problem? Two pointers could help us in this problem. Where should both pointers point to initially?
   
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create a dummy head to be the head of the merged linked list, and choose the smaller elements from the two given lists to be the next nodes, continuing until one of the given lists is empty. Concatenate the rest of the other list and retrun the dummy head. 
1. Create the dummy head and set a current pointer to reference it. 
2. Iterate through both given linked lists:
   - compare the first elements of two lists
   - point the next of the current pointer points to the smaller element
3. When one of the lists is empty, point the next of the current pointer to the head of the remaining list
4. Return `dummy->next`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.

1. Edge case : one or both inputs are empty.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of List1 and m represents that of List2.
   - Time complexity: O(m+n)
   - Space complexity: O(1)

