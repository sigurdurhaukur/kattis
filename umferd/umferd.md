

![/problems/iceland.umferd/file/statement/en/img-0001.jpg](/problems/iceland.umferd/file/statement/en/img-0001.jpg)

 Image from [flickr.com](https://www.flickr.com/photos/seattlecamera/51511583493/)


Traffic jams are a major problem in larger cities like Njú
 Jork and Síattúl, especially during rush hour.


In a traffic jam there are many cars with very little
 spacing between them, and they are not moving particularly
 fast. To simplify things we will assume that traffic is divided
 into *lanes* and each lane consists of $m$ *cells*. Each cell can
 contain at most $1$ car,
 but a cell can also be empty.


The length $m$ of the
 lanes, the number of lanes $n$ and a textual description of each
 cell, such that a cell containing a car is denoted # and an empty cell is denoted ., is given.


The task at hand is to calculate the proportion of empty
 cells, as a number between $0$ and $1$, inclusive.


Input
-----


The first line of the input contains a single integer
 $m$, the number of cells
 per lane. The next line contains a single integer $n$, the number of lanes. Next there
 are $n$ lines. Each line
 contains $m$ letters, each
 being either . or #.


Output
------


Print the proportion of empty cells as a value from
 $0$ to $1$.


The output is considered correct if its relative or absolute
 error is at most $10^{-5}$. This means that the exact
 number of digits after the decimal point does not matter as
 long as the value is accurate enough.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 40 | $n = 1$ and
 $ 1 \leq m \leq
 500$ |
| 2 | 60 | $1 \leq n, m \leq
 500$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
2
1
.#

```
 | 
```
0.5

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
4
2
#.#.
.###

```
 | 
```
0.375

```
 |


