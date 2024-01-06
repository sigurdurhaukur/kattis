
Karen þarf að fara yfir krossapróf nokkurra nemenda. Fyrir
 hverja spurningu er nákvæmlega eitt svar rétt. Allar
 spurningarnar hafa sama vægi og ekki er dregið frá fyrir röng
 svör. Kareni finnst ekki gaman að fara yfir þetta próf í
 höndunum og hefur því búið til lítið forrit þar sem nemendurnir
 merkja kross við svar í hverri spurningu. Forritið er hannað
 þanning að ekki er unnt að skila prófinu nema merkt sé við
 nákvæmlega einn kross í hverri spurningu. Hjálpið Kareni að
 reikna út einkunn hvers nemenda.


Inntak
------


Í fyrstu línu eru tvær heiltölur $S$ og $N$ sem standa fyrir fjölda spurninga
 á prófinu og fjöldi nemenda. Í næstu línu er svarlykillinn
 fyrir prófið, stórir bókstafir á bilinu A til Z aðskilnir með
 bili, þar sem t.d. A D E þýðir að
 svörin við spurningum $1$,
 $2$ og $3$ á þriggja spurninga prófi eru
 A, D og
 E hver um sig í þeirri röð sem um var
 getið. Þar á eftir fylgja $2N$ línur fyrir svör nemendanna.
 Fyrst kemur lína með nafni nemandans, lengd nafnsins er mesta
 lagi $20$ stafir, og síðan
 lína með svörum nemandans á sama formi og svarlykillinn.


Úttak
-----


Ein lína fyrir hvern nemanda með nafni nemandans og einkunn
 hans. Einkunnir nemandanna eru á skalanum $0$ til $10$ og skal skrifa þær út í þeirri
 röð sem nemendurnir eru gefnir í inntakinu. Einkunnir eru
 gefnar í heilum og hálfum með nákvæmlega einum aukastaf og
 námundað upp í óvissu, t.d. gæfi $8.25$ einkunina $8.5$ en $7.24$ gæfi einkunina $7$.


Stigagjöf
---------




|  |  |  |
| --- | --- | --- |
| Hópur | Stig | Takmarkanir |
| 1 | 100 | $1 \leq S \leq 5 \cdot
 10^3, 1 \leq N \leq 100$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
5 3
C C C C B
Valdi
C C C C B
Arnkell
C C C C A
Emma
C C B B A

```
 | 
```
Valdi: 10.0
Arnkell: 8.0
Emma: 4.0

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
10 5
C A C D B C C A D C
Gunnar
C C B C D A A C D D
Agla
C A C D B C C A D C
Abela
A A D A D A C A B C
Herluf
C A B D C C C D D A
Britt
C C D D A C C D C C

```
 | 
```
Gunnar: 2.0
Agla: 10.0
Abela: 4.0
Herluf: 6.0
Britt: 5.0

```
 |


