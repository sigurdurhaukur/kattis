

![/problems/iceland.bladra/file/statement/is/img-0001.png](/problems/iceland.bladra/file/statement/is/img-0001.png)

 Blöðrur
 

Í Forritunarkeppni Framhaldsskólanna fá öll lið blöðru fyrir
 hvert dæmi sem þau leysa, en blöðrurnar eru í mismunandi litum
 eftir því hvaða dæmi var leyst.


Í ár verða $k$ dæmi.
 Því þarf að ráða $k$
 starfsmenn til að blása blöðrur. Hver starfsmaður mun blása
 eina blöðru fyrir hvert lið sem leysir dæmið hans.


Hannes var einn af þeim sem var ráðinn til að blása blöðrur
 í ár og mikið þurfti hann að blása því svo margir leystu dæmið
 hans. Þetta finnst honum ósanngjarnt þar sem hann var á sömu
 launum og allir hinir starfsmennirnir.


Eftir keppnina pælir Hannes:



> 
>  Hvaða dæmi hefði ég getað fengið þannig ég hefði þurft að
>  blása sem minnst?
>  


Getur þú svarað þessari spurningu fyrir Hannes?


Inntak
------


Fyrsta lína inniheldur tvær heiltölur $1 \le k,q \le 10^5$, þar sem
 $k$ táknar fjölda dæma og
 $q$ táknar hversu mörg
 dæmi voru leyst í heildina. Næst fylgja $q$ línur, hver með tvær heiltölur
 $1 \le a\_ i \le 10^5, 1 \le b\_ i
 \le k$ sem táknar að lið númer $a\_ i$ leysti dæmi $b\_ i$. Ekkert lið leysir sama dæmi
 oftar en einu sinni.


Úttak
-----


Skrifaðu út eina heiltölu, minnsta fjölda blaðra sem Hannes
 hefði þurft að blása.


Stigagjöf
---------




|  |  |  |
| --- | --- | --- |
| Hópur | Stig | Takmarkanir |
| 1 | 50 | $1 \le k,q,a\_ i \le
 100$ |
| 2 | 50 | Engar frekari takmarkanir |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
2 3
1 1
2 1
3 2

```
 | 
```
1

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
3 5
1 1
2 1
3 1
4 1
5 2

```
 | 
```
0

```
 |


