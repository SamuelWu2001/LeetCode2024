## 79. Word Search
🔗 Link: [Word Search](https://leetcode.com/problems/word-search/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, String, Backtracking, Matrix 

Given an m x n grid of characters board and a string word, return true if word exists in the grid.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

 

Example 1:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/759b6ba4-52e9-44ac-9d59-82d89ad47199)

Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
Output: true

Example 2:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/752b25f4-9a09-4f92-b876-94ad708384d8)

Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "SEE"
Output: true

Example 3:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/13159efa-3569-431a-b146-4fd09aefd327)

Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCB"
Output: false
 

Constraints:

m == board.length
n = board[i].length
1 <= m, n <= 6
1 <= word.length <= 15
board and word consists of only lowercase and uppercase English letters.
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the `word` or `board` be empty?  
   No
2. Any requirement on time/space complexity?  
3. Is it possible that the length of  `word` is longer than the number of elements in `board` ?  
   Yes
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Backtracking (dfs)  
   The backtracking algorithm can effectively solve Constraint Satisfaction Problems by finding all possible solutions or one solution that meets all given constraints. Through pruning,
   the backtracking algorithm can quickly eliminate combinations that do not meet certain conditions, avoiding unnecessary computations.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create a pointer `current` to search the 2d `board` in DFS. If there are no matching adjacent elements then backtrack to explore other possible combinations. Otherwise when
the entire `word` has been traversed, return True.
1. Main function
   - traverse through the entire 2d `board`
     - if the visited element matches the first character of the `word`, call  `wordSearch` to find the possible qualified combinations
2. Helper function -- wordSearch
   - Create the `current` point and initialize it
   - Find whether the there exists matched adjacent elements
     - if True, update the `current` pointer and find the next character of `word`
     - Otherwise, backtrack to find other possible answers
   - If we try all possible combinations without finding a valid one, return false

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of rows in 2D-array
2. Assume m represents the number of columns in 2D-array
3. Assume l represents the number of characters in the word
- Time complexity: O(n * m * (3^l)) => First we need to traverse the entire 2d array, which takes O(n*m) in time. And everytime when we visited an element we may need to call the
  helper funciton. As for the helper function, the time complexity should be O(3^l) since we have 3 possible paths while performing DFS and we need to traverse the entire string. 
- Space complexity: O(l) The maximum depth of the recursion stack is the length of the string.

