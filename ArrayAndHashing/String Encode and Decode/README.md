## String Encode and Decode
🔗 Link: [String Encode and Decode](https://neetcode.io/problems/string-encode-and-decode)  
💡 Difficulty: Medium  
🛠️ Topics: Array 

Design an algorithm to encode a list of strings to a single string. The encoded string is then decoded back to the original list of strings.

Please implement encode and decode

Example 1:

Input: ["neet","code","love","you"]

Output:["neet","code","love","you"]
Example 2:

Input: ["we","say",":","yes"]

Output: ["we","say",":","yes"]
Constraints:

0 <= strs.length < 100
0 <= strs[i].length < 200
strs[i] contains only UTF-8 characters.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Is there a special character that is not belong to UTF-8 characters so that I can use it as a saparate tool?  
   You may assume no
2. Can the input array be empty?  
   Yes
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
   
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Add the length of the string before adding the element, and use a certain character like '#' to saparate the length and the string so that we know the correct length when
the length is in double digits or more.
1. Encoder
  - Iterate through the input array 
    - get the length of the current string and transform into string
    - add the length, special character # and the string into `encoded_string` in order 
2. Decoder
  - Traverse `encoded_string`
    - find the '#' characte and transformer former substring in to integer `length`
    - add the next `length` character into `result`
  - return `result` 

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
  - Encoder
    - Time complexity: O(n)
    - Space complexity: O(n)
  - Decoder
    - Time complexity: O(n)
    - Space complexity: O(n)

