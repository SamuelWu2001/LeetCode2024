## 875. Koko Eating Bananas
🔗 Link: [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Binary Search 

Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

 

Example 1:

Input: piles = [3,6,7,11], h = 8  
Output: 4

Example 2:

Input: piles = [30,11,23,4,20], h = 5  
Output: 30

Example 3:

Input: piles = [30,11,23,4,20], h = 6  
Output: 23
 

Constraints:

1 <= piles.length <= 10^4    
piles.length <= h <= 10^9  
1 <= piles[i] <= 10^9  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. What is the range of the length of the given array?  
   1 ~ 10^9
3. Will h always >= piles.size()?  
   Yes, which means there will always be an valid answer.
5. Any requirement on time/space complexity?  
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Binary Search  
   In this case, the most intuitive way is to test everynumber for 1 to 10^9 and each number, we go through the given array to test if the number is qualified. Once the number is valid
   we pop out the for loop and return the answer. However, this approach needs O(n*m) in time where n represents the length of the given array and m represents the range of the element.
   To improve it, we can use binary search to find out the minimum valid number and the time complexity will be imporve to O(m*log(n)).
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create two variables `left` and `right` to implement binary search.  
1. Create the `left` and `right`
2. While (left < right)
   - `mid` = `left` + `(right -left)/2`
   - iterate through the given array and return whether `mid` is valid
     - if `mid` is not valid, `left` = `mid` + 1
     - else `right` = `mid` 
3. return `left`

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
   - Time complexity: O(log(n))
   - Space complexity: O(1)

