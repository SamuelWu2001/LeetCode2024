## 1054. Distant Barcodes
🔗 Link: [Distant Barcodes](https://leetcode.com/problems/contains-duplicate/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Hash Table, Greedy, Sorting, Heap (Priority Queue), Counting

In a warehouse, there is a row of barcodes, where the ith barcode is barcodes[i].

Rearrange the barcodes so that no two adjacent barcodes are equal. You may return any answer, and it is guaranteed an answer exists.

Example 1:

Input: barcodes = [1,1,1,2,2,2]  
Output: [2,1,2,1,2,1]  

Example 2:

Input: barcodes = [1,1,1,1,2,2,3,3]  
Output: [1,3,1,3,1,2,1,2]  
 

Constraints:

1 <= barcodes.length <= 10000  
1 <= barcodes[i] <= 10000  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Priority Queue  
   In this case, the most secure way is to take the barcode with the most amount among the available barcodes. Thus, it is appropriate to use priority queue to store the barcodes and its
   corresponding amount and take the top element as the incoming barcode.
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Store the barcode and its corresponding amount into the priority queue. And use another variable to store the previous barcode. If the top element of the priority queue has the
same barcode as the previous one, then we take the second top element as the incoming barcode.
1. Iterate through the given array and store the barcode and its corresponding frequency into a hashmap
2. Stroe the items of the hashmap into a priority queue sorted by the frequcy value 
3. While the priority queue is not empty
   - check if the barcode of the top element is the same as the previos barcode
     - if True, pop out and take the second one
     - else add the current barcode into `res`
   - minus one to the frequency of the taken barcode
     - if the frequency == 0, remove the pair from the priority queue
   - update the previos barcode
4. Return `res`

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

