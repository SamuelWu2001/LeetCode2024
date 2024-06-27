## 740. Delete and Earn
🔗 Link: [Delete and Earn](https://leetcode.com/problems/delete-and-earn/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Hash Table, Dynamic Programming  

You are given an integer array nums. You want to maximize the number of points you get by performing the following operation any number of times:  

Pick any nums[i] and delete it to earn nums[i] points. Afterwards, you must delete every element equal to nums[i] - 1 and every element equal to nums[i] + 1.  
Return the maximum number of points you can earn by applying the above operation some number of times.  

Example 1:

Input: nums = [3,4,2]  
Output: 6  
Explanation: You can perform the following operations:  
- Delete 4 to earn 4 points. Consequently, 3 is also deleted. nums = [2].  
- Delete 2 to earn 2 points. nums = [].  
You earn a total of 6 points.  

Example 2:  

Input: nums = [2,2,3,3,3,4]  
Output: 9  
Explanation: You can perform the following operations:  
- Delete a 3 to earn 3 points. All 2's and 4's are also deleted. nums = [3,3].  
- Delete a 3 again to earn 3 points. nums = [3].  
- Delete a 3 once more to earn 3 points. nums = [].  
You earn a total of 9 points.   
 

Constraints:

1 <= nums.length <= 2 * 10^4  
1 <= nums[i] <= 10^4  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. If I pick up 4, can I pick up another 4?  
   Yes
3. Any requirement on time/space complexity?  
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Dynamic Programming   
   Since the problem constraints that if we pick up `n` than we can't pick up `n-1` and `n+1`, I can simply translate the problem to a dp problem where dp[i] represent the maximum
   points we can get while consider taking the value `i` as the biggest number. And we can use the formula `dp[n] = max(dp[n-2], dp[n-3]) + n*the number of times that n has appeared`
   to complete the entire dp array.
3. HashTable  
   In order to get the times for a certain value has appeared, we can traverse the given array and store the value and its corresponding appeared times into a hashmap.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create a Set to store numbers. If the number is already in the Set, return True. Otherwise we reach the end of the array and return False.  
1. Create the unordered_map `map` and a the dp array with the size of 10^4+1
2. Iterate through the array
   - `map[arr[i]]` += 1
3. Initialize dp[0] = 0, dp[1] = map[1], dp[2] = map[2]*2
4. Iterate through the dp array
   - dp[n] = max(dp[n-2], dp[n-3]) + n*map[n]
3. Return max(dp[10^4], dp[10^4-1])
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
   - Space complexity: O(1)

