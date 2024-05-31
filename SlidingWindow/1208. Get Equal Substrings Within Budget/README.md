## 1208. Get Equal Substrings Within Budget
🔗 Link: [Get Equal Substrings Within Budget](https://leetcode.com/problems/get-equal-substrings-within-budget/description/)  
💡 Difficulty: Medium  
🛠️ Topics: String, Binary Search, Sliding Window, Prefix Sum

You are given two strings s and t of the same length and an integer maxCost.

You want to change s to t. Changing the ith character of s to ith character of t costs |s[i] - t[i]| (i.e., the absolute difference between the ASCII values of the characters).

Return the maximum length of a substring of s that can be changed to be the same as the corresponding substring of t with a cost less than or equal to maxCost. If there is no substring from s that can be changed to its corresponding substring from t, return 0.

 

Example 1:

Input: s = "abcd", t = "bcdf", maxCost = 3
Output: 3
Explanation: "abc" of s can change to "bcd".
That costs 3, so the maximum length is 3.
Example 2:

Input: s = "abcd", t = "cdef", maxCost = 3
Output: 1
Explanation: Each character in s costs 2 to change to character in t,  so the maximum length is 1.
Example 3:

Input: s = "abcd", t = "acde", maxCost = 0
Output: 1
Explanation: You cannot make any change, so the maximum length is 1.
 

Constraints:

1 <= s.length <= 10^5
t.length == s.length
0 <= maxCost <= 10^6
s and t consist of only lowercase English letters.
## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the given strings be empty?  
   No
3. Any requirement on time/space complexity?  
   O(n) in time
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Sliding Window  
   We can travese both the string s and string t first and create a vector `distance` to store the distance of the corresponding two nodes. And use two indices to represents the range of a sliding window. Go through `distance` and record the maximum length of the qualified sliding window.    
## Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

1. Create the vector `distanece`
2. Iterate through the given strings
   - store abs(s[i]-t[i]) 
3. Initialize two indices, `front` and `end`, and  `maxLength`
4. while loop to traverse `distance` with the sliding window
   - move `end` to the right
   - if the sum of the sliding window are bigger than `maxCount`
     - move `front` right until the sum is equal or smaller than `maxCount`
   - upadate `maxLength`
5. return `maxLength` 

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

