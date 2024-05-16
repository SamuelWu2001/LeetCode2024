## 424. Longest Repeating Character Replacement
🔗 Link: [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Hash Table, String, Sliding Window

You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

 

Example 1:

Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
Example 2:

Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
There may exists other ways to achieve this answer too.
 

Constraints:

1 <= s.length <= 10^5
s consists of only uppercase English letters.
0 <= k <= s.length

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input be empty?  
   No
2. Are the character case-sensitive?  
   There are only uppercase letters
3. Any requirement on time/space complexity?  
   O(n) in time and O(1) in space
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Sliding Window
   The sliding window algorithm can effectively solve problems requiring finding the specific length of a subsequence in an array or string, while satisfying certain constraints.
2. Hash Table
   Using a hash map to keep track of the frequency of characters of the current window.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: 
1. Create an unordered_map `mp` to record the frequency od characters in the sliding window.
2. Initialize two pointers, left and right, to reoresents the star and the end of the sliding window.
3. Declare variable `maxLength` and `maxChar` to represents the maximum length of the sliding window and the character that appears the most frequently respectively. 
4. Traverse the given string
   - add one to the `mp[str[i]]` and check if `mp[str[i]]` exceeds `mp[maxChar]`
     - if True, update `maxChar`
   - if the length of current windows is bigger than `mp[maxChar]` + k, move the left pointer right until the condition is resolved
     - if the left pointer point to the `maxChar`, update `maxChar`
   - update the `maxLength` 
5. Return `maxLength` 

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
   - Time complexity: O(n) 
   - Space complexity: O(1)

