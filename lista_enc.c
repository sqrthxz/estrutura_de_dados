#include <stdio.h>
#include <stdlib.h>

//Estrutura base do nó.
struct Node
{
    int nData;
    struct Node *proximo;
};

typedef struct Node node;

//Função pra printar o nó na tela.
void displayLL(node *p)
{
    printf("Mostrando a lista:\n");
    if(p){
        do{
            printf(" %d", p->nData);
            p = p->proximo;
        }
        while(p);
    }
    else
        printf("Lista vazia.");
}

int inserir_inicio(node *p0, node *p1){
    p0 -> proximo = p1;
}
int inserir_final(node *p1, node *p0){
    p1 -> proximo = p0;
    p0 -> proximo = NULL;
}
int inserir_meio(node *p0, node *p1, node *p2){
    p0 -> proximo = p1;
    p1 -> proximo = p2;
}
int remover_inicio(node *p0){
    p0 -> proximo = NULL;
}
int remover_final(node *p0){
    p0 -> proximo = NULL;
}
int remover_meio(node *p0, node *p1){
    p0 -> proximo = p1;
}

int reverso(node *p0, node *p1, node *p2, node *p3, node *p4){
    int vet[5];
    vet[0] = p0->nData;
    vet[1] = p1->nData;
    vet[2] = p2->nData;
    vet[3] = p3->nData;
    vet[4] = p4->nData;

    printf("Mostrando a lista reversa: \n");
    for(int i = 4; i >= 0; i--){
        printf(" %d", vet[i]);
    }
    printf("\n");


}



int main(void){



    node *pNode1 = NULL;
    node *pNode2 = NULL;
    node *pNode3 = NULL;
    node *pNode4 = NULL;
    node *pNode5 = NULL;
    node *pNode6 = NULL;
    node *pNode7 = NULL;



    //Criando os nos e associando os dados.
    pNode1 = (node*) malloc(sizeof(node*));
    pNode1->nData = 10;

    pNode2 = (node*) malloc(sizeof(node*));
    pNode2->nData = 20;

    pNode3 = (node*) malloc(sizeof(node*));
    pNode3->nData = 30;

    pNode4 = (node*) malloc(sizeof(node*));
    pNode4 -> nData = 0;

    pNode5 = (node*) malloc(sizeof(node*));
    pNode5 -> nData = 40;

    pNode6 = (node*) malloc(sizeof(node*));
    pNode6 -> nData = 25;

    pNode7 = (node*) malloc(sizeof(node*));
    pNode7 -> nData = 15;



    //Conectando os nós
    pNode1->proximo = pNode2;
    pNode2->proximo = pNode3;
    pNode3->proximo = NULL;



    inserir_inicio(pNode4, pNode1);
    inserir_final(pNode3, pNode5);
    inserir_meio(pNode2, pNode6, pNode3);
    inserir_meio(pNode1, pNode7, pNode2);
    remover_inicio(pNode4);
    remover_final(pNode5);
    remover_meio(pNode1, pNode2);



    //Mostrando a lista.
    if(pNode1){
        displayLL(pNode1);
    }
    printf("\n");

    reverso(pNode1, pNode2, pNode6, pNode3, pNode5);

    free(pNode1);
    free(pNode2);
    free(pNode3);
    free(pNode4);
    free(pNode5);
    free(pNode6);
    free(pNode7);

  return 0;
}
