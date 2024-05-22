## 139. Word Break
🔗 Link: [Word Break](https://leetcode.com/problems/word-break/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Hash Table, String, Dynamic Programming, Trie, Memoization

Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.

Note that the same word in the dictionary may be reused multiple times in the segmentation.

 

Example 1:

Input: s = "leetcode", wordDict = ["leet","code"]
Output: true
Explanation: Return true because "leetcode" can be segmented as "leet code".
Example 2:

Input: s = "applepenapple", wordDict = ["apple","pen"]
Output: true
Explanation: Return true because "applepenapple" can be segmented as "apple pen apple".
Note that you are allowed to reuse a dictionary word.
Example 3:

Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
Output: false
 

Constraints:

1 <= s.length <= 300
1 <= wordDict.length <= 1000
1 <= wordDict[i].length <= 20
s and wordDict[i] consist of only lowercase English letters.
All the strings of wordDict are unique.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
   O(n^3) in time and O(n) in space.
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Backtracking
   Backtracking algorithms can use pruning to quickly eliminate the combination that do not meet certain conditions. However, when the search space is extremely large, the backtrack
   algorithm may not be efficient enough.
2. Dynamic Programming
   Dynamic programming is a method for solving complex problems by breaking them down into smaller subproblems. In this case we can define a dp array where dp[i] represents the
   substring from the first character to i-th character can be segmented by the words in the dictionary. By defining the subproblems in this way, we can eventually solve the
   initial complex problem. 
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create the dp array where dp[i] represents whether the substring from the first character to i-th character can be segmented by the words in the dictionary. Use the 
formula `dp[i] = true when s[k+1:i] is in the dictionary and dp[k] is true where k < i` to complete the entire dp array.
1. Create the dp array
2. Iterate through the string (i)
   - Iterate through the dp array (k)
     - if dp[k] is true and str[k+1,i] is in the dictionary, then dp[i] is true
   - otherwise, dp[i] is false
3. Return dp.back()

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of the given string.
   - Time complexity: O(n^2)
   - Space complexity: O(n)

