## 1657. Determine if Two Strings Are Close
🔗 Link: [Determine if Two Strings Are Close](https://leetcode.com/problems/contains-duplicate/)  
💡 Difficulty: Easy  
🛠️ Topics: Array, Sort, Hash  

Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.  
For example, abcde -> aecdb  
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.  
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)   
You can use the operations on either string as many times as necessary.  

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.

 

Example 1:

Input: word1 = "abc", word2 = "bca"  
Output: true  
Explanation: You can attain word2 from word1 in 2 operations.  
Apply Operation 1: "abc" -> "acb"  
Apply Operation 1: "acb" -> "bca"  

Example 2:

Input: word1 = "a", word2 = "aa"  
Output: false  
Explanation: It is impossible to attain word2 from word1, or vice versa, in any number of operations.  

Example 3:

Input: word1 = "cabbba", word2 = "abbccc"  
Output: true  
Explanation: You can attain word2 from word1 in 3 operations.  
Apply Operation 1: "cabbba" -> "caabbb"  
Apply Operation 2: "caabbb" -> "baaccc"  
Apply Operation 2: "baaccc" -> "abbccc"  
 

Constraints:

1 <= word1.length, word2.length <= 10^5  
word1 and word2 contain only lowercase English letters.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Are all the characters the lowercase English letter?  
   Yes
3. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Array  
   In this case since we can do the operation for many times. We can then determine whether two strings are close by checking their composition. To be more specific, the two strings are closed when they contain the exactly same type of characters and the frequency is also the same. Thus, we can use a array to store the frequency of each character and compare them. 

### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Use two array to store the frequency composition of the two given string. Check if the two array have the same composition or not.
1. Create the two arrays
2. Iterate through the two given strings
   - add to the corresponding frequency array
3. Iterate through the array
   - if there is one character appears in array1 yet do not appear in array2, return False
4. Sort the two frequency array
5. If the the two sorted arrays are the same, return True
6. Return False

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
   - Space complexity: O(1)
