## 1514. Path with Maximum Probability
🔗 Link: [Path with Maximum Probability](https://leetcode.com/problems/path-with-maximum-probability/description/?envType=daily-question&envId=2024-08-27)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Graph, Heap (Priority Queue), Shortest Path 

You are given an undirected weighted graph of n nodes (0-indexed), represented by an edge list where edges[i] = [a, b] is an undirected edge connecting the nodes a and b with a probability of success of traversing that edge succProb[i].

Given two nodes start and end, find the path with the maximum probability of success to go from start to end and return its success probability.

If there is no path from start to end, return 0. Your answer will be accepted if it differs from the correct answer by at most 1e-5.

 

Example 1:

![image](https://github.com/user-attachments/assets/9554745d-e8c2-4595-b48f-298c2b122076)


Input: n = 3, edges = [[0,1],[1,2],[0,2]], succProb = [0.5,0.5,0.2], start = 0, end = 2  
Output: 0.25000  
Explanation: There are two paths from start to end, one having a probability of success = 0.2 and the other has 0.5 * 0.5 = 0.25.

Example 2:

![image](https://github.com/user-attachments/assets/aaed3f0a-23da-4e07-b777-7db7e3ff575a)

Input: n = 3, edges = [[0,1],[1,2],[0,2]], succProb = [0.5,0.5,0.3], start = 0, end = 2  
Output: 0.30000  

Example 3:

![image](https://github.com/user-attachments/assets/b635dd33-eff2-4275-87c6-ce1a742cfec6)

Input: n = 3, edges = [[0,1]], succProb = [0.5], start = 0, end = 2  
Output: 0.00000  
Explanation: There is no path between 0 and 2.  
 

Constraints:

2 <= n <= 10^4  
0 <= start, end < n  
start != end  
0 <= a, b < n  
a != b  
0 <= succProb.length == edges.length <= 2*10^4  
0 <= succProb[i] <= 1  
There is at most one edge between every two nodes.  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dijkstra algo  
   Using a priority queue to store the node and its corresponding maximum probability. It will take O((V+E)*log(E)) in time to complete the shortest path map.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Build an adajacent map first and then use priority queue to traveerse the whole graph.

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume V represents the number of nodes and E represents the number of edges
   - Time complexity: O((V+E)*log(V))
   - Space complexity: O(V+E)

