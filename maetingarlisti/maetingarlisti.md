

![/problems/iceland.maetingarlisti/file/statement/is/img-0001.jpg](/problems/iceland.maetingarlisti/file/statement/is/img-0001.jpg)

 Skólastofa (mynd fengin af [flickr.com](https://flic.kr/p/BTRZe))
 

Mætingarlisti er látinn ganga um skólastofu þar sem hver
 nemandi skráir nafnið sitt einu sinni fyrir neðan síðasta nafn
 (fyrsta manneskjan skrifar nafnið sitt efst). Stofan
 samantendur af $r$ röðum
 þar sem hver röð er með $c$ stóla. Vitað er að stofan er
 fullsetin. Verkefni þitt er að skrifa forrit sem segir til um
 hvort mætingarlistinn var látinn ganga frá vinstri til hægri
 eða öfugt, fyrir hverja röð í skólastofunni.


Athugið að hver röð lét listann ganga annaðhvort frá vinstri
 til hægri eða öfugt, það er ekki möguleiki á neinu öðru.


Inntak
------


Fyrsta línan í inntakinu inniheldur þrjár heiltölur
 $4 \leq n \leq 10^5$,
 $r$, og $c$, þar sem $n = r \cdot c$. Síðan koma
 $r$ línur, hver lína með
 $c$ nöfnum, þar sem hver
 lína táknar eina röð af nemendum. Síðan fylgja $n$ línur, hver lína með einu nafni,
 sem táknar mætingarlistann.


Hvert nafn er $2$ til
 $20$ enskir lágstafir að
 lengd, og $c \geq 2$.


Úttak
-----


Út skal prenta $r$
 línur, þar sem lína $i$ er
 annaðhvort left ef að mætingarlistinn
 var látinn ganga frá vinstri til hægri í röð $i$, en right annars.


Stigagjöf
---------




|  |  |  |
| --- | --- | --- |
| Hópur | Stig | Takmarkanir |
| 1 | 10 | $4 \leq n \leq
 50$ |
| 2 | 90 | Engar frekari takmarkanir |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
6 2 3
benni arnar unnar
bjarki atli hannes
benni
arnar
unnar
hannes
atli
bjarki

```
 | 
```
left
right

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
4 2 2
patryk anna
karl unnsteinn
patryk
anna
karl
unnsteinn

```
 | 
```
left
left

```
 |


