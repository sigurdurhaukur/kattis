
Undanfarin ár hafa keppendur fengið að búa til sín eigin lið
 fyrir Forritunarkeppni Framhaldsskólanna, en eins og þið vitið
 mega vera þrír saman í liði. Þetta hefur þó ekki alltaf gengið
 nógu vel því stundum verða einhverjir útundan.
 Skipuleggjendurnir hafa því ákveðið að sjá um liðaskiptingu
 sjálfir, og passa að enginn verði útundan. En þeir átta sig á
 því að það er ekki alltaf hægt að skipta í þriggja manna lið án
 þessa að neinn sé útundan.


Á næsta ári ætla $N$
 manns að keppa í Forritunarkeppni Framhaldsskólanna. Geturðu
 hjálpað skipleggjendunum með að athuga hvort það sé hægt að
 skipta $N$ manns í þriggja
 manna lið þannig að enginn sé útundan?


Inntak
------


Ein lína með jákvæðu heiltölunni $N$ sem táknar fjölda manns sem ætla
 að keppa.


Úttak
-----


Ein lína sem inniheldur Jebb ef
 hægt er að skipta $N$
 manns í þriggja manna lið þannig að enginn sé útundan, eða
 Neibb ef það er ekki hægt.


Útskýring á sýnidæmum
---------------------


Í fyrsta sýnidæminu ætla $N=3$ manns að keppa. Svarið er
 Jebb því það er hægt að búa til eitt
 þriggja manna lið, og þá er enginn útundan.


Í öðru sýnidæminu ætla $N=14$ manns að keppa. Það er ekki
 nægur fjöldi til að búa til fimm þriggja manna lið, og ef það
 eru búin til fjögur lið þá eru tveir manns útundan. Það er því
 ekki hægt að skipta $14$
 manns í þriggja manna lið, og svarið er Neibb.


Í síðasta sýnidæminu ætla $N=300\, 000\, 000\, 000$ manns að
 keppa. Hér er hægt að búa til $100\, 000\, 000\, 000$ þriggja manna
 lið og þá er enginn útundan. Svarið er því Jebb.


Stigagjöf
---------


Lausnin mun verða prófuð á miserfiðum inntaksgögnum, og er
 gögnunum skipt í hópa eins og sýnt er í töflunni að neðan.
 Lausnin mun svo fá stig eftir því hvaða hópar eru leystir.




|  |  |  |
| --- | --- | --- |
| Hópur | Stig | Inntaksstærð |
| 1 | 10 | $N \leq 3$ |
| 2 | 10 | $N \leq 30$ |
| 3 | 20 | $N \leq 30\,
 000$ |
| 4 | 20 | $N \leq
 10^{12}$ |
| 5 | 40 | $N \leq
 10^{100}$ |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```

3

```
 | 
```

Jebb

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```

14

```
 | 
```

Neibb

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```

300000000000

```
 | 
```

Jebb

```
 |


