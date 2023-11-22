#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
	int key;
	struct node *next;
	struct node *previous;
} NODE;

typedef struct double_linked_list {
	NODE *first;
	NODE *last;
} DOUBLE_LINKED_LIST;

NODE * initialize_node(int k){
	NODE *p;
	
	p           = malloc(sizeof(NODE));
	p->key      = k;
        p->next     = NULL;
        p->previous = NULL;

        return p;
}

void add(int k, DOUBLE_LINKED_LIST *l){
        NODE *tmp, *n;

        tmp = l->first;
        n   = initialize_node(k);

        if(l->first == NULL){
                l->first = n;
                l->last  = n;
                
                return;
        }

        while(tmp != NULL){
                if(tmp->next == NULL){
                        tmp->next = n;
                        
                }

                tmp = tmp->next;
        }
}

int main(){
	LINKED_LIST *pl;

	pl = malloc(sizeof(DOUBLE_LINKED_LIST));

	add(2, pl);
	add(3, pl);
	add(5, pl);
	add(7, pl);
	
        show(pl);
	
        return 0;
}
