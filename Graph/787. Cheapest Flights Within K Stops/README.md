## 787. Cheapest Flights Within K Stops
🔗 Link: [Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Dynamic Programming, Depth-First Search, Breadth-First Search, Graph, Heap (Priority Queue), Shortest Path  


There are n cities connected by some number of flights. You are given an array flights where flights[i] = [fromi, toi, pricei] indicates that there is a flight from city fromi to city toi with cost pricei.

You are also given three integers src, dst, and k, return the cheapest price from src to dst with at most k stops. If there is no such route, return -1.

Example 1:
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/f60217d7-1528-4816-af7c-943a4b51de08)

Input: n = 4, flights = [[0,1,100],[1,2,100],[2,0,100],[1,3,600],[2,3,200]], src = 0, dst = 3, k = 1  
Output: 700  
Explanation:  
The graph is shown above.  
The optimal path with at most 1 stop from city 0 to 3 is marked in red and has cost 100 + 600 = 700.  
Note that the path through cities [0,1,2,3] is cheaper but is invalid because it uses 2 stops.  


Example 2:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/c75e94f0-3701-42dc-accf-ee035b939a1e)

Input: n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 1  
Output: 200  
Explanation:  
The graph is shown above.  
The optimal path with at most 1 stop from city 0 to 2 is marked in red and has cost 100 + 100 = 200.  


Example 3:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/4fe54aeb-5f51-4337-98d6-01431c9cb0c5)

Input: n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 0  
Output: 500  
Explanation:  
The graph is shown above.  
The optimal path with no stops from city 0 to 2 is marked in red and has cost 500.  
 

Constraints:

1 <= n <= 100  
0 <= flights.length <= (n * (n - 1) / 2)  
flights[i].length == 3  
0 <= fromi, toi < n  
fromi != toi  
1 <= pricei <= 10^4  
There will not be any multiple flights between two cities.  
0 <= src, dst, k < n  
src != dst  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. DFS(Backtrack) with Pruning  
   In this case, we can first put all the flights into a hashmap and store the `src` as key and all the flights started from that `src` as the value. After that we can use dfs to find
   all possible ways to get to the `dst` in k stops. However the time complexity would be the O(m^k) where m represents the average flights from a single placean and k represents the
   limit times to stop. To improve this, we can use pruning to eliminate the unnecessary calculations. For example if we got two ways from `node A` to `node B` and the fisrt way has
   fewer stops times with same cost or less cost in same stop times, we can only try the first path without trying the second one. By do so, we can improve the time complexity to
   O(k* m*n) where m represents the average flights for each place and n represents the average number of qualified paths from `src` to a certain place.
2. BFS with Dynamic Programming  
   Again, we can first put all the flights into a hashmap and store the `src` as key and all the flights started from that `src` as the value. After that we use a dp array to store
   the fewest sum of the certain city. And we use BFS to find all possible paths while use dp array to implement pruning. 
4. Dijkstra alg (Priority queue) => tc = O((n+m)log(n))
   
   
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: mentioned above  
1. Create the unordered_map to store all flights
2. Create dp array to store minimum num of each city
3. Create a queue to store {cost, node, steps} and push {0, src ,0} first.
4. BFS (while loop (!queue.empty()))
   - if the `node` == `dst`, continue
   - if the `step` == `k+1`, continue
   - Iterater unordered_map[node] to find all flights start from `node`
     - if newCost < dp[newNode], push {newCost, newNode, step+1}
     - dp[newNode] = newCost
5. return dp[dst]

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume m represents the number of flights and k represent the maximum stop times.
   - Time complexity: O(mk)
   - Space complexity: O(m)

