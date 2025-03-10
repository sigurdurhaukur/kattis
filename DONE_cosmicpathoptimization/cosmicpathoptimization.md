
Your long journey through the cosmos has begun, and you have
 many stops along the way. This journey will take generations,
 so you need to find the most efficient route from Earth,
 located at intergalactic coordinates $(X\_0, Y\_0, Z\_0\)$, to each of the
 $N$ planets, asteroids,
 and space stations along the way, each with initial coordinates
 $(X\_ i, Y\_ i, Z\_ i)$.


Of course, the universe isn’t a static system: each
 celestial body has an initial velocity $(\\overline{X\_ i}, \\overline{Y\_ i},
 \\overline{Z\_ i})$, and its mass $M\_ i$ generates a gravitational pull
 on other bodies, creating an acceleration of $\-\\hat{r} \\frac{G M\_ i}{r^2}$, where
 for this problem we set the gravitational constant $G \= 1$, $r$ is the Euclidean distance between
 the two celestial bodies involved in the gravitational
 interaction, and $\-\\hat{r}$ signifies that the
 acceleration is towards the other body (i.e. they attract each
 other along the line connecting them).


Since you may approach the speed of light, you need to take
 into account the effects of special relativity. In particular,
 the formula $E\_ i^2 \= (M\_ i
 c^2\)^2 \+ (p\_ i c)^2$ can come in handy, where
 $E\_ i$ and $p\_ i$ are the total energy and
 momentum respectively of object $i$, and $c$ is the speed of light (for this
 problem, we’ll set $c \=
 1$, effectively using Planck units). Moreover, you may
 encounter black holes, around which you’ll need to incorporate
 the combined effects of general relativity and quantum
 mechanics, which the margins of this problem statement are too
 small to contain. As a well\-prepared team, you should of course
 have these formulas ready to go in your code book.


Furthermore, the presence of a fleet of space cats adds an
 additional layer of complexity to this problem. Their unique
 needs must be taken into account during the optimization
 process, requiring the integration of advanced, feline\-specific
 biometric monitoring systems into the spacecraft’s control
 mechanism. The solution must also consider the impact of
 intergalactic space\-cat field fluctuations on the subatomic
 matrix structure and the temporal\-spatial discordance, leading
 to a significant deviation in the quantum harmonic oscillation
 and gravitational wave interference.


The space cats have just reminded me that it’s April Fools’
 Day! They’ll be happy if you can just write a program which
 determines the average temperature of a planet given a set of
 readings: can you help them out?


Input
-----


The input consists of two lines. The first line contains an
 integer $M$ ($1 \\leq M \\leq 10^4$), representing
 the number of temperature readings taken on the planet’s
 surface. The second line contains $M$ space\-separated integers
 $T\_ i$ ($0 \\leq T\_ i \\leq 10^5$), representing
 the temperature readings in Kelvin.


Output
------


The output should be a single integer, representing the mean
 temperature out of the given readings for the planet in Kelvin,
 rounded down.




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| ``` 3 300 310 280  ``` | ``` 296  ``` |


