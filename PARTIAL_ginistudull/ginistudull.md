

![/problems/iceland.ginistudull/file/statement/en/img-0001.png](/problems/iceland.ginistudull/file/statement/en/img-0001.png)

 The Gini coefficient in different countries
 
In the year 1912 the sociologist and statistician Corrado
 Gini published a paper titled “Variability and Mutability”. In
 it he introduces the Gini coefficient. The purpose of the
 coefficient is to measure inequality in distributions and is
 often used to measure income inequality. The coefficient takes
 a value between $0$ and
 $1$, where $0$ denotes perfect equality and
 $1$ complete inequality.
 As an example the Gini coefficient of Iceland is $0.256$ and the Gini coefficient of
 the US is $0.415$.  

 To calculate the coefficient for a group of people, the income
 of everyone in that group has to be known. If $y\_1, y\_2, \ldots , y\_ n$
 ($y\_ i > 0$ for all
 $i$) denote the incomes of
 $n$ individuals the Gini
 coefficient of the group can be calculated using the formula:
 \[ G = \dfrac { \sum \limits
 \_{i=1}^ n \sum \limits \_{j=1}^ n \lvert y\_ i - y\_ j \rvert }{ 2
 \sum \limits \_{i=1}^ n \sum \limits \_{j=1}^ n y\_ i } \]
Here $\lvert x\rvert $
 denotes the absolute value of $x$: $\lvert x\rvert = x$ if $x \geq 0$, but $\lvert x\rvert = -x$ if $x < 0$.


Input
-----


The first line of the input contains one integer
 $n$, the number of
 individuals in the group. Then there will be $n$ lines, one for each individual in
 the group, each containing an integer $0 < y\_ i \leq 10^5$, the income of
 the $i$-th individual.


Output
------


Output the Gini coefficient for the group. The output is
 considered correct if the relative or absolute error from the
 correct answer does not exceed $10^{-6}$. This means it does not
 matter how many significant digits the answer has as long as
 it’s accurate enough.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 50 | $n \leq 10^3$ |
| 2 | 50 | $n \leq 10^5$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
5
100
100
100
100
100

```
 | 
```
0.00000000000000000

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
5
400
100
300
200
500

```
 | 
```
0.26666666666666666

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```
10
1
1
1
1
10000
1
1
1
1
1

```
 | 
```
0.89910080927165548

```
 |
