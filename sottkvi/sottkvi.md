

![/problems/sottkvi/file/statement/en/img-0001.jpg](/problems/sottkvi/file/statement/en/img-0001.jpg)

 Image from [flickr.com](https://flickr.com/photos/126462061@N07/50514734732/in/photolist-2jXPdJh-Jmfs7N-25dKjRM-CniKWn-bmhQ9h-paewAz-8K1F5u-4Gjedo-22yqcqN-83SLWN-6H3ftz-4WBV7Q-4WBUad-XMeG6b-QiJBXJ-6QkN6Q-5m5bop-KpaL-5aysLF-4WxCg2-HkGzJH-59KEwV-7gG9yW-4WBU7N-XfjZU7-2iXdqiC-2fX1tuK-2iGu99G-B4fpYi-9Sdqy-2c2RGD3-atQPjg-RLbFwR-68iyxF-XRktsi-rXnbt-7vzqiw-QeCTs8-7C6Qdi-XfnSky-GFufiv-cCz2xo-CnaT5N-5ZKX8x-8pkAqR-x4uumN-2jyEtnS-o43p9g-ptSW2j-7sziXU)


Hannes’s birthday is in $k$ days but unfortunately all his
 friends had to go into quarantine. Hannes wants to know how
 many of his friends will make it to the party and looks to you
 for help.


Given when Hannes’s friends went into quarantine, print how
 many of his friends will make it to the party.


Note that an individual has to be quarantined for
 $14$ days before leaving
 quarantine.


Input
-----


The first line in the input contains three integers
 $n$ ($1 \leq n \leq 10^3)$, the number of
 friends Hannes has, $k$
 ($1 \leq k \leq 10^3)$,
 the number of days until Hannes’s birthday and $d$ ($1
 \leq d \leq 10^3)$, what day it is today.


Then there are $n$
 lines, one for each friend, where the $i$-th line contains one integer
 $d\_ i$ ($1 \leq d\_ i \leq d$), the day when
 the $i$-th friend went
 into quarantine.


Output
------


Print how many of Hannes’s friends will make it to the
 party. If a friend is freed from quarantine on the day of the
 party, then that friend will make it to the party.


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
1 1 14
1

```
 | 
```
1

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
1 14 1
1

```
 | 
```
1

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```
3 5 12
1
3
5

```
 | 
```
2

```
 |


