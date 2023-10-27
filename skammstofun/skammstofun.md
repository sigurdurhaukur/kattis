

![/problems/iceland.skammstofun/file/statement/en/img-0001.jpg](/problems/iceland.skammstofun/file/statement/en/img-0001.jpg)

 Photo from [flickr.com](https://flickr.com/photos/apelad/15955349666/)


Before Hannes founded the startup company which focused on
 naming startup companies, a more primitive method of naming was
 used for companies, services and products. The entity which was
 to be named was simply described with words and an abbreviation
 was formed from the words.


The words were written down and each one started with either
 a small letter or a capital letter. Initially, the abbreviation
 was empty and then the words were processed. If a word started
 with a capital letter then it was used as part of the
 abbreviation, otherwise it was skipped. When a word was used in
 an abbreviation, the first letter of the word was taken and
 added to the back abbreviation. The abbreviation was therefore
 made up of the first letter of each word starting with a
 capital letter, in the same order as the words.


Input
-----


Input consist of two lines. The former line contains a
 single integer $n$, the
 number of words. The latter line consists $n$ words, separated by spaces. Each
 word consists entirely of letters in the English alphabet. The
 number of symbols in the input is between $1$ and $1\, 000$.


Output
------


Output one line containing the abbreviation.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 25 | $n = 1$ |
| 2 | 35 | $1 \leq n \leq
 100$, each word starts with a capital letter |
| 3 | 40 | $1 \leq n \leq
 100$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
1
Hannes

```
 | 
```
H

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
2
Forritunarkeppni Framhaldsskolanna

```
 | 
```
FF

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```
4
GNU is Not Unix

```
 | 
```
GNU

```
 |


