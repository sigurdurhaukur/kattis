

![/problems/iceland.mylla/file/statement/is/img-0001.png](/problems/iceland.mylla/file/statement/is/img-0001.png)

 Fullkomin mylla
 

Arnar og Hannes eru mjög keppnissamir vinir og elska að
 keppa á móti hvor öðrum. Þeir eru alltaf að leita að nýjum
 leikjum til að keppa í og ekki verra ef það eru leikir sem
 krefjast mikillar hugsunar.


Hannes fann nýja gerð af myllu sem kallast *Fullkomin
 mylla* og taldi að hann ætti góðan möguleika á að sigra
 Arnar í þessum leik. Hann fór því til Arnars og spurði hvort
 hann væri til í að keppa. Arnar sagðist vera til í að keppa en
 aðeins ef að sá sem tapar myndi borga fyrir matinn næst þegar
 þeir færu á American Style.


Til að vera vissir um að betri leikmaðurinn vinnur, og að
 það sé ekki heppni sem ráði úrslitunum, þá ákveða þeir að spila
 nokkrar lotur, og sá sem er fyrr að vinna $n$ lotur vinnur veðmálið. Hver lota
 mun samanstanda af $5$
 leikjum af Fullkomnri myllu, og sá sem vinnur fleiri af þessum
 $5$ leikjum vinnur
 lotuna.


Að auki ætla þeir ekki að eyða tíma í óþarfa leiki. Sér í
 lagi munu þeir stoppa lotuna um leið og það er kominn
 sigurvegari fyrir lotuna. Til dæmis, ef Arnar vinnur fyrstu
 þrjá leikina í lotu, þá munu þeir ekki spila fleiri leiki í
 þessari lotu, af því Arnar mun vinna lotuna sama hver úrslitin
 í síðustu tveimur leikjunum verða.


Reglur
------


Fullkomin mylla er spiluð þannig að búin er til ein stór
 mylla og síðan í hverjum reit á stóru myllunni er lítil mylla.
 Spilarar skiptast á að gera og velja reiti í litlu myllunum til
 að spila í þangað til að kominn er upp mylla. Ef að spilara
 tekst að ná myllu í lítilli myllu þá er sá reitur í stóru
 myllunni orðinn að tákni þess spilara. Ef spilara tekst að ná
 myllu í stóru myllunni vinnur hann leikinn.


Spilari $1$ byrjar og
 getur valið hvaða reit sem er í stóru myllunni til að spila í,
 og velur síðan reit í litlu myllunni sem er þar. Eftir það þarf
 Spilari $2$ að setja í
 reit í stóru myllunni sem samsvarar reitnum í litlu myllunni
 sem Spilari $1$ valdi. Ef
 það er komin mylla í þeim reit þá má Spilari $2$ velja hvaða reit sem er til að
 spila í. Þetta endurtekur sig síðan þangað til annar hvor
 einstaklingurinn nær stórri myllu eða enginn getur unnið og þar
 af leiðandi er jafntefli.


Inntak
------


Fyrsta línan inniheldur heiltölu $N$ sem er fjöldi lota sem þarf að
 vinna til þess að vinna veðmálið. Næsta lína inniheldur streng
 $S$ sem lýsir því hver
 sigraði hvern leik, A ef Arnar vann og H ef Hannes vann. Gera
 má ráð fyrir að engin jafntefli hafi komið upp, og að
 strengurinn lýsi nákvæmlega þeim leikjum sem voru spilaðir, í
 þeirri röð sem þeir voru spilaðir.


Úttak
-----


Prentið út hver tapaði veðmálinu.


Útskýring á sýnidæmum
---------------------


Í fyrra sýnidæminu þá vinnur sá sem er fyrr að vinna
 $2$ lotur. Svona fara
 leikirnir fram:


1. Fyrsta lota byrjar. Arnar vinnur fyrsta leikinn í
 þessari lotu.
2. Hannes vinnur annan leikinn.
3. Arnar vinnur þriðja leikinn. Staðan er núna 2-1 fyrir
 Arnari, en Hannes á enn séns á að vinna, svo þeir halda
 áfram.
4. Hannes vinnur fjórða leikinn.
5. Arnar vinnur fimmta leikinn, og vinnur Arnar því fyrstu
 lotuna 3-2.
6. Önnur lota byrjar. Arnar vinnur fyrsta leikinn.
7. Arnar vinnur líka annan leikinn.
8. Hannes kemur nú sterkur inn, og vinnur þriðja
 leikinn.
9. Hannes vinnur fjórða leikinn.
10. Hannes er á dúndur ferð, vinnur fimmta leikinn, og
 vinnur því aðra lotuna 3-2. Nú hafa báðir unnið eina
 lotu.
11. Þriðja lota byrjar. Hannes vinnur fyrsta leikinn.
12. Arnar vinnur annan leikinn.
13. Hannes vinnur þriðja leikinn.
14. Arnar vinnur fjórða leikinn.
15. Arnar vinnur fimmta leikinn, og vinnur því lotuna 3-2.
 Nú hefur Arnar unnið tvær lotur, og er því sigurvegari!


Í seinna sýnidæminu þá vinnur sá sem er fyrr að vinna
 $2$ lotur. Svona fara
 leikirnir fram:


1. Fyrsta lota byrjar. Hannes vinnur fyrsta leikinn.
2. Hannes vinnur annan leikinn.
3. Hannes er á dúndur ferð, og vinnur líka þriðja leikinn.
 Nú er Hannes kominn með þrjú stig, en það eru bara tveir
 leikir eftir í þessari lotu. Arnar hefur því engan kost á
 að vinna þessa lotu, og því vinnur Hannes þessa lotu
 3-0.
4. Önnur lota byrjar. Arnar vinnur fyrsta leikinn, og
 vinnur þá líka smá virðingu til baka eftir rústið hjá
 Hannesi í fyrstu lotu.
5. Hannes lætur þetta ekki á sig hafa, og vinnur annan
 leikinn.
6. Hannes er kominn sterkur aftur inn, og vinnur þriðja
 leikinn.
7. Hannes kastar, og hann SKORAR! Hann vinnur fjórða
 leikinn. Hann er því kominn með þrjú stig í þessari lotu,
 en Arnar aðeins eitt. Það er bara einn leikur eftir, og
 sama hvernig hann fer mun Hannes vinna þessa lotu. Þeir
 stoppa því þessa lotu og Hannes vinnur hana 3-1. Hannes
 hefur nú unnið tvær lotur, og vinnur því veðmálið.


Stigagjöf
---------


Lausnin mun verða prófuð á miserfiðum inntaksgögnum, og er
 gögnunum skipt í hópa eins og sýnt er í töflunni að neðan.
 Lausnin mun svo fá stig eftir því hvaða hópar eru leystir.




|  |  |  |  |
| --- | --- | --- | --- |
| Hópur | Stig | Inntaksstærð | Önnur skilyrði |
| 1 | 50 | $ 1 \le N \le
 1000$ | Engin lota klárast snemma (allar lotur tóku nákvæmlega 5
 leiki) |
| 2 | 50 | $ 1 \le N \le
 1000$ |  |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```

2
AHAHAAAHHHHAHAA

```
 | 
```

Hannes

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```

2
HHHAHHH

```
 | 
```

Arnar

```
 |


