## 1325. Delete Leaves With a Given Value
🔗 Link: [Delete Leaves With a Given Value](https://leetcode.com/problems/delete-leaves-with-a-given-value/description/)  
💡 Difficulty: Medium    
🛠️ Topics: Tree, Depth-First Search, Binary Tree

Given a binary tree root and an integer target, delete all the leaf nodes with value target.

Note that once you delete a leaf node with value target, if its parent node becomes a leaf node and has the value target, it should also be deleted (you need to continue doing that until you cannot).

Example 1:

![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/c136329a-3ed8-426e-84cf-fac585256daa)

Input: root = [1,2,3,2,null,2,4], target = 2
Output: [1,null,3,null,4]
Explanation: Leaf nodes in green with value (target = 2) are removed (Picture in left). 
After removing, new nodes become leaf nodes with value (target = 2) (Picture in center).

Example 2:

![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/0cf0d68a-d6cc-47c1-8281-9f46f31710fe)

Input: root = [1,3,3,3,2], target = 3
Output: [1,3,null,null,2]

Example 3:

![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/029d6dcb-73bf-47b8-a6a3-f43423c67263)

Input: root = [1,2,null,2,null,2], target = 2
Output: [1]
Explanation: Leaf nodes in green with value (target = 2) are removed at each step.
 

Constraints:

The number of nodes in the tree is in the range [1, 3000].
1 <= Node.val, target <= 1000

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the root be null?  
   No
3. Do we need to remove the node which originally is not a leaf node but turn to be a leaf node while processing other nodes?  
   Yew
4. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. DFS  
   In this case, the most intuitive way is to process the node from bottom to the top. And there is no difference in time complexity between DFS and BFS since either way we need to visit every node. I prefer to use DFS method and in each recursion stack we first porcess the left subtree and the right subtree. After that we can check if the current node is a leaf node. If it is and the value is equal to the target value, then we remove the current node. After processing entire tree, we can return the root node as the final answer.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Same as the above section
1. Recursion
   - if `node->left` is not null, then call next recursion function
   - if `node->right` is not null, then call next recursion function
   - if both `node->left` and `node->right` are null and node->val is equal to the target value, return null
   - else return `node`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.

1. Assume n represents the number of nodes in the given binary tree and m represents the deepest level of the tree.
   - Time complexity: O(n)
   - Space complexity: O(m)
