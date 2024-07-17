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
1. Sort  
   We can start from sorting the given array, then check if there are consecutive items with the same value. If there are, we return True; otherwise, we reach the end of the array and return False.
2. Sort the elements of the array in a HashMap or Set  
   We traverse each element in the array and check them before storing in a Set. If the element isn't in the Set,  we add it. If we finish iterating through all elements without any duplicate, we return False. 
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create a Set to store numbers. If the number is already in the Set, return True. Otherwise we reach the end of the array and return False.  
1. Create the Set
2. Iterate through the array
   - check if the number is already in the Set
   - add the number into the Set
3. Return False if we reach the end of the array

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
   - Time complexity: O(nlog(n))
   - Space complexity: O(n)
2. Using an unordered_set, we can optimize the time complexity to O(n).

