## 1371. Find the Longest Substring Containing Vowels in Even Counts
🔗 Link: [Find the Longest Substring Containing Vowels in Even Counts](https://leetcode.com/problems/find-the-longest-substring-containing-vowels-in-even-counts/description/)  
💡 Difficulty: Medium    
🛠️ Topics: Hash Table, String, Bit Manipulation, Prefix Sum

Given the string s, return the size of the longest substring containing each vowel an even number of times. That is, 'a', 'e', 'i', 'o', and 'u' must appear an even number of times.

Example 1:

Input: s = "eleetminicoworoep"  
Output: 13  
Explanation: The longest substring is "leetminicowor" which contains two each of the vowels: e, i and o and zero of the vowels: a and u.

Example 2:

Input: s = "leetcodeisgreat"  
Output: 5  
Explanation: The longest substring is "leetc" which contains two e's.  

Example 3:

Input: s = "bcbcbc"  
Output: 6  
Explanation: In this case, the given string "" is the longest because all vowels: a, e, i, o and u appear zero times.
 

Constraints:

1 <= s.length <= 5 x 10^5
s contains only lowercase English letters.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
2. Is the array sorted?
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

