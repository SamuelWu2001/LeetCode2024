## 235. Lowest Common Ancestor of a Binary Search Tree
🔗 Link: [Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Tree, Depth-First Search, Binary Search Tree, Binary Tree

Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

Example 1:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/93619b61-c989-4f02-a486-13541c1cb2eb)  
Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
Output: 6
Explanation: The LCA of nodes 2 and 8 is 6.

Example 2:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/55bdee00-c4a4-4511-958f-3cff49698e8d)  
Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4
Output: 2
Explanation: The LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.
Example 3:
Input: root = [2,1], p = 2, q = 1
Output: 2
 

Constraints:

The number of nodes in the tree is in the range [2, 10^5].
-10^9 <= Node.val <= 10^9
All Node.val are unique.
p != q
p and q will exist in the BST.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can p and q be the same node?  
   No, and all the node are unique.
3. What is the maximum level of the given tree?  
   10^5
5. Any requirement on time/space complexity?  
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Binary Search  
   Since the given tree is a binary search tree, we can go through the entire tree by DFS method. And when the node p and the node q are catogorized to the different subtrees then
   return the current node. 
   
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

1. recursion loop
   - if q->val and p->val are both bigger or smaller than the current node->val, call the next recursion function
   - else return the current node

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of items in the given tree.
   - Time complexity: O(log(n))
   - Space complexity: O(1)

