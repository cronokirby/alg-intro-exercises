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
  T(n) &= 2T((n / 2) + 17) + n\\
  &= 2cn lg(n + 34) - 2cn + n\\
  &\leq 2cn lg(n)
\end{aligned}
$$

#### 7
Substiting, we get $4c (\frac{n}{3})^{log_3 4} + n$. Subtracting away $n$ will give us what
we need.

#### 8
Substituting, we get $n^2 + n$, where we can subtract $n$
once again to get what we need.


## 4.4

This section is difficult to explore textually, and recursion trees are more of an "art" than a science.
The formal recurrence substitutions were already covered to a certain extent in the previous section.


## 4.5

#### 1
  - a) $$
  \begin{aligned}
    T(n) &= 2T(n / 4) + 1\\
    n^{log_{4} 2} &= \sqrt{n}\\
    1 &= O(n^{\frac{1}{2} - \frac{1}{2}}) \implies T(n) = \Theta(\sqrt{n})
  \end{aligned}
  $$
  - b) $$
  \begin{aligned}
    T(n) &= 2T(n / 4) + \sqrt{n}\\
    T(n) &= \Theta(\sqrt{n} lg n)
  \end{aligned}
  $$
  - c) $$
  \begin{aligned}
    T(n) &= 2T(n/4) + n\\
    n &= \Omega(n^{\frac{1}{2} + \frac{1}{2}})\\
    \frac{n}{2} &= O(n)\\
    T(n) = \Theta(n)
  \end{aligned}
  $$
  - d) $$
  \begin{aligned}
    T(n) = 2T(n / 4) + n^2\\
    T(n) = \Theta(n^2)
  \end{aligned}
  $$

#### 2
For $a = 50$, $log_{4} a > log_{2} 7$, so $a = 49$ is the largest such that
$T(n) = aT(n / 4) + \Theta(n^2) is asymptotically faster than Strassen's algorithm.


#### 3
$$
T(n) = T(n / 2) + \Theta(1)\\
n^{log_{2} 1} = n^0 = 1\\
T(n) = \Theta(lg n)
$$


#### 4
It can't be applied to $T(n) = 4T(n / 2) + n^2 lg n$
since $n^{lg_{2} 4} = n^2$ isn't polynomially smaller than $n^2 lg n$.

We can however provide an upper bound of $O((n lg n)^2)$ using a recursion tree.


## 4.6

#### 3
We want to show that
$a f(n / b) \le c f(n) \implies \exists \epsilon > 0, f(n) = \Omega(n^{lg_{b} a + \epsilon)$.
First assume that the latter is false, and let $f(n) = O(n^{lg_{b} a}).

Then we have:
$$
a (\frac{n}{b})^{lg_{b} a} \le c n^{lg_{b} a}\\
n^{lg_{b} a} \le c n^{lg_{b} a}\\
1 \le c
$$
But, $c < 1$, so we have a contradiction. This means that the implication must be true.


## Problems

#### 1
- a) $$
  T(n) = 2T(n / 2) + n^4\\
  n^{lg_{2} 2} = n\\
  n^4 = \Omega(n^{1 + 3})\\
  \frac{a}{b^4} n^4 \le c n^4\\
  T(n) = \Theta(n^4)
  $$
- b) $$
  T(n) = T(7n / 10) + n\\
  n^{lg_{b} a} = n^0 = 1\\
  n = \Omega(n^{0 + 1})\\
  \frac{a}{b} n \le c n\\
  T(n) = \Theta(n)
  $$
- c) $$
  T(n) = 16 T(n / 4) + n^2\\
  n^{lg_{4} 16} = n^2\\
  T(n) = \Theta(n^2 lg n)
  $$
- d) $$
  T(n) = 7T(n / 3) + n^2\\
  n^{lg_{3} 7} = \approx n^{1.77}\\
  \frac{7}{9} n^2 \le c n^2\\
  n^2 = \Omega(n^{1.77 + \epsilon})\\
  T(n) = \Theta(n^2)
  $$
- e) $$
  7T(n / 2) + n^2\\
  n^{lg_{2} 7} \approx n^{2.8}\\
  n^2 = O(n^{2.8 - \epsilon})\\
  T(n) = \Theta(n^{lg_{2} 7})
  $$
- f) $$
  T(n) = 2 T(n / 4) + \sqrt{n}\\
  T(n) = \Theta(\sqrt{n})\\
  $$
- g) $$
  T(n) = T(n - 2) + n^2 = n^2 + (n - 2)^2 + \cdots\\
  T(n) = \Theta(n^2)
  $$


#### 2
- a) $\Theta(lg n)$, $\Theta(n)$, and $\Theta(n)$.

- b) For merge sort, we have $T(n) = 2 T(n / 2) + n$.
  Adding an extra linear term at each level doesn't actually change anything.

#### 3
- a) $T(n) = 4 T(n / 3) + n lg n \implies T(n) = \Theta(n^{lg_{3} 4})$

- b) $T(n) = 3 T(n / 3) + n lg n \implies T(n) = \Theta(n lg^2 n)$

- c) $T(n) = 4 T(n / 2) + n^2 \sqrt{n} \implies T(n) = \Theta(n^2 \sqrt{n})$

- d) $T(n) = 3T(\frac{n}{3} - 2) + \frac{n}{2} \implies T(n) = \Theta(n lg n)$

- e) $T(n) = 2 T(n / 2) + \frac{n}{lg n} \implies T(n) = \Theta(n)$

- f) $T(n) = T(n / 2) + n lg n \implies T(n) = \Theta(\frac{n}{lg n})$

- g) $T(n) = T(n - 1) + \frac{1}{n} \implies T(n) = \Theta(1)$

- h) $T(n) = T(n - 1) + lg n \implies T(n) = \Theta(lg^2 n)$

- i) $T(n) = T(n - 2) + \frac{1}{lg n} \implies T(n) = \Theta(1)$

