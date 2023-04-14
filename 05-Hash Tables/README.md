---
typora-copy-images-to: ./..\img
---



## Applications

- **Spell checkers**: quickly look up a word amongst tens of thousands of words in less than a second
- **Dictionaries**: quickly look up a word and find it's translation in another language
- **Compilers**: quickly look up the address of functions and variables
- **Code editors**: literally anywhere you want to look up an item super fast



## Implementations in different languages

|  language  | Implementation |
| :--------: | :------------: |
|    Java    |    HashMap     |
| JavaScript |     Object     |
|   Python   |   Dictionary   |
|     C#     |   Dictionary   |



## Overview

![image-20230405214445371](../img/image-20230405214445371.png)



![image-20230405214501557](../img/image-20230405214501557.png)



## Operations

| Operation | Complexity |
| :-------: | :--------: |
|  Insert   |   $O(1)$   |
|  Lookup   |   $O(1)$   |
|  Delete   |   $O(1)$   |



## Collisions

![image-20230413153723412](../img/image-20230413153723412.png)

- **Chaining**

![image-20230413154050270](../img/image-20230413154050270.png)



- **Open Addressing**

![](../img/image-20230413154455384.png)



![image-20230413154738608](../img/image-20230413154738608.png)



![image-20230413155158934](../img/image-20230413155158934.png)



## Summary

- To store key/value pairs

- Insert, remove, lookup in $O(1)$

- Hash function

- Collision

   - Chaining
   
  - Open addressing
  
    
