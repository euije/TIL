# ❤️ Introduction

![LinkedList](./img/linkedlist.png)

- Alternative to Array
  - List can solve the problem of overflow and underflow.
- ___Linked List___ is consisting of a group of vertices (nodes) which together represent a sequence.
  - Each vertex(node) is composed of 'a data' and 'a reference (link)' to the next vertex in the sequence.

---

## 🧡 ADT

- List is a sequence of items/data where positional order matter $\{a_0, a_1, ..., a_{N-2}, a_{N-1}\}$.

|💖|operation|discription|
|-|-|-|
|1.|___get(i)___|a trivial operation, return $a_i$|
|2.|___search(v)___|decide if item/data ___v___ exists, return its index or not a non existing index -1)|
|3.|___insert(i, v)___|insert item/data ___v___ at the after node of position/index ___i___, potentially shifting the items from $[i..N-1]$ to their right to make a space|
|4.|___delete(i)___|remove item at position/index ___i___, potentially shifting the items from $[i+1..N-1]$ to their left to close the gap|

---

## 💛 Representations

<details>

<summary>C (node, search, insert, delete)</summary>

### 0. Node

- self-referential structure

``` C
typedef struct node *listPointer;
typedef struct node {
    // declaration of data fields
    listPointer link;
};
```

### 1. search(v)

![Search](./img/listsearch.gif)

- Looping through links

``` C
for(p = L; p != NULL; p = p->link)
    if(p->data == v)
        return p;
```

### 2. insert(i, v)

![Insert](./img/listinsert.gif)

- Needed preceding nodes

``` C
void insert(listPointer *first, int i, Data v) {
    listPointer temp;
    listPointer x = get(i-1);
    MALLOC(temp, sizeof(*temp));
    temp->data = v;

    if(*first){
        temp->link = x->link;
        x->link = temp;
    }
    else{
        temp->link = NULL;
        *fisrt = temp;
    }
}
```

### 3. delete(i)

![Delete](./img/listdelete.gif)

- Needed preceding node

- 'x' is a node indexed by 'i'

``` C
void delete(listPointer *first, listPointer trail, listPointer x){
    /* delete x from list */
    /* trail is the preceding node */

    if(trail){
        trail->link = x->link;
    }
    else{
        *first = (*first)->link;
    }
    free(x);
}
```

- Calling example

  - delete first(head)

    ``` C
    delete(&first, NULL, first);
    ```

  - delete otherwise

    ``` C
    delete(&first, y, y->link);
    ```

</details>

---

## 💚 Applications

- [(Linked) Stack](./Stack.md#-representations)

- [(Linked) Queue](./Queue.md#-representations)

- [Polynomial representation](./Polynomial.md)

---

## 💙 Variations

- [LinkedList with a header node](./LinkedListVariations.md#-1-linkedlist-with-a-header-node)

- [Circularly LinkedList](./LinkedListVariations.md#-2-circularly-linkedlist)

- [Doubly LinkedList](./LinkedListVariations.md#-3-doubly-linkedlist)
</br>

- [These could be combined each other.](./LinkedListVariations.md#-4-combinations)

  - ex) [Doubly, Circularly LinkedList with a header node](./LinkedListVariations.md#42-doubly--circularly-linkedlist-with-a-header-node)

