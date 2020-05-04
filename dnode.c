
#include <stdio.h>                     //Martínez Salgado Elean jim
#include <stdlib.h>
#include "dnode.h"   

dnode *create_dnode(DATA data){
    dnode * d = (dnode*)malloc(sizeof(dnode));
    d->next = NULL;
    d->prev = NULL;
    d->data = data;
    return d;
}

bool remove_dnode(dnode *n){
    if(n->prev == NULL && n->next == NULL){
        free(n);
        return true;
    }
    return false;
}