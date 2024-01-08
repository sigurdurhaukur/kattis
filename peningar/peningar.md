

![/problems/peningar/file/statement/en/img-0001.jpg](/problems/peningar/file/statement/en/img-0001.jpg)

 Image from [flickr.com](https://www.flickr.com/photos/tracy_olson/61056391)


Tómas has found himself in a strange world. This world
 consists of $n$ cells
 arranged in a circle. Thus cells $i$ and $i+1$ are adjacent for $1 \leq i < n$, and cells
 $1$ and $N$ are also adjacent. In each cell
 there is an $a\_ i$ amount
 of money. Tómas starts at cell $1$. In each step he moves
 $d$ cells. When landing in
 a cell Tómas takes all the money in that cell. Can you find out
 how much money Tómas will get if he continues walking forward
 until he can’t gather any more money?


Input
-----


The first line of the input contains two integers
 $n,d$ ($1 \leq n \leq 10^5$, $1 \leq d \leq 10^{14}$), where
 $n$ is the number of cells
 and $d$ is how many cells
 Tómas moves forward with each step.  



The next line contains $n$ integers, $a\_ i$ ($1 \leq a\_ i \leq 10^9$), denoting how
 much money is in the $i$-th cell.  



Output
------


Print a single integer, how much money Tómas will end up
 with.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 25 | $1 \leq n, a\_ i \leq
 100$, $d =
 1$ |
| 2 | 25 | $1 \leq n, d, a\_ i \leq
 100$ |
| 3 | 50 | No further constraints |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
4 1
1 1 1 1

```
 | 
```
4

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
4 2
1 5 3 5

```
 | 
```
4

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```
5 3
1 2 3 4 5

```
 | 
```
15

```
 |


