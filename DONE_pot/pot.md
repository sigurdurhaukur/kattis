
The teacher has sent an e\-mail to her students with the
 following task: “Write a program that will determine and output
 the value of $X$ if given
 the statement:

\\\[ X \=
 \\mathit{number}\_1^{\\mathit{pow}\_1} \+
 \\mathit{number}\_2^{\\mathit{pow}\_2} \+ \\ldots \+ \\mathit{number}\_
 N^{\\mathit{pow}\_ N} \\]
and it holds that $\\mathit{number}\_1$, $\\mathit{number}\_2$ to $\\mathit{number}\_ N$ are integers, and
 $\\mathit{pow}\_1$,
 $\\mathit{pow\_2}$ to
 $\\mathit{pow}\_ N$ are
 one\-digit integers.” Unfortunately, when the teacher downloaded
 the task to her computer, the text formatting was lost so the
 task transformed into a sum of $N$ integers:

\\\[ X \= P\_1 \+ P\_2 \+ \\ldots \+ P\_ N \\]
For example, without text formatting, the original task in
 the form of $X \= 21^2 \+
 125^3$ became a task in the form of $X \= 212 \+ 1253$. Help the teacher by
 writing a program that will, for given $N$ integers from $P\_1$ to $P\_ N$ determine and output the value
 of $X$ from the original
 task.


Input
-----


The first line of input contains the integer $N$ ($1
 \\leq N \\leq 10$), the number of the addends from the
 task. Each of the following $N$ lines contains the integer
 $P\_ i$ ($10 \\leq P\_ i \\leq 9999$, $i \= 1, \\ldots , N$) from the
 task.


Output
------


The first and only line of output must contain the value of
 $X$ ($X \\leq 1\\, 000\\, 000\\, 000$) from the
 original task.




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| ```  2 212 1253  ``` | ```  1953566  ``` |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| ```  5 23 17 43 52 22  ``` | ```  102  ``` |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| ```  3 213 102 45  ``` | ```  10385  ``` |


