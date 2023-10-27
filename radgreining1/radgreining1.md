

![/problems/iceland.radgreining1/file/statement/is/img-0001.png](/problems/iceland.radgreining1/file/statement/is/img-0001.png)

 Mynd fengin af [Wikipedia](https://en.wikipedia.org/wiki/File:2019-nCoV-CDC-23312_without_background.png), public domain
 
Þú vinnur á rannsóknarstofu þar sem verið er að raðgreina
 erfðamengi veirunnar 2019-nCoV, betur þekkt sem Kórónaveiran.
 Með raðgreiningu er verið að finna út hvernig DNA röð veirunnar
 lítur út, en DNA röð veirunnar er strengur af lengd
 $n$ sem inniheldur stafina
 G, T,
 A og C.
 Aðferðin sem rannsóknarstofan þín notar til að raðgreina
 getur aðeins fundið smá bút af DNA röðinni í einu. Sem dæmi, ef
 DNA röð veirunnar er af lengd $6$, þá væri hægt að nota aðferðina
 til að greina DNA bútinn sem byrjar á staf $1$ og endar á staf $4$ í DNA röð veirunnar, og svo greina
 DNA bútinn sem byrjar á staf $3$ og endar á staf $6$ í DNA röð veirunnar. Ef fyrri
 greiningin skilaði DNA bútinum GCAT
 og seinni greiningin DNA bútinum ATTC, þá væri hægt að leiða það út að DNA röð
 veirunnar er í raun GCATTC.


Á þennan hátt er búið að raðgreina mismunandi búta af DNA
 röð veirunnar sem byrja á mismunandi stöðum, og það eina sem á
 eftir að gera er að taka bútana saman og finna hver DNA röð
 veirunnar er í heild sinni.


Gefnir þeir bútar sem búið er að greina, og hvar hver bútur
 byrjar í DNA röð veirunnar, skrifaðu forrit sem setur þá saman
 og finnur út eins mikið af DNA röð veirunnar og hægt er.


Inntak
------


Fyrsta línan í inntakinu inniheldur tvær heiltölur
 $n$ og $m$ ($1
 \leq n, m \leq 500$), lengdin á DNA röð veirunnar og
 fjöldi búta sem búið er að raðgreina.


Svo fylgja $m$ línur,
 ein fyrir hvern bút sem búið er að raðgreina. Hver af þessum
 línum byrjar á heiltölu $s$ ($1
 \leq s \leq n$), staðsetningin í DNA röð veirunnar þar
 sem þessi bútur byrjar, og svo fylgir búturinn sjálfur, sem er
 strengur af lengd $k$
 ($1\leq k \leq n-s+1$) sem
 inniheldur stafina G, T, A og C.


Úttak
-----


Skrifið út eina línu sem inniheldur stafina í DNA röð
 veirunnar. Ef margir möguleikar koma til greina fyrir ákveðinn
 staf í DNA röðinni, táknið þá þann staf sem ‘?’. Ef eitthvað misræmi kemur upp, eins og að
 ákveðinn stafur í DNA röðinni hefur mismunandi gildi í
 mismunandi bútum, þá á bara að skrifa út eina línu sem
 inniheldur Villa.


Stigagjöf
---------




|  |  |  |
| --- | --- | --- |
| Hópur | Stig | Takmarkanir |
| 1 | 33 | $m=1$ |
| 2 | 33 | Engin misræmi koma upp |
| 3 | 34 | Engar frekari takmarkanir |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
9 3
1 GCAT
3 ATTC
7 AAC

```
 | 
```
GCATTCAAC

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
10 2
3 AAAA
8 GGG

```
 | 
```
??AAAA?GGG

```
 |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| 
```
10 2
3 AAAA
6 GGG

```
 | 
```
Villa

```
 |


