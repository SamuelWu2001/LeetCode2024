## 3152. Special Array II
🔗 Link: [Special Array II](https://leetcode.com/problems/special-array-ii/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Binary Search, Prefix Sum

An array is considered special if every pair of its adjacent elements contains two numbers with different parity.

You are given an array of integer nums and a 2D integer matrix queries, where for queries[i] = [fromi, toi] your task is to check that subarray nums[fromi..toi] is special or not.

Return an array of booleans answer such that answer[i] is true if nums[fromi..toi] is special.

 

Example 1:

Input: nums = [3,4,1,2,6], queries = [[0,4]]

Output: [false]

Explanation:

The subarray is [3,4,1,2,6]. 2 and 6 are both even.

Example 2:

Input: nums = [4,3,1,6], queries = [[0,2],[2,3]]

Output: [false,true]

Explanation:

The subarray is [4,3,1]. 3 and 1 are both odd. So the answer to this query is false.  
The subarray is [1,6]. There is only one pair: (1,6) and it contains numbers with different parity. So the answer to this query is true.
 

Constraints:

1 <= nums.length <= 10^5  
1 <= nums[i] <= 10^5  
1 <= queries.length <= 105  
queries[i].length == 2  
0 <= queries[i][0] <= queries[i][1] <= nums.length - 1

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can fromi be the same as toi?  
   Yes
3. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Prefix Sum  
   In this case, we can traverse the `nums` array and use another vector to record the number of unqualified pair from the 0index to the current index. And after completing this vector,
    we can easily determine whether a certain subarray is special by doing `record[right] - record[left]` and see if the result is 0. 
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Same as the above section

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the size of `nums` and m represents the number of queries.
   - Time complexity: O(n+m)
   - Space complexity: O(n+m)

