## 2326. Spiral Matrix IV
🔗 Link: [Spiral Matrix IV](https://leetcode.com/problems/spiral-matrix-iv/description/?envType=daily-question&envId=2024-09-09)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Linked List, Matrix, Simulation 

You are given two integers m and n, which represent the dimensions of a matrix.

You are also given the head of a linked list of integers.

Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1.

Return the generated matrix.

 

Example 1:

![image](https://github.com/user-attachments/assets/b3ccfe00-d1fe-46a2-9d3a-53906f450678)

Input: m = 3, n = 5, head = [3,0,2,6,8,1,7,9,4,2,5,5,0]  
Output: [[3,0,2,6,8],[5,0,-1,-1,1],[5,2,4,9,7]]  
Explanation: The diagram above shows how the values are printed in the matrix.  
Note that the remaining spaces in the matrix are filled with -1.

Example 2:

![image](https://github.com/user-attachments/assets/d63662e6-2f87-4e6a-aaec-f5a8b36812b3)

Input: m = 1, n = 4, head = [0,1,2]  
Output: [[0,1,2,-1]]  
Explanation: The diagram above shows how the values are printed from left to right in the matrix.  
The last space in the matrix is set to -1.
 

Constraints:

1 <= m, n <= 10^5
1 <= m * n <= 10^5
The number of nodes in the list is in the range [1, m * n].
0 <= Node.val <= 1000

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
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
1. Assume k represents the length of the given linked list. m, n represent the number of columns and rows respectively.
   - Time complexity: O(k)
   - Space complexity: O(n*m)
