

![/problems/vedurvindhradi/file/statement/en/img-0001.png](/problems/vedurvindhradi/file/statement/en/img-0001.png)

 Image from [commons.wikimedia.org](https://upload.wikimedia.org/wikipedia/commons/a/a4/Logo_beaufort12.png)


You’ve gotten a job at the Icelandic Met Office, working in
 a data management position. Your first task is to sort wind
 speeds into wind levels. The levels are as follows:




|  |  |
| --- | --- |
| Wind level name | m/s |
| Logn | 0 - 0.2 |
| Andvari | 0.3 - 1.5 |
| Kul | 1.6 - 3.3 |
| Gola | 3.4 - 5.4 |
| Stinningsgola | 5.5 - 7.9 |
| Kaldi | 8.0 - 10.7 |
| Stinningskaldi | 10.8 - 13.8 |
| Allhvass vindur | 13.9 - 17.1 |
| Hvassvidri | 17.2 - 20.7 |
| Stormur | 20.8 - 24.4 |
| Rok | 24.5 - 28.4 |
| Ofsavedur | 28.5 - 32.6 |
| Farvidri | $\geq $ 32.7 |


Input
-----


The input is a single floating point number, $0 \leq k \leq 200$, the measured wind
 speed. The number will have exactly one digit after the decimal
 point.


Output
------


Print the name of the wind level the wind speed belongs
 to.


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
3.1

```
 | 
```
Kul

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
8.3

```
 | 
```
Kaldi

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```
195.1

```
 | 
```
Farvidri

```
 |


