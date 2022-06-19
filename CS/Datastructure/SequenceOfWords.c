/*
    Binary Search Tree(BST) is the efficient way to represent random sequence of words (dictionary)
    1. BST's search - O(logn) is more efficient than linear search - O(n)
    2. Linked(-dynamic allocation) tree is good to represent input words with no information
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int count;
} iType;

typedef struct {
    char word[11];
    iType item;
} element;

typedef struct node* treePointer;
typedef struct node{
    element data;
    treePointer leftChild;
    treePointer rightChild;
} node;

treePointer modifiedSearch(treePointer tree, char word[11]) {
    treePointer prev = tree;

    // 1. if the root is empty, then return NULL
    if (tree == NULL) return NULL;

    while(tree){
        /*
            2. if the 'word' has already been in the tree,
            then count++ and return NULL
        */
        if(strcmp(tree->data.word, word) == 0){
            tree->data.item.count++;
            return NULL;
        }
        else if(strcmp(tree->data.word, word) > 0){
            prev = tree;
            tree = tree->leftChild;
        }
        else {
            prev = tree;
            tree = tree->rightChild;
        }
    }
    
    /*
        3. if the root is not empty and the 'word' has not been in the tree,
        then return last visited node(prev)
    */
    return prev;
}

void insert(treePointer* node, char k[]){
    treePointer ptr;
    treePointer temp = modifiedSearch(*node, k);

    /*
        2. if 'k' has not existed in the tree, 
        insert a node with 'k' and 'theItem(count:1)'
    */
    if(temp || !(*node)){
        ptr = (treePointer)malloc(sizeof(*ptr));
        strcpy(ptr->data.word, k);
        ptr->data.item.count = 1;
        ptr->leftChild = NULL;
        ptr->rightChild = NULL;

        if(*node){
            if(strcmp(k, temp->data.word) < 0)
                temp->leftChild = ptr;
            else
                temp->rightChild = ptr;
        }
        else *node = ptr;
    }

    /*
        1. if 'k' has already existed in tree, 
        modifiedSearch makes count++ and done
    */

}

void inorderPrint(treePointer root){
    if(root){
        inorderPrint(root->leftChild);
        printf("%s:%d     ", root->data.word, root->data.item.count);
        inorderPrint(root->rightChild);
    }
}

int main (){
    // treePointer root;
    // root = (treePointer) malloc(sizeof(*root));
    char input[11];
    treePointer root = NULL;

    while(1){
        printf("next word ? ");
        scanf("%s", input);

        if(strcmp(input,"END") == 0)
            break;

        insert(&root, input);
        inorderPrint(root);
        printf("\n");
    }

    return 0;
}