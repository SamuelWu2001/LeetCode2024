## 347. Top K Frequent Elements
🔗 Link: [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Hash Table, Divide and Conquer, Sorting, Heap (Priority Queue), Bucket Sort, Counting, Quickselect


Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order. 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
 

Constraints:

1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4
k is in the range [1, the number of unique elements in the array].
It is guaranteed that the answer is unique.
 

Follow up: Your algorithm's time complexity must be better than O(n log n), where n is the array's size.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input array be empty?  
   No
3. What if there arer two numbers have the same amount?  
   Yes but there will be only one unique answer. 
5. Any requirement on time/space complexity?  
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. HashMap  
   Storing the number and the corresponding frequency into the hashmap. After sorting, we can take the top k frequent numbers. The time complexity would be O(nlog(n)) since we need to
   sort it.
2. Use another HashMap  
   In order to reduce the time complexity, we can create another hashnap to store the frewuency and it's corresponding numbers, the datatype should be <int, vect<int>>. By do so we can
   get the top k frequent numbers without sorting. And the overall time complexity will be O(n).   
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create two HashMap `map<int, int>` and `freqMap<int, vector<int>>`. Traverse the given array first to store the number and its frequency into `map` and also record the top 
frequency. Traverse the `map` and fill in the frequency and its corresponding numbers into `freqMap`. Start from the top frequency and search freqMap to get the top k frequent numbers.
### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the length of the given array.
   - Time complexity: O(n)
   - Space complexity: O(n)

