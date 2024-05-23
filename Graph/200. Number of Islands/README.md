## 200. Number of Islands
🔗 Link: [Number of Islands](https://leetcode.com/problems/number-of-islands/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Depth-First Search, Breadth-First Search, Union Find, Matrix

Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

 

Example 1:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
Example 2:

Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3
 

Constraints:

m == grid.length
n == grid[i].length
1 <= m, n <= 300
grid[i][j] is '0' or '1'.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input grid be empty?  
   No
2. Do diagonal connections between lands forms an island?  
   No 
3. Any requirement on time/space complexity?  
   O(m*n) in time and space
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. DFS  
   The advantages of DFS are high space efficiency, faster solution finding in some cases and suitablility for memorization search. However, its limitations include the inability to find the shortest path and the potential for stack
   overflow in extreme cases.
2. BFS  
   The advantages of BFS are that it can find the shortest path in an unwrighted graph, is suitable for iteration to avoid stack overflow issues, and discover all nodes. However, its limitations include high space requirements and, in
   some cases, lower efficiency compared to DFS
3. Discussion  
   In this case, I prefer to use DFS methods to solve the problem since I think it is more intuitive to implement. However, if the 2d binary grid is extremely large, I will use BFS methods to avoid stack overflow issues.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Traverse the 2D binary grid, when we visited a land, call helper function to search the entire island using DFS. At the same time mark the visited land to prevent repeated calculations. 
- Main function
  1. Traverse the 2D binary grid
     - if the grid is a land
       - call the helper function to mark the whole island
       - add 1 to the island number
  2. Return island number
- Helper function
  - mark the current grid
  - if there are adjacent lands, call the recursive helper function to mark them
 
### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of rows of the 2d binary grid.
2. Assume m represents the number of columns of the 2d binary grid.
   - Time complexity: O(m*n) => Since we will visit every grid for at most one time.
   - Space complexity: O(m*n) => Since when the whole 2d grid is filled with lands (worst case), DFS will traverse every grid and the depth of the recursion stack will be m * n

