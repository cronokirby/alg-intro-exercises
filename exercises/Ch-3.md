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
