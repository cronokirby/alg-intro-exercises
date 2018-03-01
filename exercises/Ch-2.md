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