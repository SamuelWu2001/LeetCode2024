## 1310. XOR Queries of a Subarray
🔗 Link: [XOR Queries of a Subarray](https://leetcode.com/problems/xor-queries-of-a-subarray/description/?envType=daily-question&envId=2024-09-13)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Bit Manipulation, Prefix Sum  

You are given an array arr of positive integers. You are also given the array queries where queries[i] = [lefti, righti].

For each query i compute the XOR of elements from lefti to righti (that is, arr[lefti] XOR arr[lefti + 1] XOR ... XOR arr[righti] ).

Return an array answer where answer[i] is the answer to the ith query.

 

Example 1:

Input: arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]  
Output: [2,7,14,8]   
Explanation:   
The binary representation of the elements in the array are:  
1 = 0001  
3 = 0011  
4 = 0100   
8 = 1000   
The XOR values for queries are:  
[0,1] = 1 xor 3 = 2   
[1,2] = 3 xor 4 = 7   
[0,3] = 1 xor 3 xor 4 xor 8 = 14   
[3,3] = 8  

Example 2:  

Input: arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]  
Output: [8,0,4,4]  
 

Constraints:

1 <= arr.length, queries.length <= 3 * 10^4  
1 <= arr[i] <= 10^9  
queries[i].length == 2  
0 <= lefti <= righti < arr.length  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Prefix Sum  
   In this case, we can first build an array p where p[i] is the xor result for 0index to i-th element. And base on the feature that when a number xor
   for twice the result will be the same as not xor. Thus, query[i, j] will be p[j] xor p[i-1]. 
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Same as above section

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of items in the array and m represents the number of queries.
   - Time complexity: O(n+m)
   - Space complexity: O(n+m)

