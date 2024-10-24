# Problem Statement

You have an array `arr` of length `n`, defined by the formula:

`arr[i] = (2 * i) + 1` for all valid values of `i` (0 ≤ i < n)

## Operations

In one operation, you can perform the following:
- Select two indices `x` and `y` where `0 ≤ x, y < n`
- Subtract 1 from `arr[x]` and add 1 to `arr[y]`:
  
  `arr[x] -= 1` and `arr[y] += 1`

## Objective

The goal is to make all elements of the array equal using the fewest number of operations.

## Constraints

- It is guaranteed that all elements of the array can be made equal using some operations.

## Input

- An integer `n`, representing the length of the array.

## Output

- Return the minimum number of operations needed to make all elements of `arr` equal.

## Solution
For detailed insights and the complete implementation, you can view the solution [here](https://leetcode.com/problems/minimum-operations-to-make-array-equal/solutions/5490578/single-line-code-beats-100-in-time/).


