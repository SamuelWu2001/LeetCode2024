## 1361. Validate Binary Tree Nodes
🔗 Link: [Validate Binary Tree Nodes]([https://leetcode.com/problems/contains-duplicate/](https://leetcode.com/problems/validate-binary-tree-nodes/description/))  
💡 Difficulty: Easy  
🛠️ Topics: Array, Sort, Hash  

You have n binary tree nodes numbered from 0 to n - 1 where node i has two children leftChild[i] and rightChild[i], return true if and only if all the given nodes form exactly one valid binary tree.

If node i has no left child then leftChild[i] will equal -1, similarly for the right child.

Note that the nodes have no values and that we only use the node numbers in this problem.

 

Example 1:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/5222bbb5-0194-4afd-9ef3-379de253620e)

Input: n = 4, leftChild = [1,-1,3,-1], rightChild = [2,-1,-1,-1]
Output: true

Example 2:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/dc50edc3-157c-4bd4-b4b8-2c1978f10f63)

Input: n = 4, leftChild = [1,-1,3,-1], rightChild = [2,3,-1,-1]
Output: false

Example 3:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/6e85e37b-8c4f-44ea-b418-75723973cc93)

Input: n = 2, leftChild = [1,0], rightChild = [-1,-1]
Output: false

Constraints:

n == leftChild.length == rightChild.length
1 <= n <= 10^4
-1 <= leftChild[i], rightChild[i] <= n - 1

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Are the number of the child nodes always smaller than those of their parent nodes?  
   No
2. Are the length of leftChild and rightChild the same?  
   Yes
3. Can the input be empty?  
   No
4. Is zero always the root node?  
   No
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. BFS or DFS  
   In this problem, there is no difference in time complexity between BFS and DFS. Given that the maximum number of nodes are 10000, I prefer to use BFS to avoid potential stack
   overflow issues associated with recursion in DFS.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Find the root node first. Visit every node from the root node and check if the current is valid. 
1. Traverse `leftChild` and `rightChild` to find the root node
2. If there are more than 1 root, return false
3. Use a vector `record` to record whether the node has been visited
4. BFS
   - use queue to store the incoming nodes
   - if queue are empty, exit BFS
   - if the child node is already been visited, return false
   - add the child nodes into queue
5. Retrun False if there are still nodes have not been visited
6. Otherwise, return True

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

