## 131. Palindrome Partitioning
🔗 Link: [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/description/)  
💡 Difficulty: Medium  
🛠️ Topics: String, Dynamic Programming, Backtracking 

Given a string s, partition s such that every 
substring
 of the partition is a 
palindrome
. Return all possible palindrome partitioning of s.

 

Example 1:

Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]
Example 2:

Input: s = "a"
Output: [["a"]]
 

Constraints:

1 <= s.length <= 16
s contains only lowercase English letters.
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input string be empty?  
   No
2. Are all characters in the given string involved?  
   Yes
3. What is the maximum length of the given string?  
   16
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Backtracking  
   The backtracking algorithm is suitable for subset-related problems since it can traverse every possible subset and using pruning to quickly eliminate unqualified combinations.
   However, it suffers from exponential time complexity and recursion stack overflow issues when the data is extremely large. In this case, since the maximum length of the given string is only 16, I believe the backtrack method is appropiate.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Use Backtrack(DFS) to traverse every possible combination and use two pointers to evaluate whether the substring is palindrome.
1. Main function (backtracking)
   - recursion
     - iterate through the given string
       - update the `current` substring
       - call helper function to evaluate whether the `current` substring is palindrome
       - if True, add the `current` substring to the `validPartition` and call recursion function with remaning substring
       - otherwise, continue
     - if the entire input string has been processed add the `validPartition` to the final result
2. Helper function (evaluate)
   - create and initialize left and right pointers
   - start from the both sides of the substring and move inwards
    - if the characters pointed by left and right pointers are different, return False
    - return True if the left pointer exceeds the right pointer 

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.

- Using a hashmap to store the results of evaluating substrings can prevent redundant calculations.
