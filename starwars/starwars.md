

![/problems/iceland.starwars/file/statement/is/img-0001.png](/problems/iceland.starwars/file/statement/is/img-0001.png)

 Mynd frá [cjsort](https://www.flickr.com/photos/cjsorg/3211961956)

Eins og margir vita, þá eru Stjörnustríðs myndirnar
 númeraðar á einkennilegan hátt. Eftirfarandi er röðin á
 Stjörnustríðs myndum í útgáfuröð: Episode 4, Episode 5, Episode
 6, Episode 1, Episode 2, Episode 3, Episode 7, Episode 8,
 Episode 9.  

  

 Við skilgreinum *starwars-röðun*, sem
 aðgerð á lista á tölum, þannig að ef listanum er raðað, þá mun
 fyrsti þriðjungurinn á listanum færast í miðjuna, miðju
 þriðjungurinn myndi færast í byrjun, og síðasti þriðjungurinn
 er á sama stað.  

  

 Vandamálið er eftirfarandi, gefinn er listi af tölum, gefið
 starwars-röðunina á þeim.  

 T.d. fyrir Stjörnustríðs myndirnar, þá myndi starwars-röðunin
 af $1, 2, 3, 4, 5, 6, 7, 8,
 9$ vera $4, 5, 6, 1, 2, 3,
 7, 8, 9$.  

  

Inntak
------


Fyrri línan inniheldur eina tölu, $n$, fjölda talna, þar sem
 $n$ er margfeldi af
 $3$. Seinni línan
 samanstendur af $n$
 mismunandi heiltölum aðskildar með bilum, þar sem hver tala
 $x$ uppfyllir $1 \leq x \leq 10^9$.


Úttak
-----


Starwars-röðunin af tölunum sem gefnar voru í inntakinu, í
 einni línu, aðskildar með bilum.


Stigagjöf
---------




|  |  |  |
| --- | --- | --- |
| Group | points | Input Constraints |
| 1 | 20 | $n = 9$ |
| 2 | 80 | $3 \leq n \leq
 3\*10^5$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
9
1 2 3 4 5 6 7 8 9

```
 | 
```
4 5 6 1 2 3 7 8 9

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
3
5 9 10

```
 | 
```
9 5 10

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```
6
6 55 1 3 8 34

```
 | 
```
6 8 1 3 34 55

```
 |


