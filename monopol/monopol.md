
Doris is playing monopoly with her friends, and it is now
 her turn to roll the dice. In standard monopoly you roll two
 $6$\-sided dice, and then
 walk the same number of steps as the sum of the two dice. From
 her current position, she will end up on her opponents’ hotels
 if the sum is equal to one of the integers $A\_1, \\dots , A\_ N$. What is the
 probability that she will end up on one of her opponents’
 hotels during her current turn? You do not have to consider the
 rule about rerolling if both dice show the same number or any
 other rule from monopoly.


Input
-----


The first line consists of an integer $N$ ($1
 \\leq N \\leq 11$), the number of hotels the opponents
 own. The second line consists of $N$ integers $A\_1, \\dots , A\_ N$ ($2 \\leq A\_1 \< \\dots \< A\_ N \\leq
 12$), the distances to each of the opponents’
 $N$ hotels.


Output
------


Output a decimal, the probability that the sum of the two
 dice is one of the numbers $A\_1,
 \\dots , A\_ N$. Your answer will be considered correct if
 its absolute error does not exceed $10^{\-4}$.


Grading
-------


Your solution will be tested on two test\-case groups. To
 receive points for a group, your solution must correctly solve
 every test\-case in the group.




| Group | Point value | Constraints |
| --- | --- | --- |
| $1$ | $30$ | $N \= 1$ |
| $2$ | $70$ | No further constraints |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| ``` 1 7  ``` | ``` 0.16666666666666666  ``` |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| ``` 2 2 12  ``` | ``` 0.05555555555555555  ``` |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| ``` 11 2 3 4 5 6 7 8 9 10 11 12  ``` | ``` 1.0  ``` |


