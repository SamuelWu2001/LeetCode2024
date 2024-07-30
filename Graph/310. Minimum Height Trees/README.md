## 310. Minimum Height Trees
🔗 Link: [Minimum Height Trees](https://leetcode.com/problems/minimum-height-trees/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Depth-First Search, Breadth-First Search, Graph, Topological Sort

A tree is an undirected graph in which any two vertices are connected by exactly one path. In other words, any connected graph without simple cycles is a tree.

Given a tree of n nodes labelled from 0 to n - 1, and an array of n - 1 edges where edges[i] = [ai, bi] indicates that there is an undirected edge between the two nodes ai and bi in the tree, you can choose any node of the tree as the root. When you select a node x as the root, the result tree has height h. Among all possible rooted trees, those with minimum height (i.e. min(h))  are called minimum height trees (MHTs).

Return a list of all MHTs' root labels. You can return the answer in any order.

The height of a rooted tree is the number of edges on the longest downward path between the root and a leaf.

 

Example 1:

![image](https://github.com/user-attachments/assets/5ac6d3a1-1a10-45bf-b2c0-0b18ed0ad0f1)

Input: n = 4, edges = [[1,0],[1,2],[1,3]]  
Output: [1]  
Explanation: As shown, the height of the tree is 1 when the root is the node with label 1 which is the only MHT.

Example 2:

![image](https://github.com/user-attachments/assets/04bb25f1-c777-4491-94e0-7846a8d23dc9)

Input: n = 6, edges = [[3,0],[3,1],[3,2],[3,4],[5,4]]  
Output: [3,4]
 

Constraints:

1 <= n <= 2 * 10^4  
edges.length == n - 1  
0 <= ai, bi < n  
ai != bi  
All the pairs (ai, bi) are distinct.   
The given input is guaranteed to be a tree and there will be no repeated edges.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Is the edges array sorted?
   No, it is random
3. Any requirement on time/space complexity?
   O(n) in time complexity
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. BFS  
   The most intuitive way is to calculate every height while considering taking each node as the root using BFS, and record the nodes which has the minimum height. However, this will take O(n^2) in time complexity.
2. Rversed BFS  
   Since we only want to do it in O(n) time, we should use the Topological method to find the qualified nodes. To be more specific, we can start from the leaf nodes and see them as the same level. Then, remove this outer level and update
   the remaining nodes. And keep finding the most outer nodes until we remove all the nodes. The last (inner) level nodes will be our final answer.
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
1. Assume n represents the number of items in the array.
   - Time complexity: O(n)
   - Space complexity: O(n)

