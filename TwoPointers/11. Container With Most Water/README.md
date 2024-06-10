## 11. Container With Most Water
🔗 Link: [Container With Most Water](https://leetcode.com/problems/container-with-most-water/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Two Pointers, Greedy

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.


Example 1:  
![image](https://github.com/SamuelWu2001/LeetCode2024/assets/71746159/c9a60be8-f4f8-4fb4-8d69-6b226517f6e5)  

Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1
 

Constraints:

n == height.length
2 <= n <= 10^5
0 <= height[i] <= 10^4

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Can the input array be empty  
   No
2. Does the number of the area exceed the largest number that an integer can represent?  
   No
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Two Pointers  
   Use two pointers to represent the boundary of the container. We can start from the start and the end of the given array. The question is how to move the pointers so that we can
   find the combination with the maximum area. In this case we can simply move the left pointer to the right if `height[left]` < `height[right]` and vice versa. Since the area of the
   current combination is the largest one while considering taking the pointer with the lower height. To be more specific, we can say that there are no bigger combination in the
   remaining combinations. Thus, we can move the smaller pointer to find other possible bigger combinations.    
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

1. Initialize two pointers, `left` and `right`, where `left` = 0 and `right` = `height.size()`-1
2. Initialize `maxArea` = 0
3. while loop
   - if `left` >= `right` break
   - calculate current area and update the value of `maxArea`
   - if `height[left]` < `height[right]`, `left`++
   - Otherwise `right`++
4. Return `maxArea`

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

