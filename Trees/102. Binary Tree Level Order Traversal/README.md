## 102. Binary Tree Level Order Traversal
🔗 Link: [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Tree, Breadth-First Search, Binary Tree 

Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

Example 1:

![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/6bfbc528-b126-4495-8097-93d9ebd91add)

Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]

Example 2:

Input: root = [1]
Output: [[1]]

Example 3:

Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 2000].
-1000 <= Node.val <= 1000

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input node be null?  
   Yes
2. What is the maximum number of nodes?  
   2000
3. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. BFS  
   In this case, we can use BFS method to visit every nodes in the given tree by level and store all nodes in the same level into a vector element.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create two queues to store the nodes with the same level. When both of the queues are empty, this means we have go through the entire given tree.   
1. Create two queues `a` and `b`, and push root node into `a`
2. Set status = 0, current = {}, result = {}
3. While loop
   - if status == 0
     - push child nodes of `a.front()` into `b`
     - push a.front()->val into current
     - pop `a.front()`
   - if status == 1
     - push child nodes of `b.front()` into `a`
     - push b.front()->val into current
     - pop `b.front()`
   - if `status` == 0 and `a` is empty
     - status = 1
     - push `current` into `result`
     - clean `current`
   - if `status` == 1 and `b` is empty
     - status = 0
     - push `current` into `result`
     - clean `current`
 4. return `result`
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

