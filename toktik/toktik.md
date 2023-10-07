

![/problems/iceland.toktik/file/statement/en/img-0001.jpeg](/problems/iceland.toktik/file/statement/en/img-0001.jpeg)

 Image from [facebook.com](https://www.facebook.com/pages/category/Public-Figure/Toktik-388996718614860/)


Tok Tik is a new app that youngsters are absolutely raving
 over. There they compete to get the most views. You have found
 yourself in a discussion with your friend on who is truly the
 most popular Tok Tikker of all time. You decide to define the
 most popular Tok Tikker of all time as the Tok Tikker who has
 the largest total number of views on all their Tok
 Tiks.  



You are given a list of all Tok Tiks that have been uploaded
 to the whole internet. Each Tok Tik is described by what Tok
 Tikker uploaded it and how many views it has.  



Determine what Tok Tikker is truly the most popular. There
 will always be a uniquely determined most popular Tok
 Tikker.


Input
-----


The first line of the input contains one integer
 $n$ ($1 \leq n \leq 10^5$) giving the
 number of Tok Tiks on the internet.


Then there are $n$
 lines, one for each Tok Tik, where the $i$-th line contains a string
 $s\_ i$ and an integer
 $a\_ i$ $(1 \leq a\_ i \leq 10^4)$, denoting
 that the Tok Tikker $s\_ i$
 uploaded this video and $a\_
 i$ Tok Tikkers have viewed it. Every string $s\_ i$ contains at most $20$ English lowercase letters.


Output
------


Print a single line with the name of the Tok Tikker who’s
 most popular.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 50 | $n \leq 100$ |
| 2 | 50 | No further constraints. |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
5
benni 1500
bjarki 1200
unnar 1300
arnar 1600
bjarki 710

```
 | 
```
bjarki

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
3
anna 5
anna 6
anna 7

```
 | 
```
anna

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```
5
kalli 1
kalli 1
gummi 5
kalli 3
gummi 1

```
 | 
```
gummi

```
 |


