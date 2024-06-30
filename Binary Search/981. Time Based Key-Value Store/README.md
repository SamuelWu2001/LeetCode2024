## 981. Time Based Key-Value Store
🔗 Link: [Time Based Key-Value Store](https://leetcode.com/problems/time-based-key-value-store/description/)  
💡 Difficulty: Medium  
🛠️ Topics: Hash Table, String, Binary Search, Design

Design a time-based key-value data structure that can store multiple values for the same key at different time stamps and retrieve the key's value at a certain timestamp.

Implement the TimeMap class:

TimeMap() Initializes the object of the data structure.  
void set(String key, String value, int timestamp) Stores the key key with the value value at the given time timestamp.  
String get(String key, int timestamp) Returns a value such that set was called previously, with timestamp_prev <= timestamp. If there are multiple such values, it returns the value associated with the largest timestamp_prev. If there are no values, it returns "".
 

Example 1:

Input  
["TimeMap", "set", "get", "get", "set", "get", "get"]  
[[], ["foo", "bar", 1], ["foo", 1], ["foo", 3], ["foo", "bar2", 4], ["foo", 4], ["foo", 5]]  
Output  
[null, null, "bar", "bar", null, "bar2", "bar2"]  

Explanation  
TimeMap timeMap = new TimeMap();  
timeMap.set("foo", "bar", 1);  // store the key "foo" and value "bar" along with timestamp = 1.  
timeMap.get("foo", 1);         // return "bar"  
timeMap.get("foo", 3);         // return "bar", since there is no value corresponding to foo at timestamp 3 and timestamp 2, then the only value is at timestamp 1 is "bar".  
timeMap.set("foo", "bar2", 4); // store the key "foo" and value "bar2" along with timestamp = 4.  
timeMap.get("foo", 4);         // return "bar2"  
timeMap.get("foo", 5);         // return "bar2"  
 

Constraints:

1 <= key.length, value.length <= 100  
key and value consist of lowercase English letters and digits.  
1 <= timestamp <= 10^7  
All the timestamps timestamp of set are strictly increasing.  
At most 2 * 10^5 calls will be made to set and get.

## UMPIRE Method:

### Understand
> - Ask clarifying questions and use examples to understand what the interviewer wants out of this problem.
> - Choose a “happy path” test input, different than the one provided, and a few edge case inputs.
> - Verify that you and the interviewer are aligned on the expected inputs and outputs.
1. Are there two different values set at the same time with the same key?
   No
3. Are all the "set" operation in chronological order?
   Yes
4. Any requirement on time/space complexity?

### Match
> - See if this problem matches a problem category (e.g. Strings/Arrays) and strategies or patterns within the category.
1. Binary Search  
   In this case, since the number of `set` and `get` operations is exteremely large, I think the best way to reduce runtime is to implement the binary search in the `get` function instead
   of searching the entire vector with O(n) in time where n represents the number of corresponding values of a certain key.      
### Plan
> - Sketch visualizations and write pseudocode.
> - Walk through a high-level implementation with an existing diagram.

General Idea: Create two hashmap to store the key and the timestamp, and implement binary search to find the correct value in O(logn) time.
1. Create two HashMap `map1` and `map2` where `map1` store `{key, vector<timestamp>}` and `map2` store `{key, hashmap<timestamp, value>}`
2. Set (key, value, time)
   - map1[key].push_back(time)
   - map2[key][time] = value
3. Get (key, T)
   - binary search last index `i` which corresponding time is smaller or equal to `T`
   - retrun map2[key][map1[key][i]]

### Implement
> - Implement the solution (make sure to know what level of detail the interviewer wants)  

see solution.cpp
### Review
> - Re-check that your algorithm solves the problem by running through important examples.
> - Go through it as if you are debugging it, assuming there is a bug.
### Evaluate
> - Finish by giving space and run-time complexity.
> - Discuss any pros and cons of the solution.
1. Assume n represents the number of items in the time array of a certain key and m represents the number of keys.
   - Time complexity: O(log(n))
   - Space complexity: O(n*m)

