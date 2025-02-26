
Programmeringsolympiaden (PO) must write a budget every
 year, which then needs to be approved by the treasurer Emil.
 This year, the PO leadership has proposed some rather wild
 ideas, such as buying 2000 ducks and purchasing a PO\-yacht to
 sail to the IOI (the world finals of competitive programming).
 Emil finds it difficult to determine whether the budget is
 reasonable or not.


A budget consists of several revenues and expenses. To
 assess whether the budget is reasonable, Emil wants to
 calculate whether the proposed budget would result in
 Programmeringsolympiaden making a profit, a loss, or breaking
 even financially. Can you write a program to help Emil decide
 this?


Input
-----


The first line of input contains the integer $N$ ($1
 \\leq N \\leq 30$), the number of revenues/expenses in the
 budget.


This is followed by all $N$ revenues/expenses. Each is
 described over two lines: first, a description of what it is, a
 string of at most 30 characters. For simplicity, the string
 contains no spaces. The next line contains an integer
 $K$ ($\-10^7 \\leq K \\leq 10^7$). If
 $K$ is positive, it
 represents a revenue of $K$ kronor; otherwise, it is an
 expense of $\-K$
 kronor.


Output
------


* If the budget would lead to PO making money, print
 “Usch, vinst”. This translates to “Ew, profit”.
* If the budget breaks even, print “Lagom”. This
 translates to “Just right”.
* If the budget would lead to a loss, print “Nekad”. This
 translates to “Denied”.


Note that you should not print the quotation marks.


Scoring
-------


Your solution will be tested on a set of test groups, each
 worth a number of points. Each test group contains a set of
 test cases. To get the points for a test group you need to
 solve all test cases in the test group.




| **Group** | **Points** | **Constraints** |
| --- | --- | --- |
| $1$ | $20$ | $K \= 0$ for all  $K$. |
| $2$ | $30$ | $K \\geq 0$ for  all $K$. |
| $3$ | $50$ | No additional constraints. |


Explanation of Sample 1
-----------------------


Since the yacht costs much more than what PO receives from
 the sponsorship, the budget results in a loss, and thus the
 correct answer is Nekad.


Explanation of Sample 2
-----------------------


Even though there are some expenses, their total is less
 than the revenue from the sponsorship.


Explanation of Sample 3
-----------------------


If there is no PO at all, there are neither revenues nor
 expenses, which results in breaking even.


Explanation of Sample 4
-----------------------


Here, the revenues exactly match the expenses, which also
 results in breaking even.




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| ``` 2 sponsring 70000 PO_yacht -1000000  ``` | ``` Nekad  ``` |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| ``` 4 sponsring 70000 2000_ankor -5000 Lite_fika -1000 500_affischer -10000  ``` | ``` Usch, vinst  ``` |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| ``` 1 inget_PO 0  ``` | ``` Lagom  ``` |




| Sample Input 4 | Sample Output 4 |
| --- | --- |
| ``` 2 sponsring 70000 final -70000  ``` | ``` Lagom  ``` |


