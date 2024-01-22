

![/problems/iceland.elo/file/statement/en/img-0001.jpg](/problems/iceland.elo/file/statement/en/img-0001.jpg)

Arnar is an impressive League of Legends player and
 strives to be even better. Every player in League of Legends
 has an Elo score that signifies how good they are at the game,
 the higher the better. Arnar has Elo score $x$ but wants to maximize it.
 Players in League of Legends play against just anyone, they
 can only play against others with a similar Elo score. Arnar
 has made a list of $n$
 players, where Arnar can play against the $i$-th player only if Arnar’s Elo is
 in the interval $[L\_ i, R\_
 i]$. Every time Arnar plays against the $i$-th player his Elo increases by
 $a\_ i$, because he knows
 he can beat all of these players.


Arnar can play against the same player as often as he likes
 as long as his Elo stays in the corresponding interval.


Given the information on these $n$ players, what’s the highest Elo
 Arnar can achieve?


Input
-----


The first line contains two integers $1 \le n \le 1\, 000$, the number of
 players and $1 \le x \le 5\,
 000$, Arnar’s initial Elo score. The next $n$ lines contain three
 integers$1 \le L\_ i \le R\_ i \le
 5\, 000$, $1 \le a\_ i \le
 500$.


Output
------


Print a single integer, the highest Elo Arnar can
 achieve.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 50 | $a\_ i$ is the
 same for all $i$ |
| 2 | 50 | No further constraints |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
3 10
10 15 3
10 13 2
10 11 1

```
 | 
```
18

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
4 10
10 11 5
15 16 5
20 21 30
49 49 100

```
 | 
```
50

```
 |


