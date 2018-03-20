## 3.1


#### 1
Let $f(n)$ and $g(n)$ be nonnegative functions. Let's assume that $f(n) >= g(n)$,
for sufficiently large $n$ (which one we choose doesn't matter, as we will be able
to make the same argument if we choose $g$).

Now, because of the above assumption we know that:

$c_{0}(f(n) + g(n)) \leq max(f(n), g(n)) \leq c_{1}(f(n) + g(n))$

which is the same as:

$c_{0}(f(n) + g(n)) \leq f(n) \leq c_{1}(f(n) + g(n))$

which we can divide by $f$:

$c_{0}(1 + \frac{g(n)}{f(n)} \leq 1 \leq c_{1}(1 + \frac{g(n)}{f(n)})$

$c_{0} \leq \frac{1}{1 + \frac{g(n)}{f(n)}} \leq c_{1}$.

The central term is bounded
by $\frac{1}{2}$, for sufficiently large $n$, in the case that $f = g$.
Therefore, to satisfy this relationship, we only need to find $c_{0}, c_{1}$, such that:

$c_{0} \leq \frac{1}{2} \leq c_{1}$

which can be easily satisfied.


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


#### 7
We have:

$g(n) \in o(g(n)) \implies 0 \leq g(n) < c g(n)$, and:

$g(n) \in \omega(g(n)) \implies cg(n) < g(n) \leq 0$, giving us:

$c_{0} < 1 < c_{1}, \forall c_{0}, c{1}$, which clearly
can't be satisfied.


#### 8
Given constants $c, n_0, m_0 > 0$, for all $n \geq n_0$ or $m \geq m_0$:

$O(g(n, m)) = \{f(n, m) : 0 \leq f(n, m) \leq c g(n, m)\}$

$\Omega(g(n, m)) = \{f(n, m) : 0 \leq c g(n, m) \leq f(n, m)\}$

$\Theta(g(n, m)) = \{f(n, m) : c_0 g(n, m) \leq f(n, m) \leq c_1 g(n, m) \}$


## 3.2


#### 1
Given $n < m$, we have $f(n) \leq f(m)$, and $g(n) \leq g(m)$,
since $f$ and $g$ are monotonic. Now we can simply add both sides of
those equations to get: $f(n) + g(n) \leq f(m) + g(m)$.

Given $n, m > 0$, $n \leq m \implies n * n leq m * m $, which clearly allows to
state that $f(n)g(n) \leq f(m)g(m)$.


#### 2
$a^{log_b c} = e^{ln a log_b c} = e^{ln a \frac{ln c}{ln b}} = e^{\frac{ln a}{ln b} ln c
= e^{log_b a ln c} = c^{log_b a}$


#### 3
$lg(n!) \leq lg(n^n) \leq nlg(n)$, therefore:
$lg(n!) = \Theta(nlg(n))$

$n! \leq n^n \implies n! < cn^n$, where $c > 1$ is some constant. This implies
that $n! = o(n^n)$

Clearly, for any $n \geq 3$, $2^n \leq n!$ since the factorial contains the same
amount of terms in the multiplication, but some are larger than 2. Because
of this, we can see that $n! = \omega(2^n)$


#### 6
Given $x^2 = x + 1 \iff -x^2 + x + 1 = 0$, we have:

$x = \frac{1 \pm \sqrt{1 + 4}}{2} = \frac{1 \pm \sqrt{5}}{2}$


#### 7
For $i = 0$, we have $\frac{1 - 1}{sqrt{5}} = 0$, which is correct.


Now, let us first note that $\phi^2 = \frac{1 + 5 + 2\sqrt{5}}{2} = \frac{3 + \sqrt{5}}{2} = 1 + \phi$,
with the same property holding for the conjugate $\hat{\phi}}$.

Assuming property holds for $i = n$, and $i = n + 1$, we have:
$F_{n + 2} = \frac{\phi^n - \hat{\phi}^n}{\sqrt{5}} + \frac{\phi^{n+1} - \hat{\phi}^{n + 1}}{\sqrt{5}},
from which we can get:

$\frac{(1 + \phi)\phi^n - (1 + \hat{\phi})\hat{phi}^n}{\sqrt{5}}$, using the above statement, we have:

$\frac{phi^{n + 2} - \hat{\phi}^{n + 2}}{\sqrt{5}}$, which completes the proof.


## Problems


#### 3.1

**a)** We have $n^d + \cdots \leq n^k$, and if $k \geq d$, then
dividing by $n^k$ leaves the left side finite.

**b)** Same as the above argument, but with reverse inequality.

**c)** For both of the above to be true, $k = d$ must be true.

**d)** If $k = d$ then $\lim_{n \to \inf} \frac{n^d + \cdots}{n^k} \neq 0$,
which is only the case if $k > d$

**e)** Similar argument, but with the reverse inequality.


#### 3.2

|A         |B                |$O$|$o$|$\Omega$|$\omega$|$\Theta$|
|----------|-----------------|---|---|---|---|---|
|$lg^k(n)$ |$n^\eta$         |yes|yes|no |no |no |
|$n^k$     |$c^n$            |yes|yes|no |no |no |
|$\sqrt{n}$|$n^{sin(n)}$     |yes|yes|yes|yes|yes|
|$2^n$     |$2^{\frac{n}{2}}$|no |no |yes|yes|no |
|$n^{lg c}$|$c^{lg n}$       |yes|yes|yes|yes|yes|
|$lg(n!)$  |$lg(n^n)$        |yes|yes|no |no |no |


#### 3.4

**a)** False: $f \leq cg$ contradicts $g \leq cf$, unless $g = \Theta(f)$, so
this can't hold for all functions $f$ and $g$.

**b)** If $g(n) = 0$, this is false.

**c)** This is true because of the monotonicity of the logarithm.

**d)** This is true since $2^n$ is monotonic.

**e)** $f \leq cf^2 \iff 1 \leq cf$, which is clearly true.

**f)** $f \leq cg \iff cf \leq g \iff g \geq cf$

**g)** This is not the case for exponential functions, as the constant doesn't
come out of the function.

**h)** Counterexample: $n = o(n^2)$, but $n + n^2 = \Theta(n^2)$.
