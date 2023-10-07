

![/problems/iceland.leynithjonusta/file/statement/en/img-0001.png](/problems/iceland.leynithjonusta/file/statement/en/img-0001.png)

 Image from [xkcd.com](https://xkcd.com/1808/)


In a recent data leak, some of the things the CIA has been
 examining were revealed. One of the items that came to light
 was that they had a tool, which could find email addresses that
 have been obscured by adding spaces, in order to avoid spam.
 The Icelandic Intelligence Agency has requested that the
 Competitive Programming Association of Iceland makes
 contestants implement a similar tool.


Input
-----


Input is a single line with one email address, which
 consists exclusively of lowercase letters in the English
 alphabet, spaces, full stops and exactly one @ symbol. The line will always start with a
 lowercase letter and end with a lowercase letter or a full
 stop.


Output
------


Output the email address, without any spaces, on a single
 line.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 75 | The number of symbols in the input is at most
 $1\, 000$ |
| 2 | 25 | The number of symbols in the input is at most
 $10^6$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
keppnis forritun @ g mail . com

```
 | 
```
[[email protected]](/cdn-cgi/l/email-protection)

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
n o @ s p a m . p l z

```
 | 
```
[[email protected]](/cdn-cgi/l/email-protection)

```
 |


