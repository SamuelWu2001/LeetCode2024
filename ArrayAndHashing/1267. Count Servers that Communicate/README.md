## 1267. Count Servers that Communicate
🔗 Link: [Count Servers that Communicate](https://leetcode.com/problems/count-servers-that-communicate/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array

You are given a map of a server center, represented as a m * n integer matrix grid, where 1 means that on that cell there is a server and 0 means that it is no server. Two servers are said to communicate if they are on the same row or on the same column.

Return the number of servers that communicate with any other server.

 

Example 1:

![image](https://github.com/user-attachments/assets/9b276fd5-311e-4fc7-a4d4-7c700e5a26b2)


Input: grid = [[1,0],[0,1]]  
Output: 0  
Explanation: No servers can communicate with others.

Example 2:

![image](https://github.com/user-attachments/assets/b7abcd43-6bef-4ca3-8c3e-ca95ac8cf034)


Input: grid = [[1,0],[1,1]]  
Output: 3  
Explanation: All three servers can communicate with at least one other server.

Example 3:

![image](https://github.com/user-attachments/assets/f2268304-25bc-4e56-97c4-ded083f955e3)


Input: grid = [[1,1,0,0],[0,0,1,0],[0,0,1,0],[0,0,0,1]]  
Output: 4  
Explanation: The two servers in the first row can communicate with each other. The two servers in the third column can communicate with each other. The server at right bottom corner can't communicate with any other server.
 

Constraints:

m == grid.length
n == grid[i].length
1 <= m <= 250
1 <= n <= 250
grid[i][j] == 0 or 1

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Array
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: 

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n and n represent the number of rows and columns repectively.
   - Time complexity: O(n*m)
   - Space complexity: O(n*m)

