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
**Output**: A sequence of $n$ numbers $C$ encoding the sum of the binary digis contained in $A$ and $B$.