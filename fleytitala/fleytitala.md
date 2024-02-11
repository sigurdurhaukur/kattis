

![/problems/fleytitala/file/statement/en/img-0001.jpg](/problems/fleytitala/file/statement/en/img-0001.jpg)

 Image from [flickr.com](https://flic.kr/p/fLPcfh)


Friðrik is killing time by skipping stones. He’s getting so
 good at it that he can decide how often the stone will
 bounce.


Friðrik starts by throwing the stone $d$ meters. After each bounce the
 distance the stone travels is cut in half. How many meters does
 the stone travel in total?


Input
-----


The input consists of two lines. The first line contains one
 integer $0 \leq d \leq
 10^6$, the distance that the stone will travel before
 bouncing. The second line contains one integer $0 \leq k \leq 10^{18}$, the number of
 bounces.


Output
------


Print a single line with a floating point number, the total
 distance that the stone travels.


The output is considered correct if the number has a
 relative or absolute error of at most $10^{-5}$ from the correct answer.
 This means it doesn’t matter how many significant digits the
 answer contains as long as it’s accurate enough.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 25 | $0 \leq k \leq
 10$ |
| 2 | 50 | $0 \leq k \leq 1\,
 000$ |
| 3 | 25 | No further constraints |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
1
1

```
 | 
```
1.5

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
12
4

```
 | 
```
23.25

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```
0
10

```
 | 
```
0.0

```
 |


