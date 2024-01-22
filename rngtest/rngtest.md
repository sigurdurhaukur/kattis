

![/problems/rngtest/file/statement/en/img-0001.jpg](/problems/rngtest/file/statement/en/img-0001.jpg)

 In the olden days dice were used to generate test data
 

As per usual an absolute truckload of random test data has
 to be generated for Forritunarkeppni Framhaldsskólanna to test
 solutions again. Since it’s not feasible to write all the data
 by hand KFFÍ uses random number generators. The head honchos at
 KFFÍ are paranoid about the quality of random number generator
 implementations, so they want to make their own. Atli was thus
 tasked with making a linear congruential generator. But because
 Atli overslept, as per usual, someone has to take care of this,
 that is to say you (as per usual).


A linear congruential generator is defined using three
 integers $a$, $b$ and $x\_0$. We let $f(x) = (ax + b)\ \% \ m$. The percent
 sign denotes modulus and means the result is calculated modulo
 $m$. That is to say we
 take the remainder of the result when it is divided by
 $m$.


To get the $n$-th
 random number $f$ is
 applied $n$ times to the
 starting value $x\_0$. This
 means the zeroth number is $x\_0$, the first number is
 $f(x\_0)$, the next is
 $f(f(x\_0))$ and so on.


Input
-----


The input consists of one line with five integers
 $a$, $b$, $x\_0$, $n$ and $m$ as described above. The integers
 are non-negative and $m$
 is positive.


Output
------


Print the $n$-th random
 number the linear congruential generator outputs.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 40 | $a = 10, b = 3, m = 10^3
 + 9, x\_0 \leq 10^9, 1 \leq n \leq 10^6$ |
| 2 | 20 | $m = 10^5 + 3, a, b, x\_0
 \leq 10^9, 1 \leq n \leq 10^{18}$ |
| 3 | 20 | $m = 10^9 + 7, a, b, x\_0
 \leq 10^9, 1 \leq n \leq 10^{18}$ |
| 4 | 20 | $a, b, x\_0, m \leq 10^9
 + 7, 1 \leq n \leq 10^{18}$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
10 3 42 42 1009

```
 | 
```
311

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
17 18 20 1000000000000000000 100003

```
 | 
```
41617

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```
1 1 164 500000000000000000 1000000007

```
 | 
```
500000192

```
 |


