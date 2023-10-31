

![/problems/iceland.egelskahann/file/statement/is/img-0001.png](/problems/iceland.egelskahann/file/statement/is/img-0001.png)

 Fyrsta sýnidæmið
 
Gunna litla var mjög hrifin af Jóni litla. Hún sveiflaði
 sér í rólunni, horfði á Jón leika sér með hinum börnunum og
 skoðaði blómið sitt. Jón talar aldrei við hana. Hún heldur
 fastar um blómið sitt.

 Hún ætlar að leyfa blóminu að ákveða hvort hún fari að tala
 við hann eða ekki. Hún byrjar á að númera laufblöðin á blóminu
 frá $1$ upp í $N$ rangsælis, þar sem $N$ er fjöldi laufblaða.


Hún byrjar hjá laufblaði númer $1$ og segir “Hann elskar mig”. Hún
 lætur þetta laufblað vera, og heldur áfram á blað númer
 $2$. Þá segir hún “Hann
 elskar mig ekki” og rífur blaðið af. Svo fer hún á blað númer
 $3$, segir “Hann elskar
 mig”. Hún heldur svona áfram, segir “Hann elskar mig” og “Hann
 elskar mig ekki” til skiptis, og rífur blaðið sem hún er á af
 þegar hún segir “Hann elskar mig ekki”. Þetta gerir hún, hring
 eftir hring, þar til aðeins eitt laufblað er eftir.


Getur þú talið með Gunnu, og sagt henni númerið á síðasta
 laufblaðinu?


Inntak
------


Heiltalan $1 \leq N$,
 fjöldi laufblaða á blóminu til að byrja með.


Úttak
-----


Ein lína með númerinu á laufblaðinu sem eftir stendur.


Útskýring á sýnidæmum
---------------------


Gunna gerir eftirfarandi í fyrsta sýnidæminu:


* Hún byrjar á laufblaði $1$, og segir “Hann elskar
 mig”.
* Hún fer á laufblað $2$, segir “Hann elskar mig ekki”,
 og rífur laufblaðið af.
* Hún fer á laufblað $3$, og segir “Hann elskar
 mig”.
* Hún fer á laufblað $4$, segir “Hann elskar mig ekki”,
 og rífur laufblaðið af.
* Hún fer á laufblað $5$, og segir “Hann elskar
 mig”.
* Hún fer á laufblað $1$, segir “Hann elskar mig ekki”,
 og rífur laufblaðið af.
* Hún fer á laufblað $3$, og það er síðasta
 laufblaðið.


Stigagjöf
---------


Lausnin mun verða prófuð á miserfiðum inntaksgögnum, og er
 gögnunum skipt í hópa eins og sýnt er í töflunni að neðan.
 Lausnin mun svo fá stig eftir því hvaða hópar eru leystir.




|  |  |  |
| --- | --- | --- |
| Hópur | Stig | Inntaksstærð |
| 1 | 20 | $N \le 10$ |
| 2 | 40 | $N \le 1000$ |
| 3 | 40 | $N \le 10^6$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```

5

```
 | 
```

3

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```

10

```
 | 
```

5

```
 |


