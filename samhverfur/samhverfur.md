
Sigga litla hefur mikið vera að fylgjast með þróun
 skammtatölva. Henni finnst stafa ógn af þessum tölvum því að
 þær geta brotið RSA dulritunarkerfið, sem er byggt á frumtölum,
 og er notað mjög víða við að dulrita samskipti á internetinu í
 dag. Ef ekki er búið að skipta um dulritunarkerfi þegar fyrsta
 alvöru skammtatölvan lítur dagsins ljós, þá mun enginn vera
 öruggur á netinu!


Sigga litla tekur þetta mjög nærri sér og ákveður að búa til
 sitt eigið dulritunarkerfi. Í staðinn fyrir að notast við
 frumtölur ákveður hún að nota samhverfur. Tala er samhverfa ef
 hún er eins hvort sem maður les hana aftur á bak eða áfram. Til
 dæmis eru 5, 11, 121 og 9779 samhverfur.


Til að athuga öryggi dulkerfisins þarf hún lista af
 samhverfum af misstórum stærðum. Hún biður þig um að finna,
 fyrir hvert $k$ á milli
 $1$ og $100$, stærstu samhverfuna sem er ekki
 stærri en $2^ k$.


Inntak
------


Það er ekkert inntak.


Úttak
-----


Fyrir hvert $k$ á milli
 $1$ og $100$ má vera ein lína sem inniheldur
 tvær heiltölur: $k$ og
 stærsta samhverfan sem er ekki stærri en $2^ k$. Línurnar mega koma í hvaða röð
 sem er, og ekki þarf að skrifa út línu fyrir öll möguleg
 $k$ (en því fleiri línur,
 því fleiri stig).


Stigagjöf
---------


Lausnin fær eitt stig fyrir hvert $k$ sem kemur fyrir í úttakinu og
 hefur rétt svar.


Útskýring á sýnidæmum
---------------------


Í sýnidæminu inniheldur úttakið fimm línur, ein fyrir hvert
 $k$ í $\{ 1,4,3,10,6\} $. Hér sjáum við að
 ekki er skrifuð út lína fyrir hvert $k$ á milli $1$ og $100$, heldur bara fyrir fimm tölur.
 Þegar $k=4$, þá á seinni
 heiltalan að vera stærsta samhverfan sem er ekki stærri en
 $2^4 = 16$, en hún er
 einmitt $11$. Lausn sem
 skrifar þetta úttak fær því eitt stig fyrir $k=4$. Á sama hátt sjáum við að hún
 fengi þrjú stig í viðbót fyrir $k$ í $\{ 1,3,10\} $. Fyrir $k=6$ á seinni talan að vera stærsta
 samhverfan sem er ekki stærri en $2^6 = 64$. Í þessu úttaki er skrifuð
 út talan $44$, en svarið
 er $55$ fyrir þetta
 $k$. Lausnin fær því ekki
 stig fyrir þetta $k$. Í
 heildina myndi lausn sem skrifar þetta úttak fá $4$ stig.




| Sample Input 1 | Sample Output 1 |
| --- | --- |
|  | 
```

1 2
4 11
3 8
10 1001
6 44

```
 |


