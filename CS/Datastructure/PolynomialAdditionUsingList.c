#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef struct node *polyPointer;
typedef struct node{
    int coef;
    int exp;
    polyPointer link;
};

void attach(float coef, int exp, polyPointer *ptr){
    polyPointer temp;
    temp = (polyPointer)malloc(sizeof(*temp));
    temp->coef = coef;
    temp->exp = exp;
    (*ptr)->link = temp;
    *ptr = temp;
}

polyPointer padd(polyPointer a, polyPointer b){
    /* return a polynomial which is the sum of a and b */
    /* a, b, c are singly linked list */

    polyPointer c, temp, rear;
    int sum;

    // allocate a memory for a header node
    rear = (polyPointer)malloc(sizeof(*rear));
    c = rear;

    while(a && b) {
        switch(COMPARE(a->exp, b->exp)) {
            case -1:
                attach(b->coef, b->exp, &rear);
                b=b->link;
                break;
            case 0:
                sum = a->exp + b->exp;
                if(sum)
                    attach(sum, a->exp, &rear);
                a=a->link;
                b=b->link;
                break;
            case 1:
                attach(a->coef, a->exp, &rear);
                a=a->link;
                break;
        }

        for(; a; a=a->link)
            attach(a->coef, a->exp, &rear);
        for(; b; b=b->link)
            attach(b->coef, b->exp, &rear);
        rear->link = NULL;
    }

    // delete extra header node
    temp = c;
    c = c->link;
    free(temp);

    return c;
}

polyPointer cpadd(polyPointer a, polyPointer b){
    /* return a polynomial which is the sum of a and b */
    /* a, b, c are circularly linked list with a header node */
    polyPointer startA, c, lastC;
    int sum;
    int done = FALSE;

    // record the header node of A
    startA = a;

    // skip header node for a and b
    a=a->link;
    b=b->link;

    // allocate a header node to c
    c = (polyPointer)malloc((*c));
    c->exp = -1;
    lastC = c;

    do {
        switch(COMPARE(a->exp, b->exp)){
            case -1:
                attach(b->coef, b->exp, &lastC);
                b=b->link;
                break;
            case 0:
                if(startA == a) {
                    // this case is only 
                    // when both a and b points to the header node respectively.
                    done = TRUE;
                }
                else {
                    sum = a->coef + b->coef;
                    if(sum)
                        attach(sum, a->exp, &lastC);
                    a=a->link;
                    b=b->link;
                }
                break;
            case 1:
                attach(a->coef, a->exp, &lastC);
                a=a->link;
                break;
        }
    }while(!done);

    // make circularly link
    lastC->link = c;
    
    return c;
}