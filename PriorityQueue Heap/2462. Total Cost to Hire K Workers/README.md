## 2462. Total Cost to Hire K Workers
🔗 Link: [Total Cost to Hire K Workers](https://leetcode.com/problems/total-cost-to-hire-k-workers/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Two Pointers, Heap (Priority Queue), Simulation

You are given a 0-indexed integer array costs where costs[i] is the cost of hiring the ith worker.

You are also given two integers k and candidates. We want to hire exactly k workers according to the following rules:

You will run k sessions and hire exactly one worker in each session.  
In each hiring session, choose the worker with the lowest cost from either the first candidates workers or the last candidates workers. Break the tie by the smallest index.  
For example, if costs = [3,2,7,7,1,2] and candidates = 2, then in the first hiring session, we will choose the 4th worker because they have the lowest cost [3,2,7,7,1,2].  
In the second hiring session, we will choose 1st worker because they have the same lowest cost as 4th worker but they have the smallest index [3,2,7,7,2]. Please note that the indexing may be changed in the process.  
If there are fewer than candidates workers remaining, choose the worker with the lowest cost among them. Break the tie by the smallest index.  
A worker can only be chosen once.  
Return the total cost to hire exactly k workers.  

 

Example 1:

Input: costs = [17,12,10,2,7,2,11,20,8], k = 3, candidates = 4  
Output: 11  
Explanation: We hire 3 workers in total. The total cost is initially 0.  
- In the first hiring round we choose the worker from [17,12,10,2,7,2,11,20,8]. The lowest cost is 2, and we break the tie by the smallest index, which is 3. The total cost = 0 + 2 = 2.  
- In the second hiring round we choose the worker from [17,12,10,7,2,11,20,8]. The lowest cost is 2 (index 4). The total cost = 2 + 2 = 4.  
- In the third hiring round we choose the worker from [17,12,10,7,11,20,8]. The lowest cost is 7 (index 3). The total cost = 4 + 7 = 11. Notice that the worker with index 3 was common in the first and last four workers.  
The total hiring cost is 11.

Example 2:

Input: costs = [1,2,4,1], k = 3, candidates = 3  
Output: 4  
Explanation: We hire 3 workers in total. The total cost is initially 0.  
- In the first hiring round we choose the worker from [1,2,4,1]. The lowest cost is 1, and we break the tie by the smallest index, which is 0. The total cost = 0 + 1 = 1. Notice that workers with index 1 and 2 are common in the first and last 3 workers.  
- In the second hiring round we choose the worker from [2,4,1]. The lowest cost is 1 (index 2). The total cost = 1 + 1 = 2.  
- In the third hiring round there are less than three candidates. We choose the worker from the remaining workers [2,4]. The lowest cost is 2 (index 0). The total cost = 2 + 2 = 4.  
The total hiring cost is 4.  
 

Constraints:

1 <= costs.length <= 10^5   
1 <= costs[i] <= 10^5  
1 <= k, candidates <= costs.length  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. What is the range of `candidates`?  
   1 <= k, candidates <= costs.length
3. Will K bigger than costs.size()?  
   1 <= k, candidates <= costs.length
5. Any requirement on time/space complexity?  
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Priority Queue  
   In this case, we can use two priority queue to store the left candidates and right candidates respectively and once the pq pop one element we can add a new element if there are unconsidered elements in costs array. 
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

1. Add the first and the last k elements into pqLeft and pqRight respectively
2. Use two pointers to record the current considered elements.
3. Initialize `result` to be 0
4. Iterate for `k` times
   - Add min(pqLeft.top(), pqRight.top()) to `result` and pop it
   - Add the new element to one of the priority queues
   - Update two pointers
5. Return `result`

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
   - Time complexity: O(nlog(n))
   - Space complexity: O(n)

