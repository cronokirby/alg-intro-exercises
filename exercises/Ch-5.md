## 5.1

#### 1
Ranking $c_{1} \ge \cdots \ge c_{n}$ to find the best,
implies that the candidates have a total order.


#### 2
You could generate bits with the same size as $b$,
and then reject numbers that aren't between $a$ and $b$.
This would be bounded above by $lg b$.

#### 3
If you toss a coin twice, the likelihood of
only one head or only one tail is $2 p ( 1 - p)$,
where $p$ is the probability of a head on a single toss.

If we toss the coin twice, and then accept the first result
as the outcome only if the second differs, then the
probability of heads and tails is the same.



#### 5.2

#### 1
There's a total of $n!$ permutations of the candidates.
For us to hire after $n$ times, the best candidate needs
to be in the nth place. After choosing this place, there's
$(n -1)!$ permutations for the rest of the candidates,
which means that hiring any amount of times has probability $\frac{1}{n}$.

#### 3
The expected value of the sum of n dice is $3.5 n$.

#### 4
Let $X_{i}$ denote whether the ith person
gets their hat back. $P(X_{i} = 1) = \frac{1}{n}$,
since there's $n!$ ways to order the hats,
and $(n - 1)!$ ways to order them such that this person
gets the right hat.

From this we know that $E[X_{i}] = \frac{1}{n}$,
which means that: $$
E[\Sigma_{i=1}^n X_{i}] = \Sigma_{i=1}^n E[X_{i}] = \Sigma_{i=1}^n \frac{1}{n} = 1
$$

So, on average, only 1 person will get their hat back.
