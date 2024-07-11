## 542. 01 Matrix
🔗 Link: [01 Matrix](https://leetcode.com/problems/01-matrix/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Dynamic Programming, Breadth-First Search, Matrix 

Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell.

The distance between two adjacent cells is 1.

 

Example 1:

![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/ad6823f3-5fd9-47be-8525-3f5ff94e0e61)

Input: mat = [[0,0,0],[0,1,0],[0,0,0]]  
Output: [[0,0,0],[0,1,0],[0,0,0]]  

Example 2:

![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/2f4523f4-7342-48b3-9707-6daba656428d)

Input: mat = [[0,0,0],[0,1,0],[1,1,1]]  
Output: [[0,0,0],[0,1,0],[1,2,1]]  
 

Constraints:

m == mat.length  
n == mat[i].length  
1 <= m, n <= 10^4  
1 <= m * n <= 10^4  
mat[i][j] is either 0 or 1.  
There is at least one 0 in mat.  
 
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Will the distance always be measured vertically and horizontally?  
   Yes
3. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. 2D Dynamic Programming  
   In this case we can traverse the given matrix from top left to right bottom and update the distance of the right and bottom elements. And vise versa to start from right bottom. In this case we can mqke sure that every element will
   get its minimum distance.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create a 2D vector to store the distance. Traverse the matrix for two times to update the distance for each element.
1. Create the 2D vector `res` and initialize the value to be `INT_MAX-1`
2. Iterate through the array
   - if the matrix[i][j] is 0, set the `res[i][j]` to be 0
   - update the minimum distance of the top left / right bottom elements
   - if the new dis is bigger than the original value, then keep the original distance  
4. Return `res`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n, m represent the number of rows and columns of the matrix respectively.
   - Time complexity: O(n*m)
   - Space complexity: O(n*m)

