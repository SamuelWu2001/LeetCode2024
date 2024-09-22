## 373. Find K Pairs with Smallest Sums
🔗 Link: [Find K Pairs with Smallest Sums](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Heap (Priority Queue) 

You are given two integer arrays nums1 and nums2 sorted in non-decreasing order and an integer k.

Define a pair (u, v) which consists of one element from the first array and one element from the second array.

Return the k pairs (u1, v1), (u2, v2), ..., (uk, vk) with the smallest sums.

 

Example 1:

Input: nums1 = [1,7,11], nums2 = [2,4,6], k = 3  
Output: [[1,2],[1,4],[1,6]]  
Explanation: The first 3 pairs are returned from the sequence: [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]

Example 2:

Input: nums1 = [1,1,2], nums2 = [1,2,3], k = 2  
Output: [[1,1],[1,1]]  
Explanation: The first 2 pairs are returned from the sequence: [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3]
 

Constraints:

1 <= nums1.length, nums2.length <= 10^5  
-10^9 <= nums1[i], nums2[i] <= 10^9  
nums1 and nums2 both are sorted in non-decreasing order.  
1 <= k <= 10^4  
k <= nums1.length * nums2.length

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Priority Queue  
   We can store the sum into a priority queue and pop out k times to get the answer. The question is how can we avoid pushing all the combinations into the
   priority queue?
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: First pair all the elements in nums1 with the first element in the nums2. And after that everytime we pop out the top element we need to push
x and y+1 into the priority queue to ensure that next smallest combination is in the priotity queue.

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of items in nums1.
   - Time complexity: O(n+k)
   - Space complexity: O(n+k)

