## 1888. Minimum Number of Flips to Make the Binary String Alternating
🔗 Link: [Minimum Number of Flips to Make the Binary String Alternating](https://leetcode.com/problems/minimum-number-of-flips-to-make-the-binary-string-alternating/description/)  
💡 Difficulty: Medium  
🛠️ Topics: String, Dynamic Programming, Greedy, Sliding Window

You are given a binary string s. You are allowed to perform two types of operations on the string in any sequence:

Type-1: Remove the character at the start of the string s and append it to the end of the string.  
Type-2: Pick any character in s and flip its value, i.e., if its value is '0' it becomes '1' and vice-versa.  
Return the minimum number of type-2 operations you need to perform such that s becomes alternating.  

The string is called alternating if no two adjacent characters are equal.

For example, the strings "010" and "1010" are alternating, while the string "0100" is not.
 
 
Example 1:  

Input: s = "111000"  
Output: 2  
Explanation: Use the first operation two times to make s = "100011".  
Then, use the second operation on the third and sixth elements to make s = "101010".  

Example 2:

Input: s = "010"  
Output: 0  
Explanation: The string is already alternating.

Example 3:  

Input: s = "1110"  
Output: 1  
Explanation: Use the second operation on the second element to make s = "1010".  
 

Constraints:  

1 <= s.length <= 10^5  
s[i] is either '0' or '1'.  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?  
   O(n) in time complexity.
2. Should we try every possible rotation result to get the correct answer?  
   Yes   
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming  
   In this since we need to find out the currect answer in O(n) in time while testing oll possible rotation. I think the feasible way is to use dp to get the current result based
   on the previous one which means we will take only O(1) in time when testing a certain roatation.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Since there are only two possile answers (start by 0 or 1)  and the each time when we rotate the string, most of the remaining part are the same. We can implement the 
dp method by : `newX = y - [if the 0 index char needs to flip or not] + [the incomming char needs to flip or not]  and vise versa` where x, y represent the number of flip operations 
needed to take to transforn the string into the possible two answers respectively.
1. Create and initialize the two possibel answer and its corresponding flip number, `flipNum0` and `flipNum1`
2. Iterate through the array
   - update the corresponding flip numbers, `flipNum0` and `flipNum1`
3. Iterate through the array
   - `newflipNum0` = `flipNum1` and `newflipNum1` = `flipNum0`
   - if the 0 index char needs to flip, --newflipNum0/ --newflipNum1
   - if the incomming char needs to flip, ++newflipNum0/ ++newflipNum1
   - update `flipNum0` and `flipNum1`
5. Return the minimum value of `flipNum0` and `flipNum1` during the iteration

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

