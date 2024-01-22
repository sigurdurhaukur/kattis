

![/problems/framvindustika/file/statement/en/img-0001.png](/problems/framvindustika/file/statement/en/img-0001.png)

 Image from [xkcd.com](https://xkcd.com/612)


Erla works at a software company that has recently received
 complaints from users. The users are unhappy with a specific
 operation in the software which has a long runtime. The users
 are uncertain whether the program is frozen or active after
 starting the operation. The code for the operation was a
 prototype which was only meant to be used for a presentation
 within the company. When Erla’s superiors saw the prototype
 they decided to ship the feature in the next version.


Erla suggests reviewing the implementation of the operation
 and researching whether an optimized version can be written in
 its stead. She is certain that this is possible, but it might
 be time consuming. Erla’s direct superior decides to conduct a
 survey regarding user interface and user experience to
 determine the next course of action.


After a month of surveying, the result is in. When a project
 takes a long time it helps the mental state of a person to
 experience that some milestones are being met. The same applies
 to users which are waiting for the computer to finish running
 heavy computations. Based on the results of the survey, a
 decision is made to add a progress bar to indicate to the user
 that the computation is ongoing and to give the user a feeling
 for how long until the operation finishes.


Erla disagrees profusely with the decision and would rather
 focus on improving the efficiency of the operation. She still
 has to finish implementing the progress bar today. She asks for
 your help, can you implement the progress bar for Erla so she
 can dive deep into research?


Input
-----


Input consists of a single line containing two integers
 $p$, where $0 \leq p \leq 100$, representing the
 percentage of the operation which is finished, and $w$, the width of the progress
 bar.


Output
------


Print the current state of the progress bar. The progress
 bar should be output in a single line and starts with the
 symbol [, then $w$ symbols, where the first
 $p$ percent of them are
 # and the rest are -, then ] follows.
 Next comes a space, the symbol |,
 then another space and finally the percentage shall be written
 next to the progress bar. The percentage shall be written right
 justified with columns for four symbols.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 10 | $w = 100$ |
| 2 | 10 | $w = 10$ |
| 3 | 50 | $1 \leq w \leq 1\,
 000$ |
| 4 | 30 | $1 \leq w \leq
 10^6$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
0 10

```
 | 
```
[----------] |   0%

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
33 10

```
 | 
```
[###-------] |  33%

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```
25 25

```
 | 
```
[######-------------------] |  25%

```
 |




| Sample Input 4 | Sample Output 4 |
| --- | --- |
| 
```
100 20

```
 | 
```
[####################] | 100%

```
 |


