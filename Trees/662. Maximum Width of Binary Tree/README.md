## 662. Maximum Width of Binary Tree
🔗 Link: [Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Tree, Depth-First Search, Breadth-First Search, Binary Tree  

Given the root of a binary tree, return the maximum width of the given tree.

The maximum width of a tree is the maximum width among all levels.

The width of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null nodes between the end-nodes that would be present in a complete binary tree extending down to that level are also counted into the length calculation.  

It is guaranteed that the answer will in the range of a 32-bit signed integer.  

 

Example 1:
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/4a0dc793-3f85-4938-a8ba-28dfe465054c)


Input: root = [1,3,2,5,3,null,9]  
Output: 4  
Explanation: The maximum width exists in the third level with length 4 (5,3,null,9).  

Example 2:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/9a3cda0d-63af-4526-8bce-1635cccd13b9)

Input: root = [1,3,2,5,null,null,9,6,null,7]  
Output: 7  
Explanation: The maximum width exists in the fourth level with length 7 (6,null,null,null,null,null,7).  


Example 3:
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/1f1a2fbd-a6be-4923-bbd4-36ef0c738259)

Input: root = [1,3,2,5]  
Output: 2  
Explanation: The maximum width exists in the second level with length 2 (3,2).  
 

Constraints:

The number of nodes in the tree is in the range [1, 3000].  
-100 <= Node.val <= 100  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. BFS  
   Use BFS to visit nodes level by level and caculate the width. 
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.
 
General Idea: Use two queues alternately, once there is a queue empty, we calculate the width and update the result. Once both the queue are empty this means we have visited the 
entire tree and we can return result. 

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of items in the tree.
   - Time complexity: O(n)
   - Space complexity: O(n)

