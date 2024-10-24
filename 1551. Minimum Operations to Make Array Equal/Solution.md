# Intuition

The goal is to make each element in the array equal with the minimum number of operations. We select a target value that is close to all elements. The target is the average value of the array, calculated as:

\[
\text{target} = \frac{\sum_{i=0}^{n-1} (2i + 1)}{n}
\]

### Calculation of Target

Calculating the sum:

\[
\sum_{i=0}^{n-1} (2i + 1) = \sum_{i=0}^{n-1} 2i + \sum_{i=0}^{n-1} 1
\]

This expands to:

\[
= 2 \sum_{i=0}^{n-1} i + n
\]

Using the formula for the sum of the first \(n-1\) integers:

\[
\sum_{i=0}^{n-1} i = \frac{(n-1)n}{2}
\]

Substituting this back gives:

\[
= 2 \cdot \frac{(n-1)n}{2} + n = (n-1)n + n = n^2
\]

So, the target becomes:

\[
\text{target} = \frac{n^2}{n} = n
\]

### Total Change Calculation

Now, we calculate the total change required:

\[
S = \sum_{i=0}^{2n-1} (2i + 1 - n) + \sum_{i=0}^{2n-1} (n - 2i - 1)
\]

**Breaking Down \(S_1\)**:

\[
S_1 = \sum_{i=0}^{2n-1} (2i + 1 - n) = \sum_{i=0}^{2n-1} (2i + 1) - n(2n)
\]

Calculating:

\[
\sum_{i=0}^{2n-1} (2i + 1) = 2\sum_{i=0}^{2n-1} i + \sum_{i=0}^{2n-1} 1
\]

Using the sum formulas:

\[
\sum_{i=0}^{2n-1} i = \frac{(2n-1)(2n)}{2} = n(2n - 1)
\]

So,

\[
\sum_{i=0}^{2n-1} (2i + 1) = 4n^2 - 2n + 2
\]

Thus:

\[
S_1 = 4n^2 - 2n + 2 - 2n^2 = 2n^2 + 2 - 2n
\]

**Breaking Down \(S_2\)**:

\[
S_2 = \sum_{i=0}^{2n-1} (n - 2i - 1)
\]

Calculating:

\[
S_2 = n(2n) - 2\sum_{i=0}^{2n-1} i - (2n)
\]

This gives:

\[
S_2 = n(2n) - 2n(n - 1) - (2n) = 2n^2 - 2(n - 1) = 2n^2 + 2n - 2
\]

### Final Calculation

Combining \(S_1\) and \(S_2\):

\[
S = S_1 + S_2 = (2n^2 + 2 - 2n) + (2n^2 + 2n - 2)
\]

This results in:

\[
S = 4n^2 - 1
\]

Since each operation modifies two elements, the final answer for the number of operations needed is:

\[
\text{Minimum operations} = 4n^2 - 1
\]

## Complexity

- **Time Complexity**: \(O(1)\)
- **Space Complexity**: \(O(1)\)
