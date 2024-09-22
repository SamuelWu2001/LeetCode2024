## 199. Binary Tree Right Side View
🔗 Link: [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Sort, Hash  

Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

Example 1:

![image](https://github.com/user-attachments/assets/36fafa30-9111-4e35-972d-a0393368a862)

Input: root = [1,2,3,null,5,null,4]  
Output: [1,3,4]  

Example 2:

Input: root = [1,null,3]  
Output: [1,3]  

Example 3:

Input: root = []  
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 100].  
-100 <= Node.val <= 100

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. DFS    
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
1. Assume n represents the number of nodes in the given tree.
   - Time complexity: O(n)
   - Space complexity: O(n)

