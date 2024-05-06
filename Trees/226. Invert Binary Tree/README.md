## 226. Invert Binary Tree
🔗 Link: [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/description/)  
💡 Difficulty: Easy  
🛠️ Topics: Tree, Depth-First Search, Breadth-First Search, Binary Tree

Given the root of a binary tree, invert the tree, and return its root.

Example 1:
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]
Example 2:
Input: root = [2,1,3]
Output: [2,3,1]
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
1. Can the given tree be empty?  
   Yes
2. Is the given tree a complete tree or a perfect tree?  
   There is no requirement
3. Is there a maximum limit for the given tree?  
   The maximum number of nodes is 100
5. The "invert" operation refers to swapping the two subtress of a node, rather than swapping the values of two adjacent nodes, right?  
   Right
6. Any requirement on time/space complexity?  
   O(n) in time
   
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. BFS  
   - BFS traverses level by level, starting from the root node, then exploring its neighboring nodes, followed by the neighboring nodes on the next level.  
   - BFS is ideal for scenarios where you need to access nodes level by level or in the shortest path order. However, compare to DFS, BFS has a space complexity of O(V), where V is the number of nodes in
   a graph because it maintains a queue. Therefore, in large graphs/trees with many nodes, the queue might consume a significant amount of memory.
2. DFS  
   - DFS starts from the initial node and goes down one path until it can't go any further, then backtracks to continue along another path.
   - The space complexity of DFS is O(H), where H is the maximum depth of a graph.
3. Discussion  
   In this problem, the total number of swaps will be the same regardless of whether we use BFS or DFS, and the number of nodes is limited to 100. Thus, there's no significant difference between BFS and DFS.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Iterate through the given tree using BFS. Every time we visit a node, swap its two substrees and store its two child nodes into the queue.  
1. Create a queue and store the root node
2. Iterate through the tree
   - pop out the first element
     -  swap its two substrees
     -  store its two child nodes into the queue
3. Return the root node

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of nodes in the tree.
   - Time complexity: O(n)
   - Space complexity: O(n)
