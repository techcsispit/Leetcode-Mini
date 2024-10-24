# Problem Statement

You have an array `arr` of length `n`, defined by the formula:

\[ \text{arr}[i] = (2 \cdot i) + 1 \quad \text{for all valid values of } i \quad (0 \leq i < n) \]

## Operations

In one operation, you can perform the following:
- Select two indices \( x \) and \( y \) where \( 0 \leq x, y < n \)
- Subtract 1 from `arr[x]` and add 1 to `arr[y]`:
  \[
  \text{arr}[x] -= 1 \quad \text{and} \quad \text{arr}[y] += 1
  \]

## Objective

The goal is to make all elements of the array equal using the fewest number of operations.

## Constraints

- It is guaranteed that all elements of the array can be made equal using some operations.

## Input

- An integer \( n \), representing the length of the array.

## Output

- Return the minimum number of operations needed to make all elements of `arr` equal.

## Example

### Input
