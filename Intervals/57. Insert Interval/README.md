## 57. Insert Interval
🔗 Link: [Insert Interval](https://leetcode.com/problems/insert-interval/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array

You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.

Note that you don't need to modify intervals in-place. You can make a new array and return it.

 

Example 1:

Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]
Example 2:

Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
Output: [[1,2],[3,10],[12,16]]
Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
 

Constraints:

0 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 105
intervals is sorted by starti in ascending order.
newInterval.length == 2
0 <= start <= end <= 105

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Does the newInterval only containsa set of start and end?  
   Yes
3. Any requirement on time/space complexity?  
   You don't need to modify intervals in-place.

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Add the `newInterval` into the `intervals` array and sort it again. Create a new array and traverse the `intervals` array to add the qualified elements into new array. 
1. Add the `newInterval` into the `intervals` array and sort it again
2. Create the `new` array
3. Traverse the `intervals` array
   - compare the `current` interval in the `intervals` array with the `last` interval in the `new` array
   - if the start of the `current` interval is bigger the end of the `last` interval, add the `current` interval into `new` array
   - Otherwise, if the end of the `current` interval is smaller or equal to the end of the `last` interval, continue to step3
   - Otherwise, merge the `curren`t interval with the last interval by assigning the end of the `current` interval to the end of the `last` interval 

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of intervals in the array.
   - Time complexity: O(nlog(n))
   - Space complexity: O(n)

