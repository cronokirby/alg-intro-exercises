## 4.1

#### 1
It will return the largest element in the array, i.e. with the smallest absolute value.


## 4.2

#### 1
$$
S_{1} = 8 - 2 = 6

S_{2} = 1 + 3 = 4

S_{3} = 7 + 5 = 12

S_{4} = 4 - 6 = -2

S_{5} = 1 + 5 = 6

S_{6} = 6 + 2 = 8

S_{7} = 3 - 5 = -2

S_{8} = 4 + 2 = 6

S_{9} = 1 - 7 = -6

S_{10} = 6 + 8 = 14
$$

For the first step.
$$
P_{1} = 1 * 6 = 6

P_{2} = 4 * 2 = 8

P_{3} = 12 * 6 = 72

P_{4} = -2 * 5 = -10

P_{5} = 6 * 8 = 48

P_{6} = -2 * 6 = -12

P_{7} = -6 * 14 = -84
$$

And finally:
$$
C_{11} = 48 - 10 - 8 - 12 = 18

C_{12} = 6 + 8 = 14

C_{21} = 72 - 10 = 62

C_{22} = 48 + 6 - 72 + 84 = 66
$$
Which does match up with what we get doing things by hand.


#### 3
We can add enough zeros to make the matrix have a size that's a power of 2,
without affecting the time complexity.


#### 4
We'd need $k = 3^{lg 7}$, to be able to preserve the complexity of strassen's algorithm.


#### 5
These are all slightly better then using strassen's algorithm.

#### 6
We can split up the multiplication into $k$ blocks of size $n \cross n$, which gives
us a runtime of $\Theta(kn^{lg 7})$. We can't exploit this if we have the reverse
case, so we have a cubic runtime relative to the size of the matrices.

#### 7
Let $x = b(c - d)$ then the real part is $x + d(a + b)$, and the imaginary part is:
$x + c(a - b)$.


## 4.3

#### 1
$$
\begin{aligned}
  T(n) &= T(n - 1) + n\\
  &\leq (n - 1)^2 + n\\
  &= n^2 - n + 1
  &\leq n^2
\end{aligned}
$$

#### 2
$$
\begin{aligned}
  T(n) &= T(\lceil \frac{n}{2} \rceil) + 1
  &\leq c lg(\frac{n}{2}) + 1
  &= c lg(n) - c + 1
  &\leq c lg(n)
\end{aligned}
$$

#### 3
$$
\begin{aligned}
  T(n) &= 2T(n/2) + n
  &\geq 2cn(lg(n) - 1) + n
  &= 2 c n lg(n) + (1 - 2c)n
  &\geq c n lg(n)
\end{aligned}
$$
Note that this require $c$ to be sufficiently small.

#### 4
Using $c(1 + n lg(n))$ solves this problem.

#### 6
$$
\begin{aligned}
  T(n) &= 2T((n / 2) + 17) + n
  &= 2cn lg(n + 34) - 2cn + n
  &\leq 2cn lg(n)
\end{aligned}
$$

#### 7
Substiting, we get $4c (\frac{n}{3})^{log_3 4} + n$. Subtracting away $n$ will give us what
we need.

#### 8
Substituting, we get $n^2 + n$, where we can subtract $n$
once again to get what we need.
