

![/problems/ball/file/statement/en/img-0001.png](/problems/ball/file/statement/en/img-0001.png)

 Image from [commons.wikimedia.org](https://upload.wikimedia.org/wikipedia/commons/2/25/1975_Holton-Armes_Senior_Prom.png?20181220115425)


There is a school dance scheduled tomorrow and $n$ students will attend. The students
 are numbered from $1$ to
 $n$. The students are
 registered in pairs and the list of attendees is $\frac{n}{2} + 1$ lines long. Each
 number also appears once in the list. But that doesn’t add up!
 Some devious prankster must have added a pair to the list
 somewhere. Given the list determine which pair should be
 removed.


Input
-----


The first line of the input contains a single even integer
 $n$ ($2 \leq n \leq 2 \cdot 10^5$), the
 number of students. Then follow $\frac{n}{2} + 1$ lines. Each line
 contains two integers $a\_ i, b\_
 i$ ($1 \leq a\_ i, b\_ i
 \leq n$), indicating the $i$-th pair on the list.


Output
------


Print the pair that the prankster added, on a single line.
 The numbers, $a$ and
 $b$, should be separated
 by a single space and ordered such that $a < b$.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 40 | $2 \leq n \leq
 200$ |
| 2 | 30 | $2 \leq n \leq
 5000$ |
| 3 | 30 | No further constraints |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
10
1 2
3 5
4 8
6 7
4 7
9 10

```
 | 
```
4 7

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
2
2 1
1 2

```
 | 
```
1 2

```
 |


