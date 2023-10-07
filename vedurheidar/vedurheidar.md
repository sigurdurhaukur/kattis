

![/problems/vedurheidar/file/statement/en/img-0001.jpg](/problems/vedurheidar/file/statement/en/img-0001.jpg)

 Image from [visir.is](https://www.visir.is/g/20222229194d/buid-ad-opna-vegina-um-hellisheidi-og-threngsli). Photographer: Vilhelm Gunnarsson
 

Once more a low pressure system is over Iceland. Vegagerðin
 contacts you to ask for help in determining which roads should
 be closed.


To simplify things we will assume the wind speed is the same
 over the entire country. You are given the current wind speed,
 a list of roads and and the maximum safe wind speed for each
 road.


Input
-----


The first line of the input contains one integer
 $v$ ($0 \leq v \leq 200$), the current wind
 speed over Iceland. The second line of the input contains one
 integer $n$ ($1 \leq n \leq 100$), the number of
 roads.


The net $n$ lines will
 each consist of a string $s\_
 i$, the name of the road, and an integer $k\_ i$ ($0 \leq k\_ i \leq 200$), which gives
 the maxiumum safe wind speed for that road, separated by a
 space.


Output
------


Print $n$ lines, one
 for each road, which says whether it is safe to travel that
 road given the wind speed $v$. Each line should either be
 “$s\_ i$ opin” if it is
 safe to travel or “$s\_ i$
 lokud” if it is not to safe to travel along the road
 $s\_ i$.


Note that the order of the roads should be the same in the
 input and output.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 100 | No further constraints |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
25
2
Oxnadalsheidi 23
Hellisheidi 34

```
 | 
```
Oxnadalsheidi lokud
Hellisheidi opin

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
10
3
Gunnarsdalsheidi 7
Arnarstapaheidi 150
Ulfarsgrjotsheidi 0

```
 | 
```
Gunnarsdalsheidi lokud
Arnarstapaheidi opin
Ulfarsgrjotsheidi lokud

```
 |


