## 72. Edit Distance
🔗 Link: [Edit Distance](https://leetcode.com/problems/edit-distance/description/)  
💡 Difficulty: Medium  
🛠️ Topics: String, Dynamic Programming 

Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

You have the following three operations permitted on a word:

Insert a character  
Delete a character  
Replace a character  
 

Example 1:

Input: word1 = "horse", word2 = "ros"  
Output: 3  
Explanation:   
horse -> rorse (replace 'h' with 'r')  
rorse -> rose (remove 'r')  
rose -> ros (remove 'e')

Example 2:

Input: word1 = "intention", word2 = "execution"  
Output: 5  
Explanation:   
intention -> inention (remove 't')  
inention -> enention (replace 'i' with 'e')  
enention -> exention (replace 'n' with 'x')  
exention -> exection (replace 'n' with 'c')  
exection -> execution (insert 'u')
 

Constraints:

0 <= word1.length, word2.length <= 500  
word1 and word2 consist of lowercase English letters.
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming  
   dp[i][j] represents the number of stpes needed to transfer pre i index of word1 into pre j index of word2
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea:   
rules:  
if word1[i-1] == word2[j-1]   
    dp[i][j] == dp[i-1][j-1]  
else there are candidate values  
    1. dp[i-1][j-1] + 1 // replace  
    2. dp[i-1][j] + 1 // delete  
    3. dp[i][j-1] + 1 // insertion  
    take the small one  
    

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n, m represent the size of word1 and word2 repectively.
   - Time complexity: O(n*m)
   - Space complexity: O(n*m)

