
Now that the course is over, it’s time to record attendances
 of the students taking ÁFLV to see which students have the best
 attendance record.


Input
-----


The first line of input contains an integer $n$, the number of students in the
 course. Next there are $n$
 lines, each containing the name of a student. Each name
 contains only English lower and upper case letters with no
 whitespace, and each name is at most $20$ letters. Next there is a line
 with a single integer $m$,
 the number of classes. Next there are $m$ lines, each describing the
 attendance for one class. Each line describing the attendance
 of a class starts with an integer $0 \leq k \leq n$, the number of
 students that attended that class. Then, on the same line,
 there are the names of the students that attended that class,
 separated by spaces. The total length of all names in the input
 is at most $10\, 000$. No
 two different students have the same name.


Output
------


For each student print a single line with the number of
 classes that student attended, along with the name of that
 student, separated by a space. The students should be printed
 in descending order by number of attendances. The internal
 order between students with equally many attendances does not
 matter.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 30 | $n = 1$,
 $1 \leq m \leq
 100$ |
| 2 | 30 | $1 \leq n \leq
 100$, $m =
 1$ |
| 3 | 40 | $1 \leq n \leq
 100$, $1 \leq m \leq
 100$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
5
Jormunrekur
Grimmhildur
Hrollleifur
Hneitir
Gudrun
4
3 Hneitir Gudrun Jormunrekur
3 Gudrun Grimmhildur Hrollleifur
0
1 Gudrun

```
 | 
```
3 Gudrun
1 Jormunrekur
1 Hrollleifur
1 Hneitir
1 Grimmhildur

```
 |


