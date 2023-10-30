

![/problems/iceland.minesweeper/file/statement/is/img-0001.jpg](/problems/iceland.minesweeper/file/statement/is/img-0001.jpg)

 Minesweeper
 

Arnar er ótrúlega góður í **Minesweeper** enda hefur hann verið að spila
 leikinn frá 1989. Vinur hans Bjarki er alltaf að segja að það
 sé ekkert merkilegt.



> 
>  Bjarki: “Hver sem er getur verið góður í Minesweeper.”  
> 
>  Arnar: “Ef það er svona létt sannaðu það þá, æfðu þig og
>  kepptu svo við mig.”  
> 
> 


Bjarki tók þessu mjög illa og fór strax að æfa sig í
 **Minesweeper**.


Eftir margar vikur af æfingu varð Bjarki ekkert betri í
 **Minesweeper**. Hann einfaldlega hefur
 ekki rökhugsunina í svona flókinn leik. Þannig hann fer inná
 hackers.com og niðurhalar hakki fyrir
 **Minesweeper**. Hakkið virkar þannig að
 hann lætur það fá leikinn og það gefur út $k$ pör af tölum. Hvert par
 $y\_ i,x\_ i$ táknar röðina
 og dálkinn þar sem sprengjan er staðsett.


Bjarki nennir ekkert að finna út hvar þessar staðsetningar
 eru í Minesweeper. Þetta er bara ennþá meiri hausverkur. Getur
 þú hjálpað Bjarka og teiknað upp Minesweeper borðið. Reitir sem
 eru ekki með sprengju eru táknaðir með . (punkti). Reitir sem eru með sprengju eru
 táknaðir með \* (stjörnu).


Inntak
------


Fyrsta línan inniheldur þrjár heiltölur $1 \le n,m \le 250$, $1 \le k \le n \cdot m$, þar sem
 $n$ táknar fjölda raða og
 $m$ táknar fjölda dálka í
 **Minesweeper** leikborðinu, go
 $k$ segir til um fjölda
 para sem hakkaraforritið fann. Næstu $k$ línur innihalda tvær heiltölur
 $1 \le y\_ i \le n$,
 $1 \le x\_ i \le m$.


Úttak
-----


Skrifaðu út borðið í heild sinni. Úttakið skal samanstanda
 af $n$ línum og hver lína
 skal innihalda $m$
 stafi.


Stigagjöf
---------




|  |  |  |
| --- | --- | --- |
| Hópur | Stig | Takmarkanir |
| 1 | 40 | $1 \le n,m \le
 15$ |
| 2 | 60 | Engar frekari takmarkanir |




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| 
```
4 3 3
1 1
1 2
1 3

```
 | 
```
***
...
...
...

```
 |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| 
```
3 3 8
1 1
1 2
1 3
2 1
2 3
3 1
3 2
3 3

```
 | 
```
***
*.*
***

```
 |


