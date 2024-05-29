## 567. Permutation in String
🔗 Link: [Permutation in String](https://leetcode.com/problems/permutation-in-string/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Hash Table, Two Pointers, String, Sliding Window  

Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 

Constraints:

1 <= s1.length, s2.length <= 10^4
s1 and s2 consist of lowercase English letters.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the given s1 s2 be empty?  
   No
2. Any requirement on time/space complexity?  
   O(n) in time
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Sliding Window  
   The sliding window algorithm can effectively finding the specific subsequence in a string or array while satisfying certain constraints.
2. Hashmap  
   Using two hashmaps to store the elements in s1 and the sliding window can efficiently compare whether two strings are permutations of each other.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Using two indices to represent the range of the sliding window and recording the elements by adding them into a hashmap. Move the sliding window to the right until 
a permutation of s1 is found. Otherwise, return false when the entire s2 is processed.
1. Initialize two indices, `front` and `end`
2. Declare two hashmaps to store the elements of s1 and the sliding window
3. Iterate through s2
   - compare two hashmap
     - if True, return true
     - Otherwise, move the sliding window to the right and update the hashmap
   - return False if the entire s2 is processed   

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n, m represent the length of s1 and s2 respectively.
   - Time complexity: O(max(n,m)) => visit every char of s1 and s2 for one time.
   - Space complexity: O(n) => since we create two hashmaps, each with a maximum size of n.

