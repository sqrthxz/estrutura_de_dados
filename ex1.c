#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
}node;

void insert(node *root, int tam)
{
  for(int i = 1; i < tam+1; i++){
    node *pNew = (node*) malloc(sizeof(node*));
    pNew->val = i;

    while(1)
    {
      if(root->next == NULL)
      {
        root->next = pNew;
        pNew->next = NULL;
        break;
      }
    root = root->next;
    }
  }

}

int display(node *root)
{
  root = root->next;
  if(root){
    do{
      printf(" %d ", root->val);
      root = root->next;
    }
    while(root);
  }
  else
    printf("          Lista vazia.\n\n");
  printf("\n");
}

void a(node *root)
{
    node *aux = root;
    node *first = root->next;
    node *last = root->next;
    while(last->next)
    {
        last = last->next;
    }
    last->next = first;
    aux->next = first->next;
    first->next = NULL;
}

void b(node *root, int tam)
{
  for(int i = tam+1; i > 0; i--){
    node *pNew = (node*) malloc(sizeof(node*));
    pNew->val = i;

    while(1)
    {
      if(root->next == NULL)
      {
        root->next = pNew;
        pNew->next = NULL;
        break;
      }
    root = root->next;
    }
  }

}

void c(node *root)
{
    
}


int main()
{
    //root node
    node *p_origin = (node*) malloc(sizeof(node*));
    p_origin->val = NULL;
    node *p = p_origin;

    insert(p, 6);

    printf("Lista Principal: \n");
    display(p);
    printf("\n");

    a(p);
    printf("Lista 'A': \n");
    display(p);
    free(p);
    printf("\n");

    b(p,6);
    printf("Lista 'B': \n");
    display(p);
    free(p);
    printf("\n");


    printf("Lista 'C': \n");


}
