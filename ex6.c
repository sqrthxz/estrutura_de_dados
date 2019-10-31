#include <stdio.h>
#include <stdlib.h>

typedef struct PilhaFila
{
    int val;
    struct Pilha *next;
}pifa;

void new_pifa(pifa *root_p, pifa *root_f, int value)
{
    // new node
    pifa *pNew = (pifa*) malloc(sizeof(pifa*));
    pNew->val = value;
    pNew->next = NULL;

    if(value >= 0)
    {
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
    else{
        while(1)
        {
            if(root_f->next == NULL)
            {
                root_f->next = pNew;
                pNew->next = NULL;
                break;
            }
            root_f = root_f->next;
        }
    }
}

int display(pifa *root_p, pifa *root_f)
{
    printf("pilha:\n ");
    root_p = root_p->next;
    if(root_p){
    do{
      printf("%d ", root_p->val);
      root_p = root_p->next;
    }
    while(root_p);
    }
    else
    printf("\npilha vazia\n\n");
    root_f = root_f->next;

printf("\n");

  printf("fila:\n");
  if(root_f){
    do{
      printf("%d ", root_f->val);
      root_f = root_f->next;
    }
    while(root_f);
  }
  else
    printf("\nfila vazia\n\n");

  printf("\n");

}

int removePilha(pifa *root_p, pifa *root_f)
{

  pifa *ultimo = root_f->next;
  while (ultimo->next)
  {
    ultimo = ultimo->next;
  }

  pifa *p = root_p;
  pifa *first = root_p;
  while(p->next){
    first = p;
    p = p->next;
    ultimo->next = p;
  }

  first->next = p->next;
  p->next = NULL;
}

int main()
{
    //root node pilha
    pifa *p_origin = (pifa*) malloc(sizeof(pifa*));
    p_origin->val = 0;
    // root node fila
    pifa *f_origin = (pifa*) malloc(sizeof(pifa*));
    f_origin->val = 0;

    while(1){
        printf("1- Adicionar elementos\n2- Remover da PILHA e colocar na FILA \n3- Remover da FILA e colocar na PILHA\n\n");

        new_pifa(p_origin, f_origin, 2);
        new_pifa(p_origin, f_origin, -1);
        new_pifa(p_origin, f_origin, 4);
        new_pifa(p_origin, f_origin, 5);
        new_pifa(p_origin, f_origin, -2);
        new_pifa(p_origin, f_origin, -54);
        new_pifa(p_origin, f_origin, 6);

        display(p_origin, f_origin);
        removePilha(p_origin, f_origin);
        display(p_origin, f_origin);

        break;
    }
}
