## 2080. Range Frequency Queries
🔗 Link: [Range Frequency Queries](https://leetcode.com/problems/range-frequency-queries/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Array, Hash Table, Binary Search, Design, Segment Tree 

Design a data structure to find the frequency of a given value in a given subarray.

The frequency of a value in a subarray is the number of occurrences of that value in the subarray.  

Implement the RangeFreqQuery class:  

RangeFreqQuery(int[] arr) Constructs an instance of the class with the given 0-indexed integer array arr.  
int query(int left, int right, int value) Returns the frequency of value in the subarray arr[left...right].  
A subarray is a contiguous sequence of elements within an array. arr[left...right] denotes the subarray that contains the elements of nums between indices left and right (inclusive).

 

Example 1:  
  
Input  
["RangeFreqQuery", "query", "query"]  
[[[12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56]], [1, 2, 4], [0, 11, 33]]  
Output  
[null, 1, 2]  

Explanation
RangeFreqQuery rangeFreqQuery = new RangeFreqQuery([12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56]);  
rangeFreqQuery.query(1, 2, 4); // return 1. The value 4 occurs 1 time in the subarray [33, 4]  
rangeFreqQuery.query(0, 11, 33); // return 2. The value 33 occurs 2 times in the whole array.  
 

Constraints:

1 <= arr.length <= 10^5  
1 <= arr[i], value <= 10^4  
0 <= left <= right < arr.length  
At most 10^5 calls will be made to query  

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Does the input array at least has 2 elements?
   The size of the intput array will at least be 1
3. Is left always smaller than right?
   left is always equal or smaller than right
4. Any requirement on time/space complexity?
### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. HashTable  
   Since the given array is not sorted, and the size and the api calls are both exteremely large, I would like to traverse the entire given array for one time and store the value and
   its corresponding indices into a hashmap where the indices vector are sorted.
2. Binary Search  
   As we said above, since the indices vector are sorted, we can use binary search to get the first element that is bigger or equal to the left boundary and the last element that is
   smaller or equal to the right boundary. And return rightIndex-leftIndex+1 as the result with the time complexity of O(logn).      
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create an unordered_map to store the value and its corresponding indices. And use binary search to find the qualified interval. 
- Construction function
1. Create the unordered_map `map`
2. Iterate the given array and store the data into `map`
- Query
1. find the left and right boundary index
2. Return rightIndex - leftTndex + 1

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

