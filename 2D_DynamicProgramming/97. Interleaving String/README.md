## 97. Interleaving String
🔗 Link: [Interleaving String](https://leetcode.com/problems/interleaving-string/description/)  
💡 Difficulty: Medium  
🛠️ Topics: String, Dynamic Programming

Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2.

An interleaving of two strings s and t is a configuration where s and t are divided into n and m substrings respectively, such that:

s = s1 + s2 + ... + sn  
t = t1 + t2 + ... + tm  
|n - m| <= 1  
The interleaving is s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...  
Note: a + b is the concatenation of strings a and b.  

Example 1:

![image](https://github.com/user-attachments/assets/8751b8d4-fe9a-432e-81f0-34eea6f36c95)

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"  
Output: true  
Explanation: One way to obtain s3 is:  
Split s1 into s1 = "aa" + "bc" + "c", and s2 into s2 = "dbbc" + "a".  
Interleaving the two splits, we get "aa" + "dbbc" + "bc" + "a" + "c" = "aadbbcbcac".  
Since s3 can be obtained by interleaving s1 and s2, we return true.  

Example 2:

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"  
Output: false  
Explanation: Notice how it is impossible to interleave s2 with any other string to obtain s3.

Example 3:

Input: s1 = "", s2 = "", s3 = ""  
Output: true  
 

Constraints:

0 <= s1.length, s2.length <= 100  
0 <= s3.length <= 200  
s1, s2, and s3 consist of lowercase English letters.
 

Follow up: Could you solve it using only O(s2.length) additional memory space?

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic programming
   Use two unorderedmap to store the qualified index of n and n-1;  
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
1. Assume n and m represent the size of s1 and s2, repectively.
   - Time complexity: O(min(n, m)*(n+m))
   - Space complexity: O(min(n, m))

