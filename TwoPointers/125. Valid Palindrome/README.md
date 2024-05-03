## 125. Valid Palindrome
🔗 Link: [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)  
💡 Difficulty: Easy  
🛠️ Topics: Two Pointers, String  

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

Example 3:
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters. Since an empty string reads the same forward and backward, it is a palindrome.

Constraints:
1 <= s.length <= 2 * 10^5
s consists only of printable ASCII characters.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input string be empty?
   - Yes, and the result should be true.
2. Any requirement on time/space complexity?
   - Solve O(1) in space complexity.
3. Dose removing all non-alphanumeric characters means only ASCII character should be considered?
   - Yes
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Left and Right pointer  
   We can create two pointers pointing to the begining and the end of the string respectively and move them toward the center in sequence. If the two pointers point to valid but different elements,
   we return False. This way, no additional storage space is needed.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.
General Idea: Start traversing from both ends of the input string toward the center, and we expect to see the same characters in the same order.
1. Create two pointers,'left' and 'right', and point them to both ends of the input string.
2. Move 'left' pointer to right until it points to the valid element. Similarly, move 'right' pointer to left until it points to the valid element.
3. Check if the two elements pointed by left and right pointers are the same:
   - if they are the same, continue with step 2
   - if they are different, return False
4. After the loop finished, which means 'left' pointer exceeds 'right' pointer, the string is condsidered a palindrome. Therefore, return True.

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of the input string.
   - Time complexity: O(n)
   - Space complexity: O(1)

