## 1616. Split Two Strings to Make Palindrome
🔗 Link: [Split Two Strings to Make Palindrome](https://leetcode.com/problems/split-two-strings-to-make-palindrome/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Two Pointers, String 

You are given two strings a and b of the same length. Choose an index and split both strings at the same index, splitting a into two strings: aprefix and asuffix where a = aprefix + asuffix, and splitting b into two strings: bprefix and bsuffix where b = bprefix + bsuffix. Check if aprefix + bsuffix or bprefix + asuffix forms a palindrome.

When you split a string s into sprefix and ssuffix, either ssuffix or sprefix is allowed to be empty. For example, if s = "abc", then "" + "abc", "a" + "bc", "ab" + "c" , and "abc" + "" are valid splits.

Return true if it is possible to form a palindrome string, otherwise return false.

Notice that x + y denotes the concatenation of strings x and y.

 

Example 1:

Input: a = "x", b = "y"  
Output: true  
Explaination: If either a or b are palindromes the answer is true since you can split in the following way:  
aprefix = "", asuffix = "x"  
bprefix = "", bsuffix = "y"  
Then, aprefix + bsuffix = "" + "y" = "y", which is a palindrome.  

Example 2:

Input: a = "xbdef", b = "xecab"  
Output: false  

Example 3:

Input: a = "ulacfd", b = "jizalu"  
Output: true  
Explaination: Split them at index 3:  
aprefix = "ula", asuffix = "cfd"  
bprefix = "jiz", bsuffix = "alu"  
Then, aprefix + bsuffix = "ula" + "alu" = "ulaalu", which is a palindrome.  
 

Constraints:

1 <= a.length, b.length <= 10^5  
a.length == b.length  
a and b consist of lowercase English letters  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Two Pointers  
   We can use two pointers point to the start and the end of the string and move inwards to check if the string is a palindrome.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: First move the two pinters inwards until the elements pointed by the two pointers are different. Then check the lefting part of the two strings if one of them are palindrome. If true, return true, otherwise return false.
1. Create two pointers `l` and `r` and points to the the start of string a and the end of string b respectively  
2. Move the two pointers inward until the elements are different
3. Check if one of the remaining part of string a and string b is palindrome
   - if true, return True
   - else change the role of string a and string b and continue on step 2
5. Return False 

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of items in the array.
   - Time complexity: O(n)
   - Space complexity: O(n)

