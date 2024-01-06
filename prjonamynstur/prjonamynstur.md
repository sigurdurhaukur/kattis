

![/problems/prjonamynstur/file/statement/en/img-0001.jpg](/problems/prjonamynstur/file/statement/en/img-0001.jpg)

 Photo from [flickr.com](https://www.flickr.com/photos/30478819@N08/50598685068)


Heiðrún thoroughly enjoys knitting all sorts of garments for
 her family members. Whenever a new baby arrives in the family,
 one can expect that a dress, hat or sweater is her next
 project.


When Heiðrún knits, she often makes use of recipes, also
 known as knitting patterns, which can be found in books,
 magazines or even on the internet. These recipes are displayed
 in a graphic manner as tiles in a two dimensional grid. There
 are many different types of knitting loops which affect the
 appearance of the clothing. Therefore, each tile in the recipe
 is marked with a symbol to indicate what type of loop should be
 knitted. Since the types of loops are different, knitting them
 requires varying amounts of yarn. The amount of yarn used is
 measured in millimeters and the costs of each type of loop are
 the following:




|  |  |  |
| --- | --- | --- |
| Type of loop | Symbol | Yarn in millimeters |
| Garter stitch | . | $20$ |
| Yarn over | O | $10$ |
| Slip one stitch, knit next stitch and pass slip stitch
 over knit stitch | \ | $25$ |
| Knit two stitches together | / | $25$ |
| Knit three stitches together | A | $35$ |
| No stitch | ^ | $5$ |
| Purl on right side, knit on wrong side | v | $22$ |


Now Heiðrún is wondering whether she has enough yarn for her
 next project. If she shows you the recipe she intends to
 follow, can you tell her how much yarn she will need?


Input
-----


The first line of input consists of two integers
 $n$, the number of rows in
 the recipe, and $m$, the
 number of columns in the recipe. Then $n$ lines follow, each consisting of
 $m$ symbols, where each
 line represents a row in the recipe. You may assume the recipe
 will only contain symbols from the table above.


Output
------


Output one integer, the amount of yarn required for the
 recipe in millimeters.


Scoring
-------




|  |  |  |
| --- | --- | --- |
| Group | Points | Constraints |
| 1 | 40 | $1 \leq n, m \leq
 50$ |
| 2 | 40 | $1 \leq n, m \leq 1\,
 000$ and the recipe consists entirely of garter
 stitches. |
| 3 | 20 | $1 \leq n, m \leq 1\,
 000$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
3 5
.....
.....
.....

```
 | 
```
300

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
16 16
................
...\O....OAO....
................
...\O..\O...O/..
................
...\O..\O...O/..
................
...\O.......O/..
................
....\O.....O/...
................
.....\O...O/....
................
......\O.O/.....
................
.......\O.......

```
 | 
```
5035

```
 |


