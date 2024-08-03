## 2476. Closest Nodes Queries in a Binary Search Tree
🔗 Link: [Closest Nodes Queries in a Binary Search Tree](https://leetcode.com/problems/closest-nodes-queries-in-a-binary-search-tree/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Binary Search, Tree, Depth-First Search, Binary Search Tree, Binary Tree 

You are given the root of a binary search tree and an array queries of size n consisting of positive integers.

Find a 2D array answer of size n where answer[i] = [mini, maxi]:

mini is the largest value in the tree that is smaller than or equal to queries[i]. If a such value does not exist, add -1 instead.  
maxi is the smallest value in the tree that is greater than or equal to queries[i]. If a such value does not exist, add -1 instead.  
Return the array answer.

Example 1:

![image](https://github.com/user-attachments/assets/89c9afa0-a1c6-461c-b0b6-1411c9a973bb)

Input: root = [6,2,13,1,4,9,15,null,null,null,null,null,null,14], queries = [2,5,16]
Output: [[2,2],[4,6],[15,-1]]
Explanation: We answer the queries in the following way:
- The largest number that is smaller or equal than 2 in the tree is 2, and the smallest number that is greater or equal than 2 is still 2. So the answer for the first query is [2,2].  
- The largest number that is smaller or equal than 5 in the tree is 4, and the smallest number that is greater or equal than 5 is 6. So the answer for the second query is [4,6].  
- The largest number that is smaller or equal than 16 in the tree is 15, and the smallest number that is greater or equal than 16 does not exist. So the answer for the third query is [15,-1].

Example 2:

![image](https://github.com/user-attachments/assets/7e4bdf75-c0ca-4125-b1da-b0da0f289ea4)

Input: root = [4,null,9], queries = [3]
Output: [[-1,4]]
Explanation: The largest number that is smaller or equal to 3 in the tree does not exist, and the smallest number that is greater or equal to 3 is 4. So the answer for the query is [-1,4].

Constraints:

The number of nodes in the tree is in the range [2, 105].  
1 <= Node.val <= 10^6  
n == queries.length  
1 <= n <= 10^5  
1 <= queries[i] <= 10^6  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. DFS  
   The most intuitive way is to go through the binary search tree for each queries, however, since the tree might not be balanced, the time complexity could be O(n\*m) in the worst case.
   Thus, we can first use DFS to go through the whole tree to get a sorted array and then use binary search to make sure our approach only takes O(n*log(m)) in time.  
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Go through the given tree with DFS and find the answer through binary search method

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume m represents the number of items in the tree and n represents the size of `queries`.
   - Time complexity: O(n*log(m))
   - Space complexity: O(max(n, m))

