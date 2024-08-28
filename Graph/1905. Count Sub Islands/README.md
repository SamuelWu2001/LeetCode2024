## 1905. Count Sub Islands
🔗 Link: [Count Sub Islands](https://leetcode.com/problems/count-sub-islands/description/?envType=daily-question&envId=2024-08-28)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Depth-First Search, Breadth-First Search, Union Find, Matrix  

You are given two m x n binary matrices grid1 and grid2 containing only 0's (representing water) and 1's (representing land). An island is a group of 1's connected 4-directionally (horizontal or vertical). Any cells outside of the grid are considered water cells.

An island in grid2 is considered a sub-island if there is an island in grid1 that contains all the cells that make up this island in grid2.

Return the number of islands in grid2 that are considered sub-islands.

 

Example 1:

![image](https://github.com/user-attachments/assets/47b8cf77-2d94-4aa5-a33f-517605071608)

Input: grid1 = [[1,1,1,0,0],[0,1,1,1,1],[0,0,0,0,0],[1,0,0,0,0],[1,1,0,1,1]], grid2 = [[1,1,1,0,0],[0,0,1,1,1],[0,1,0,0,0],[1,0,1,1,0],[0,1,0,1,0]]  
Output: 3  
Explanation: In the picture above, the grid on the left is grid1 and the grid on the right is grid2.  
The 1s colored red in grid2 are those considered to be part of a sub-island. There are three sub-islands.  

Example 2:

![image](https://github.com/user-attachments/assets/97daa90a-91e5-427f-8f99-3988ef3ee200)

Input: grid1 = [[1,0,1,0,1],[1,1,1,1,1],[0,0,0,0,0],[1,1,1,1,1],[1,0,1,0,1]], grid2 = [[0,0,0,0,0],[1,1,1,1,1],[0,1,0,1,0],[0,1,0,1,0],[1,0,0,0,1]]  
Output: 2   
Explanation: In the picture above, the grid on the left is grid1 and the grid on the right is grid2.   
The 1s colored red in grid2 are those considered to be part of a sub-island. There are two sub-islands.  
  

Constraints:

m == grid1.length == grid2.length  
n == grid1[i].length == grid2[i].length  
1 <= m, n <= 500  
grid1[i][j] and grid2[i][j] are either 0 or 1.  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. DFS  
   We can use DFS method to find out all islands in grid2 and at the same time check if the corresponding pixel in grid1 is land or not. Use anothre 2d vector with the same size as grid2
   to record whether a certain pixel is visited or not.  
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Same as above section

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of rows and m represents the number of columns
   - Time complexity: O(n*m)
   - Space complexity: O(n*m)

