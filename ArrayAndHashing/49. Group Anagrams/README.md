## 49. Group Anagrams
🔗 Link: [Group Anagrams](https://leetcode.com/problems/group-anagrams/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Hash Table, String, Sorting

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]
 

Constraints:

1 <= strs.length <= 10^4
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Are "abc" and "cba" considered to be an anagram?  
   Yes
2. So there are no words like "cca"?  
   Yes
3. Is the given array sorted?  
   No
4. Any requirement on time/space complexity?  
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Hash map (unordered_map)
   `unordered_map` is a container that provides a fast lookup mechanism and demonstrates good performance during insertion and deletion operations. In this case,
   we can sort the strings to distinguish whether two words are anagrams. And then store them to the corresponding vector<string> by searching the `unordered_map`.
   Since the time complexity of `unordered_sduring` during lookup is O(1), it is well-suited for this problem.
   
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create an array of `unordered_map` to store the vector<string>. If the current key is already exist, than we add the words to the corresponding vector<string>.
Otherwise, create a new key-value pair to store it. 
1. Create an array of `unordered_map` called `hashmapList`
2. Create an array of string to store anagrams called `anagramList`
3. Iterate through the given array
   - sort the given string and use it as a key to search the hashmapList`
   - if the key already exists, add the string to the corresponding vector<string>
   - Otherwise, create a new key-value pair to store the string
4. Traverse the entire `hashmapList` and add the value to the `anagramList`
4. Return `anagramList`

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of items in the array and m represents the average lenghts of words.
   - Time complexity: O(mlog(m)*n^2)
   - Space complexity: O(n)

