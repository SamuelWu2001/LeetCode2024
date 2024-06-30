## 2145. Count the Hidden Sequences
🔗 Link: [Count the Hidden Sequences](https://leetcode.com/problems/count-the-hidden-sequences/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Prefix Sum    

You are given a 0-indexed array of n integers differences, which describes the differences between each pair of consecutive integers of a hidden sequence of length (n + 1). More formally, call the hidden sequence hidden, then we have that differences[i] = hidden[i + 1] - hidden[i].

You are further given two integers lower and upper that describe the inclusive range of values [lower, upper] that the hidden sequence can contain.

For example, given differences = [1, -3, 4], lower = 1, upper = 6, the hidden sequence is a sequence of length 4 whose elements are in between 1 and 6 (inclusive).  
[3, 4, 1, 5] and [4, 5, 2, 6] are possible hidden sequences.  
[5, 6, 3, 7] is not possible since it contains an element greater than 6.  
[1, 2, 3, 4] is not possible since the differences are not correct.  
Return the number of possible hidden sequences there are. If there are no possible sequences, return 0.  

 

Example 1:

Input: differences = [1,-3,4], lower = 1, upper = 6  
Output: 2  
Explanation: The possible hidden sequences are:  
- [3, 4, 1, 5]  
- [4, 5, 2, 6]  
Thus, we return 2.

Example 2:

Input: differences = [3,-4,5,1,-2], lower = -4, upper = 5  
Output: 4   
Explanation: The possible hidden sequences are:  
- [-3, 0, -4, 1, 2, 0]  
- [-2, 1, -3, 2, 3, 1]  
- [-1, 2, -2, 3, 4, 2]  
- [0, 3, -1, 4, 5, 3]  
Thus, we return 4.

Example 3:

Input: differences = [4,-7,2], lower = 3, upper = 6  
Output: 0   
Explanation: There are no possible hidden sequences. Thus, we return 0.  
 

Constraints:

n == differences.length  
1 <= n <= 10^5  
-105 <= differences[i] <= 10^5  
-105 <= lower <= upper <= 10^5  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Will the summary of the differences array exceeds the biggest number that an integer can represent?  
   Yes
3. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Prefix Sum  
   In this case, we can use prefix sum to find out the range of the hidden array and use the result to find out the number of possible qualified combinations.  
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

1. Create a array to store the prefix sum of `difference`
2. Iterate through the prefix sum array to get the max and min value
3. Return (upper-lower +1) - (max-min)

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
   - Time complexity: O(n)
   - Space complexity: O(n)

