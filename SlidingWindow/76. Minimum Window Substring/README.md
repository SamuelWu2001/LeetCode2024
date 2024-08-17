## 76. Minimum Window Substring
🔗 Link: [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)  
💡 Difficulty: Hard  
🛠️ Topics: Hash Table, String, Sliding Window

Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

The testcases will be generated such that the answer is unique.

 
Example 1:

Input: s = "ADOBECODEBANC", t = "ABC"  
Output: "BANC"  
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.

Example 2:

Input: s = "a", t = "a"  
Output: "a"  
Explanation: The entire string s is the minimum window.

Example 3:

Input: s = "a", t = "aa"  
Output: ""  
Explanation: Both 'a's from t must be included in the window.  
Since the largest window of s only has one 'a', return empty string.
 

Constraints:

m == s.length  
n == t.length  
1 <= m, n <= 10^5  
s and t consist of uppercase and lowercase English letters.
 

Follow up: Could you find an algorithm that runs in O(m + n) time?
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity? 
2. If there are two 'a' in string t, then the target substring must have at least two 'a'?  
   Yes
4. Is 'A' == 'a'?  
   No, they are different
6. Can string t be empty?  
   No, both string s and string t are not empty.
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Sliding Window  
   Since we want to find the minimum subarray, I bekieve using sliding window with hash table to check the status will be a good choice.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Use two hashmaps to store the character and its frequency of sting t and the substring repectively. And use sliding window to findout the minimum qualified substring.

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of string s and m represents the length of string t.
   - Time complexity: O(m+n)
   - Space complexity: O(1)

