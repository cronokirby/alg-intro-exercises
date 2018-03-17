## 2.1

#### 3
Either the the array contains $A$, or not. The subarray
$A[i..]$ containing v is an invariant.

$A[i..]$ contains v initially if A does.

If an increment of the loop finds v, the loop terminates,
otherwise, $A[i..]$ still contains v if it is still to be found.

Upon termination of the loop, $A[i..]$ is empty, in line with the fact
that $A$ does not contain v.

So $A[i..]$ containing v (or not) if $A$ does is an invariant.

#### 4
**Input**: A sequence of $n$ numbers $A$ and $B$
**Output**: A sequence of $n$ numbers $C$ encoding the sum of the binary digis contained in $A$ and $B$..


## 2.2

#### 1
$\Theta(n^3)$

#### 2
$A[i..]$ being sorted is a loop invariant.

The complexity is $\Theta(n^2)$ regardless of how sorted the array is.

#### 3
In the worst case, linear search needs to traverse the entire array,
and is thus $\Theta(n)$.
If the element is likely to be in any spot with probability $1/n$, then the expected value of the number of elements we'll need to traverse is $n$,
making the average case $\Theta(n)$

#### 4
We can check if the task has already been done. E.G. if a list has already been sorted, we can just return the list, making the best time less complex.



## 2.3

#### 3
Let $S(k) = T(2^k)$, $S(1) = 2 = k2^k$, $S(k + 1) = 2s(k) + 2^{(k+1)}
  = 2(k2^k) + 2^{(k+1)} = (k + 1)2^{(k + 1)}
$

## Problems

#### 2.1

**a)** worst case is running time for insertion sort is $n^2$, so $k^2$ for our lists. We have $n/k$ lists to sort, which leaves us with $nk$.
**b)** Our tree only has depth $lg(n/k)$, instead of $lg(n)$, which lets us merge in $\Theta(n lg(n/k))$
**c)** With $k = 1$, $\Theta(nk + nlg(n/k))$ becomes $\Theta(n + nlg(n))$
  = $\Theta(nlg(n))$
**d)** We'd have to choose the chunking size via benchmarking of some kind.

#### 2.2

**b)** The array [1..i] is always sorted. Initially it contains one element.
        At every iteration a new element gets added in the right place. When the loop terminates, the entire array is thus sorted.

**d)** $\Theta(n^2)$

#### 2.3
**a)** $\Theta(n)$
**b)** The naive form runs $\Theta(n^2)$, since we need an extra loop to calculate powers of x.
**c)** Initially true because $ y = 0$, if true for $i = m$, will be true
        for $m - 1$, since the new operation tacks on the empty $k = 0$ coefficient, and increases all the old powers by 1.

#### 2.4

**a)** $(8, 6), (8, 1), (6, 1), (2, 1), (3, 1)$
**b)** The elements in order $n..1$, with $n(n-1)/2$ inversions.
**c)** The number of swaps necessary is the number of inversions in the array.
