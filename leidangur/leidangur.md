<!-- ![/problems/iceland.leidangur/file/statement/en/img-0001.jpg](/problems/iceland.leidangur/file/statement/en/img-0001.jpg) -->

Image from [flickr.com](https://flic.kr/p/AQgXd4)

Little Óli is going off on a journey. On the way he will
enounter three types of things: money, gold and jewels. When he
encounters one of these things he can put it at the top in his
backpack, if he wants to. But Óli will also encounter bad guys
on the way. There are three kinds of bad guys and all of them
will demand Óli gives them something. Evil bankers will demand
money, evil gold diggers will demand gold and evil jewelers
will demand jewels.

Óli doesn’t have much choice and has to placate these bad
guys, needing to give each of them one instance of the thing
they demand. But Óli’s backpack is quite narrow so he can only
reach for the item that’s at the top of his bag, that is to say
the item he last put in the bag. If Óli wants an item further
down in the bag he has to throw away the items above it first,
unable to recover them later. If Óli doesn’t have the item the
bad guy asks for, then he will be unable to complete his
journey.

Help Óli check if he can complete his journey, and if so,
how many things he can bring home at a maximum.

## Input

The input contains one line denoting Óli’s journey and
consists of the following letters:

- ‘p’ denotes money Óli can pick
  up.
- ‘g’ denotes gold Óli can pick
  up.
- ‘o’ denotes jewels Óli can
  pick up.
- ‘P’ denotes an evil
  banker.
- ‘G’ denotes an evil gold
  digger.
- ‘O’ denotes an evil
  jeweler.
- ‘.’ denotes an empty
  space.

Óli starts on the cell furthest to the left and always walks
to the right, so if Óli leaves an item behind, then he cannot
return and pick it up later. The journey is over when Óli
reaches the cell furthest to the right.

The journey contains at least $1$ cell and at most $10^6$ cells.

## Output

If Óli can’t finish the journey, print a single line
containing Neibb. Otherwise print
three integers, each on their own line, the maximum amount of
money, gold and jewels Óli can bring home after the
journey.

## Scoring

|       |        |                                    |
| ----- | ------ | ---------------------------------- |
| Group | Points | Constraints                        |
| 1     | 25     | There are no bad guys.             |
| 2     | 35     | The journey is at most $20$ cells. |
| 3     | 40     | No further constraints.            |

| Sample Input 1 | Sample Output 1 |
| -------------- | --------------- |

|

```
..pg.P.g..

```

|

```
0
1
0

```

|

| Sample Input 2 | Sample Output 2 |
| -------------- | --------------- |

|

```
pgo..OPG

```

|

```
Neibb

```

|

| Sample Input 3 | Sample Output 3 |
| -------------- | --------------- |

|

```
.pooop......

```

|

```
2
0
3

```

|
