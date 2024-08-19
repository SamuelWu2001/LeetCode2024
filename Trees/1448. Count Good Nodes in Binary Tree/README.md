## 1448. Count Good Nodes in Binary Tree
🔗 Link: [Count Good Nodes in Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Tree, Depth-First Search, Breadth-First Search, Binary Tree

Given a binary tree root, a node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X.

Return the number of good nodes in the binary tree.

 

Example 1:

![image](https://github.com/user-attachments/assets/a6c69dcd-ef73-4646-9739-d208236b03fb)

Input: root = [3,1,4,3,null,1,5]  
Output: 4  
Explanation: Nodes in blue are good.  
Root Node (3) is always a good node.  
Node 4 -> (3,4) is the maximum value in the path starting from the root.  
Node 5 -> (3,4,5) is the maximum value in the path  
Node 3 -> (3,1,3) is the maximum value in the path.  

Example 2:

![image](https://github.com/user-attachments/assets/7fb34bb2-3590-4133-ab73-047cc4de2aa2)

Input: root = [3,3,null,4,2]  
Output: 3  
Explanation: Node 2 -> (3, 3, 2) is not good, because "3" is higher than it.

Example 3:

Input: root = [1]  
Output: 1  
Explanation: Root is considered as good.
 

Constraints:

The number of nodes in the binary tree is in the range [1, 10^5].  
Each node's value is between [-10^4, 10^4].

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. DFS
   Use DFS to traverse every single nodes in the tree and use a variable to record the current maximum value.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Same as above

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

