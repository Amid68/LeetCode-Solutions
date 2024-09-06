# 26. Remove Duplicates from Sorted Array

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates **in-place** so that each unique element appears only once. The relative order of the elements must be kept the same. Then, return the number of unique elements in `nums`.

### Consider the following:
- Let the number of unique elements in `nums` be `k`.
- To get accepted, you must:
  1. Modify the array `nums` such that the first `k` elements contain the unique elements in the same order they originally appeared in `nums`.
  2. Ignore the values beyond the first `k` elements; they don't matter.
  3. Return `k`.

### Custom Judge:

The judge will validate your solution with the following code:

```c
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected correct answer with its length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, your solution will be accepted.

### Example 1:

**Input:** `nums = [1,1,2]`  
**Output:** `2, nums = [1,2,_]`  
**Explanation:** Your function should return `k = 2`, with the first two elements of `nums` being `1` and `2`. It doesn't matter what values appear after `k` (indicated by underscores).

### Example 2:

**Input:** `nums = [0,0,1,1,1,2,2,3,3,4]`  
**Output:** `5, nums = [0,1,2,3,4,_,_,_,_,_]`  
**Explanation:** Your function should return `k = 5`, with the first five elements of `nums` being `0, 1, 2, 3, 4`. The remaining elements don't matter.

### Constraints:
- `1 <= nums.length <= 3 * 10^4`
- `-100 <= nums[i] <= 100`
- The array `nums` is sorted in non-decreasing order.
