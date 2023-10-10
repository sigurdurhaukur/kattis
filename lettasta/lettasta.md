

![/problems/iceland.lettasta/file/statement/is/img-0001.jpg](/problems/iceland.lettasta/file/statement/is/img-0001.jpg)

 Stigatafla
 

Jói litli er að taka þátt í Forritunarkeppni
 Framhaldsskólanna í fyrsta skipti. Liðið hans er í stökustu
 vandræðum með að leysa dæmin, og er enn sem komið er ekki búið
 að leysa neitt dæmi. Núna starir Jói litli bara á stigatöfluna
 með öfundaraugum.


En þá fær hann hugmynd. Kannski er liðið hans bara ekki búið
 að vera að reyna við léttu dæmin. Hann ákveður að nýta
 stigatöfluna til að finna einfaldasta dæmið, og hann hugsar að
 einfaldasta dæmið sé líklega það dæmi sem hefur gefið flest
 stig samtals.


En stigataflan er stór, svo Jói litli sér að maður verður að
 nota forritun til að finna einfaldasta dæmið. En hann er ekki
 nógu klár í forritun, og biður þig því um hjálp. Viltu ekki
 hjálpa Jóa litla?


Inntak
------


Á fyrstu línu er jákvæða heiltalan $N$ sem táknar fjölda dæma í
 stigatöflunni. Á annarri línu er jákvæða heiltalan $M$ sem táknar fjölda liða í
 stigatöflunni. Á þriðju línu eru nöfnin á dæmunum $N$, aðskild með bili. Nöfnin eru
 mismunandi og samanstanda af enskum lágstöfum. Þar eftir fylgja
 $M$ línur, ein fyrir hvert
 lið. Lína hvers liðs samanstendur af $N$ heiltölum á bilinu $0$ til $100$ sem tákna fjölda stiga sem liðið
 hefur fyrir samsvarandi dæmi. Það er, stigin eru gefin upp í
 sömu röð og nöfnin á dæmunum.


Úttak
-----


Skrifið út eina línu með nafninu á dæminu sem hefur gefið
 flest stig samtals.


Útskýring á sýnidæmum
---------------------


Í sýnidæminu eru þrjú dæmi, frumtolur, lidaskipting og akureyri, og fjögur lið. Fyrsta liðið fékk
 $100$ stig fyrir
 frumtolur, $60$ stig fyrir lidaskipting og engin stig fyrir akureyri. Annað liðið fékk engin stig fyrir
 frumtolur, $80$ stig fyrir lidaskipting og $50$ stig fyrir akureyri. Samtals hafa verið gefin $100+0+10+0=110$ stig fyrir frumtolur, $60+80+90+0=230$ stig fyrir lidaskipting og $0+50+10+0=60$ stig fyrir akureyri. Við sjáum því að dæmið lidaskipting hefur gefið flest stig samtals, og
 er það því svarið.


Stigagjöf
---------


Lausnin mun verða prófuð á miserfiðum inntaksgögnum, og er
 gögnunum skipt í hópa eins og sýnt er í töflunni að neðan.
 Lausnin mun svo fá stig eftir því hvaða hópar eru leystir.




|  |  |  |
| --- | --- | --- |
| Hópur | Stig | Önnur skilyrði |
| 1 | 10 | $N=1$,
 $M \leq 100$ |
| 2 | 10 | $N=2$,
 $M \leq 100$ |
| 3 | 20 | $N \leq 12$,
 $M=1$ |
| 4 | 20 | $N \leq 12$,
 $M=2$ |
| 5 | 40 | $N \leq 12$,
 $M \leq 500$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```

3
4
frumtolur lidaskipting akureyri
100 60 0
0 80 50
10 90 10
0 0 0

```
 | 
```

lidaskipting

```
 |


