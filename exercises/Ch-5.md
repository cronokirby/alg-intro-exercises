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
