#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
}node;

void newNode(node *root_p, int value)
{
    // new node
    node *pNew = (node*) malloc(sizeof(node*));
    pNew->val = value;
    pNew->next = NULL;

    while(1)
    {
        if(root_p->next == NULL)
        {
            root_p->next = pNew;
            pNew->next = NULL;
            break;
        }
        root_p = root_p->next;
    }
}

int display(node *root_p)
{
    printf("Lista:\n");
    root_p = root_p->next;
    if(root_p){
    do{
      printf(" %d ", root_p->val);
      root_p = root_p->next;
    }
    while(root_p);
    }
    else
    printf("Lista vazia.\n");
    root_p = root_p->next;

printf("\n");
}

int main()
{
    //root node
    node *p_origin = (node*) malloc(sizeof(node*));
    p_origin->val = NULL;

    newNode(p_origin, 3);
    display(p_origin);
}


