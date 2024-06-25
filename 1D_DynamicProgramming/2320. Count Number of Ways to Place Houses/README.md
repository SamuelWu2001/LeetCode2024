## 2320. Count Number of Ways to Place Houses
🔗 Link: [Count Number of Ways to Place Houses](https://leetcode.com/problems/count-number-of-ways-to-place-houses/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Dynamic Programming  

There is a street with n * 2 plots, where there are n plots on each side of the street. The plots on each side are numbered from 1 to n. On each plot, a house can be placed.

Return the number of ways houses can be placed such that no two houses are adjacent to each other on the same side of the street. Since the answer may be very large, return it modulo 109 + 7.

Note that if a house is placed on the ith plot on one side of the street, a house can also be placed on the ith plot on the other side of the street.

 

Example 1:

Input: n = 1  
Output: 4  
Explanation:   
Possible arrangements:
1. All plots are empty.
2. A house is placed on one side of the street.
3. A house is placed on the other side of the street.
4. Two houses are placed, one on each side of the street.


Example 2:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/b5681aa5-99e1-4cea-86b6-8a465353880f)

Input: n = 2  
Output: 9  
Explanation: The 9 possible arrangements are shown in the diagram above.  
 

Constraints: 

1 <= n <= 10^4

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming  
   In this case, we can simply focus on the newest space in one side. To be more specific, if the index i-1 is 0 then we can put 0 or 1 in index i, if i-1 is 1 then we can only put 1
   instead and since the two side of the street is independent so we can just addres one side and return the square value of it.  
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create two variable to store the qualified combinations consider taking 0 and 1 as the last one respectively. Iterate for n times to update the two variables. 
1. Initialize `end0` and `end1` with 1
2. Iterate from 2 to n
   - new end1 = end0
   - new end0 = end1 + end0
3. Return (end0+end1)^2 

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. n represents the given number
   - Time complexity: O(n)
   - Space complexity: O(1)

