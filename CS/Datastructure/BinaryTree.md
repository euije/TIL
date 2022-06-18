# 💚 Binary Tree

- ___N-ary tree___ : A tree that each node has at most n-child nodes.

- ___Binary Tree___ : A tree that each node has at most 2 children.

</br>

- ___Full Binary Tree___ : A tree that every node has 2 children except for the leaves.
  - Number of nodes : $2^h-1$

  <img src="./img/binarytree.png" width="450px" height="150px">

- ___Complete Binary Tree___ : A tree __(1)__ satisfying ___Full Binary Tree___ by 'Level $h-2$', __(2)__ and at 'Level $h-1$' possible to remove only from the rightmost leaf.
  - Number of nodes : $2^{h-1} \leq n \leq 2^h-1$

  <img src="./img/binarytreecomplete.png" width="450px" height="150px">

- ___Skewed Binary Tree___ : A tree that has only left or right descendant.
  - Number of nodes : $h$
  
  <img src="./img/binarytreeskewed.png" width="200px" height="200px">

### 👉 Equality between the number of nodes($n$) and height($h$)

- ___Full Binary Tree___
  - $h=log_2(n+1)$, $n=2^h -1$
  - $h=1+log_2{n_0}$ ($n_0$ is $n$ of __leaves__)

- ___Complete Binary Tree___
  - $h=\lfloor log_2n \rfloor +1$
  - $h=\lceil log_2{n+1} \rceil$
  - $2^{n-1} \leq h \leq 2^h-1$

- ___Skewed Binary Tree___
  - $h=n$

- ___Arbitary Binary Tree___
  - $h \leq n \leq 2^h-1$ (h is given)
  - $log_2{(n+1)} \leq h \leq n$ (n is given)

---

## 💙 Representation of Binary Tree

<img src="./img/binarytreeexam.png" width="200px" height="200px">

- 💖 Array Representation

  <img src="./img/binarytreearray.png" width="500px" height="50px">

  - Node in ___A[$i$]___
    - Left child : A[$2i$]
    - Right child : A[$2i+1$]
    - Parent : A[$\lfloor{i/2}\rfloor$]
  - Pros & Cons
    - Pros : Easy to access the parent node
    - Cons : Wasted memories

</br>

- 💖 Linked Representation

  <img src="./img/binarytreelist.png" width="200px" height="200px">

```C
typedef struct node* treePointer;
typedef struct node{
    treePointer leftChild;
    Data data;
    treePointer rightChild;
};
```

---

## 💜 Operations of Binary Tree

|💖|operation|discription|
|-|-|-|
|1.|___preorder(root)___|traveral of ___root___ in order of {$root, leftChild, rightChild$}|
|2.|___inorder(root)___|traveral of ___root___ in order of {$leftChild, root, rightChild$}|
|3.|___postorder(root)___|traveral of ___root___ in order of {$leftChild, rightChild, root$}|
|4.|___level-order(root)___|traversal of ___root___ level by level, where ___root___ is visited first,</br>followed by its direct childs and siblings second, </br>its grandchild nodes and their siblings third, etc., </br>until all nodes have been traversed.|
|5.|___copy(root)___|return a pointer to an exact copy of original ___root___|
|6.|___equal(root1, root2)___|return _false_ if ___root1___ and ___root2___ are not equal, otherwise return true|

### 👉 0. Node

```C
typedef struct node* treePointer;
typedef struct node{
    treePointer left;
    Data data;
    treePointer right;
};
```

### 👉 1. ___preorder(root)___

![PreorderRecursive](./img/treepreorderrecursive.gif)

💖 traversal result : 5, 3, 1, 2, 4, 8, 7, 6, 11, 10, 9, 12

```C
void preorder(treePointer ptr){
    if(ptr){
        printf("%d", ptr->data);
        preorder(ptr->leftChild);
        preorder(ptr->rightChild);
    }
}
```

### 👉 2. ___inorder(root)___

- recursive traversal

![InorderRecursive](./img/treeinorderrecursive.gif)

💖 traversal result : 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12


```C
void inorder(treePointer ptr){
    if(ptr) {
        inorder(ptr->leftChild);
        printf("%d", ptr->data);
        inorder(ptr->rightChild);
    }
}
```

- Iterative inorder traversal

![Inorderstack](./img/treeinorderstack.gif)

```C
void iterInorder(treePointer node){
    int top = -1;
    treePointer stack[MAX_STACK_SIZE];

    for(;;) {
        // push all left descendant of the node(iter) to stack
        for(; node; node=node->leftChild)
            push(node);
        
        node = pop();

        // if stack is empty, stop traversal
        if(!node)
            break;

        // visit poped node, and iter moves to right child node poped node;
        printf("%d", node->data);
        node = node->rightChild;
    }
}
```

### 👉 3. ___postorder(root)___

```C
void postorder(treePointer ptr){
    if(ptr) {
        postorder(ptr->leftChild);
        postorder(ptr->rightChild);
        printf("%d", ptr->data);
    }
}
```

### 👉 4. ___level-order(root)___

```C
void levelOrder(treePointer ptr){
    int front = reat = 0;
    treePointer queue[MAX_QUEUE_SIZE];
    
    if(!ptr)
        return;

    addQ(ptr);

    for(;;){
        ptr = deleteQ();
        if(ptr){
            printf("%d", ptr->data);
            if(ptr->leftChild)
                addQ(ptr->leftChild);
            if(ptr->rightChild)
                addQ(ptr->rightChild);
        }
        else
            break;
    }
}
```

### 👉 5. copy(root)

```C
treePointer copy(treePointer original){
    treePointer temp;
    if(original) {
        temp = (treePointer)malloc(sizeof(*temp));
        temp->leftChild = copy(original->leftChild);
        temp->rightChild = copy(original->rightChild);
        temp->data = original->data;
        return temp;
    }
    return NULL;
}
```

### 👉 6. equal(root1, root2)

```C
int equal(treePointer first, treePointer second){
    return 
    ( 
        (!first && !second) || 
        (
            first && second && first->data == second->data &&
            equal(first->leftChild, first->leftChild) &&
            equal(first->rightChild, first->rightChild)
        ) 
    );
}
```