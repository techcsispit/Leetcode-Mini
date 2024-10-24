# 1630. Arithmetic Subarrays

## Problem Statement

A sequence of numbers is called arithmetic if it consists of at least two elements, and the difference between every two consecutive elements is the same. More formally, a sequence `s` is arithmetic if and only if `s[i+1] - s[i] == s[1] - s[0]` for all valid `i`.

### Examples of Arithmetic Sequences:

- `1, 3, 5, 7, 9`
- `7, 7, 7, 7`
- `3, -1, -5, -9`

### Example of a Non-Arithmetic Sequence:

- `1, 1, 2, 5, 7`

## Input

You are given an array of `n` integers, `nums`, and two arrays of `m` integers each, `l` and `r`, representing the `m` range queries, where the `i-th` query is the range `[l[i], r[i]]`. All the arrays are 0-indexed.

## Output

Return a list of boolean elements `answer`, where `answer[i]` is `true` if the subarray `nums[l[i]], nums[l[i]+1], ..., nums[r[i]]` can be rearranged to form an arithmetic sequence, and `false` otherwise.

## Solution 
For detailed insights and the complete implementation, you can view the solution [here](https://leetcode.com/problems/arithmetic-subarrays/solutions/5756883/simple-maths-solution-without-sorting-hashing/).

