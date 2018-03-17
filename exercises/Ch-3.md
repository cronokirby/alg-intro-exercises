## 3.1

#### 1
Let $f(n)$ and $g(n)$ be nonnegative functions. Let's assume that $f(n) >= g(n)$,
for sufficiently large $n$ (which one we choose doesn't matter, as we will be able
to make the same argument if we choose $g$).

Now, because of the above assumption we know that:
$c_{0}(f(n) + g(n)) \leq max(f(n), g(n)) \leq c_{1}(f(n) + g(n))$ is the same as
$c_{0}(f(n) + g(n)) \leq f(n) \leq c_{1}(f(n) + g(n))$, which we can divide by $f$:
$c_{0}(1 + \frac{g(n)}{f(n)} \leq 1 \leq c_{1}(1 + \frac{g(n)}{f(n)})$, then:
$c_{0} \leq \frac{1}{1 + \frac{g(n)}{f(n)} \leq c_{1}$. The central term is bounded
by $\frac{1}{2}$, for sufficiently large $n$, in the case that $f = g$.
Therefore, to satisfy this relationship, we only need to find $c_{0}, c_{1}$, such that:
$c_{0} \leq \frac{1}{2} \leq c_{1}$, which can be easily satisfied.


#### 2
Given $c_{0}n^b \leq (n + a)^b \leq c_{1}n^b$, we can divide by the largest term:
$c_{0} \leq 1 + \cdots \leq c_{1}$. For sufficiently large n, the extra terms
will all be bounded by $1$, so it's easy to find constants that satisfy the
relationship.


#### 3
The running time of an algorithm being $O(n^2)$ is providing an upper bound
for this running time. Providing a lower bound for the upper bound is thus
nonsensical. "This algorithm can't take more time than at least this".


#### 4
$2^{n + 1} = 2 \dot 2^b$, differing only by a constant: thus we have $O(2^n)$.

$2^{2n} \leq c(2^n)$
$2^n \leq c$. The last part cannot be true, as the growth of $2^n$ is
unbounded.


#### 6
Let's call the best and worst case running times of an algorithm
$b(n)$ and $w(n)$, respectively.

If $b(n) < w(n)$ then $O(b(n))$ does not provide an upper bound
for the running time of an algorithm, since the algorithm can run
in worse time.

Similarly, if $b(n) < w(n)$, then $O(w(n))$ does not provide a lower bound for
the running time of the algorithm, given that the algorithm can run in $b(n)$.
