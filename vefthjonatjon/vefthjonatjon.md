

![/problems/vefthjonatjon/file/statement/en/img-0001.jpg](/problems/vefthjonatjon/file/statement/en/img-0001.jpg)

 Image from [flickr.com](https://flic.kr/p/4H1hyC)

Bjarki has had his hands full setting up web servers for
 NWERC and is borrowing $N$
 computers from the IT department of The University of Reykjavík
 to do so. The problem, which Bjarki didn’t realize right away,
 is that some of the computers are missing parts and thus he
 can’t set up as many web servers as he intended.
 A web server needs three pieces to work: a CPU, memory and a
 hard drive. If one or more of these are missing, the web server
 won’t work.


Bjarki had the idea that he could take parts from some of
 the servers and put them into others. For example if one
 webserver has a CPU and hard drive, but no memory, he could
 take the memory from a different web server to make this one
 work. Bjarki started to wonder how many web servers he could
 get going by doing this.


Could you help Bjarki figure out how many webservers he can
 set up if he gives you a list of web servers and what parts are
 missing from each?


Input
-----


The first line contains an integer $n$, the number of web servers Bjarki
 has.  

 The next $n$ lines each
 contain a description of a web server, each line containing
 three letters which are either “J” or “N”.  

 The first letter in line $i$ denotes whether there is a CPU in
 web server number $i$,
 second letter denotes whether there is memory present in web
 server $i$ and finally the
 third denotes whether there is a hard drive in web server
 $i$. “J” denotes that the
 component is present while “N” denotes that it is not
 present.


Output
------


Print the maximum number of web servers Bjarki can get
 going.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 50 | $1 \leq n \leq
 1000$ |
| 2 | 50 | $1 \leq n \leq
 10^5$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
2
J J N
N N J

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
3
J N N
N J N
N N J

```
 | 
```
1

```
 |


