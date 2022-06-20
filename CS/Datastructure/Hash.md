# ❤️ Introduction

<table>
    <th><img src="./img/hash.png?raw=true" style="background-color: white;"></th>
    <th><img src="./img/hash1.png?raw=true" width="150px" height="300px"></th>
</table>

- A data structure to save and search a data by transforming key to address


- __Keys__ -> __Hash Function__ -> __Bucket__ of __Hash Table__

- "John Smith" -> $H(John\ Smith)$ -> 02

---

## 🧡 Terminologies

- ___Hash Table___ is a data structure to map key to values using a ___hash function___ to map _large_ or even non-Integer keys into a small _range_ of Integer indices.

|💖|Term|Discription|
|-|-|-|
|1.|__key__|$k$ - input data|
|2.|__hash function__|the function $H$|
|3.|__hash or home address__|the result of $H(k)$|
|4.|__home bucket__|the space that the __home address__ is saved</br> Each bucket consists of __$s$ slot__|
|5.|__hash table__|$ht[0], ... , ht[b-1]$</br>the set of __buckets__|
|6.|__collision__|the case s.t given diffrent keys $k_1, k_2$, result to $H(k_1) = H(k_2)$|

### 💖 Hash Function

- Hash function의 미덕
  - Use of hash functions relies on statistical properties of key and function interaction

  - 계산이 쉽고 충돌이 적어야 한다 (Low collision probability)

  - 충돌 확률이 높을 수록 검색 비용이 증가한다 (시간 복잡도가 증가, not $O(1)$)

  - 각각의 버킷에 임의의 k가 대응될 확률이 모두 같으면, Hash function is called __uniform hash function__. (search - $O(1)$)

- Example)
  - Keys of data : $12, 4, 23, 7, 3$
  - Hash function : $H(k) = k\ mod\ 7$
  - Each bucket size : one __slot__
  - Hash table, $ht$ =
    |home address|bucket|
    |:-:|-:|
    |0|7|
    |1||
    |2|23|
    |3|3|
    |4|4|
    |5|12|
    |6||

- 💖 Hash functions
  - Division : using %, modular operator
  - Mid-Square : using mid-bit of two square of key
  - Folding
    - Shift folding : divide key into partitions with same length except for last partition
    - Folding at the boundaries : after shift folding, fold the boundaries partition reversed
  - Digit analysis
  - etc.

### 💖 Collision (Bucket Overflow)

- Example 1)
  - Keys of data : $23, 9$
  - Hash function : $H(k) = k\ mod\ 7$
  - Each bucket size : one __slot__
  - Hash table : $ht=$
    |home address|bucket|
    |:-:|-:|
    |...||
    |2|23, <b style="color: red">9</b>|
    |...||

- Example 2)
  - Keys of data : $12, 4, 23, 7, 3, 9, 18, 27, 32$
  - Hash function : $H(k) = k\ mod\ 7$
  - Each bucket size : two __slot__
  - Hash table : $ht=$
    |home address|slot1|slot2|
    |:-:|-:|-:|
    |0|7||
    |1|||
    |2|23|9|
    |3|3||
    |4|4|18, <b style="color: red">32</b>|
    |5|12||
    |6||27|

💖 __Collision Resolution (Bucket overflow Handling)__

- Open addressing
  - Linear probing
  - etc.
- Closed addressing
  - Chaining
  - etc.

---

## 💛 Representations

💖 Identifier|Additive Transformation|x|Hash ($H(k) = k\ mod\ 13$)|
|:-:|-|-|-|
|for|102(66H) + 111(6FH) + 114(72H)|327|2|
|do|100 + 111|211|3|
|while|119 + 104 + 105 + 108 + 191|537|4|
|if|105 + 102|207|12|
|else|101 + 108 + 115 + 101|425|9|
|function|102 + 117 + 110 + 99 + 116 + 105 + 111 + 110|370|12|

### 👉 Hash table with Linear probing

- `💖 Key and Hash Table`

```C
typedef struct {
    int key;
    /* other field */
} element;
element* ht[TABLE_SIZE];
```

- `💖 Search(k)`
  - case 1) 'k' is in the hash table
  - case 2) 'k' is not in the hash table
    - case 2-1) the hash table is full
    - case 2-2) the hash table is not full

  |💖|$k$|process|
  |-|-|-|
  |__case 1__|6</br>12|<img src="./img/hashlinearsearch1-1.png?raw=true"></br><img src="./img/hashlinearsearch1-2.gif?raw=true">|
  |__case 2-1__|18|<img src="./img/hashlinearsearch2-1.gif?raw=true">|
  |__case 2-2__|18|<img src="./img/hashlinearsearch2-2.gif?raw=true">|

```C
element* search(int k){
    /*
        search the linear probing hash table ht(with one slot) for k, 
        if a pair with key k is found, return a pointer to this pair, 
        otherwise return NULL.
    */
    int homeBucket, currentBucket;
    
    // save hash address of k
    homeBucket = h(k);

    for(currentBucket=homeBucket;
        ht[currentBucket] &&
        ht[currentBucket]->key != k;
        )
    {
        // circular iterator
        currentBucket = (currentBucket + 1) % b;

        // case 2-1 -> NULL
        if(currentBucket == homeBucket)
            return NULL;
    }

    // case 1 -> the pointer to element
    if(!ht[currentBucket])
        if(ht[currentBucket]->key -= k)
            return ht[currentBucket];
    
    // case 2-1 -> NULL
    return NULL;
}
```

### 👉 Hash table with Chaining

- <img src="./img/hashlinearproblem.png?raw=true" width="200px" height="200px">

  - Problem of Linear Probing
    - The more collision is, the larger time complexity of search() could be

</br>

- <img src="./img/hashchaining.png?raw=true" width="200px" height="200px">

  - Chaining can be a resolution

</br></br>

- `💖 Key and Hash Table`

```C
typedef struct {
    int key;
    /* other field */
} element;
typedef struct list *nodePointer;
typedef struct list{
    element data;
    nodePointer link;
};
nodePointer ht[TABLE_SIZE];
```

- `💖 search(k)`

```C
element* search(int k){
    nodePointer current;
    int homeBucket = h(k);

    for(current = ht[homeBucket]; current; current = current->link){
        if(current->key == k)
            return &current->data;
    }
    
    return NULL;
}
```

---

## 💚 Application

- Secure Hash Algorithm (SHA) - [Wikipedia](https://en.wikipedia.org/wiki/SHA)