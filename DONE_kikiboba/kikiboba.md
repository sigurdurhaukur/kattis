
“Kiki” and “boba” form a fascinating sound\-symbolic
 connection, where people spontaneously associate sharp sounds
 like “kiki” with jagged shapes and
 softer sounds like “boba” with
 rounder shapes. This reveals an underlying link between sounds
 and visual properties, providing insight into how our brains
 intuitively create meaning and associations.


Fergus has long held a keen interest in phonetics, and based
 on this sound\-symbolic connection, he has developed a theory!
 He believes that all words can be categorized into 4
 categories. In other words, each word is either a word
 corresponding to the figure on the left, like “kiki”, or a word corresponding to the figure on
 the right, like “boba”, or a word
 that is a combination of both, or a word that is none of the
 aforementioned alternatives.




![\includegraphics[width=0.6\textwidth ]{kikiboba.png}](/problems/kikiboba/file/statement/en/img-0001.png)

**Figure 1**: Figure to the left is commonly
 associated with "kiki". Figure to the right is commonly
 associated with "boba".
 


Fergus determines that a word belongs to a category
 according to the following rules: If there are more “b” than “k” in the
 word, then the word is a “boba” word.
 If there are more “k” than
 “b” in the word, then the word is a
 “kiki” word. If the word contains an
 equal number of “b” and “k”, then Fergus calls it a “boki” word. These rules hold with one
 exception: If there are no “b” and
 “k” in the word, the word is neither
 close to a “boba” word nor a
 “kiki” word. In this case, Fergus
 refers to the word as a “none”
 word.


Help Fergus write a program that, given a word, can
 categorize the word according to Fergus’ rules.


Input
-----


The only line of the input contains a string consisting of
 characters “a”\-“z”, the word that Fergus wants to
 categorize.


Output
------


Print a category: either “boba”,
 “kiki”, “boki” or “none”,
 according to Fergus’ rules stated above. There is always one
 category that fits each word.


Points
------


Your solution will be tested on several test case groups. To
 get the points for a group, it must pass all the test cases in
 the group.




| **Group** | **Point value** | **Constraints** |
| --- | --- | --- |
| $1$ | $20$ | The word is only one character long. |
| $2$ | $50$ | The word has atleast one of either “k” or “b”, but  never both at the same time. |
| $3$ | $30$ | No additional constraints. |


Explanation of sample 1
-----------------------


The word contains 2 “b”, while
 there are none of “k”. In other words
 there are more of “b” than
 “k”, which means that the answer is
 “boba”.


Explanation of sample 3
-----------------------


The word contains 1 “b” and 1
 “k”. There are an equal number of
 “b” and “k”, which means the answer is “boki”.




| Sample Input 1 | Sample Output 1 |
| --- | --- |
| ``` boba  ``` | ``` boba  ``` |




| Sample Input 2 | Sample Output 2 |
| --- | --- |
| ``` kiki  ``` | ``` kiki  ``` |




| Sample Input 3 | Sample Output 3 |
| --- | --- |
| ``` kobra  ``` | ``` boki  ``` |




| Sample Input 4 | Sample Output 4 |
| --- | --- |
| ``` ljus  ``` | ``` none  ``` |


