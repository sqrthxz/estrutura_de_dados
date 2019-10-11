#include <stdio.h>
#include <stdlib.h>

struct Patient
{
  int code;
  char *name;
  struct Patient *next;
};

typedef struct Patient patient;


int insert(patient *root, int c, char n[50])
{
  patient *pNew = (patient*) malloc(sizeof(patient*));
  pNew->code = c;
  strcpy(pNew->name, n);

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

int remove_p(patient *root, int code_r){
}


int display(patient *root)
{
  printf("\nLista de Pacientes:\n\n");

  printf("Cod: %d     Nome: %s\n", root->next->code, root->next->name);

  if(root){
    do{
      printf("Cod: %d     Nome: %s\n", root->code, root->name);
      root = root->next;
    }
    while(root);
  }
  else
    printf("\nNao ha pacientes na fila.\n\n");
}



int main(void)
{

  //no de origem
  patient *p_origin = (patient*) malloc(sizeof(patient*));
  p_origin->code = 1;
  p_origin->name = "Nadini";


  printf("O que deseja fazer?\n\n");

  while(1)
  {

    int selector;
    printf("\n1- Inserir paciente\n2- Remover paciente\n3- Imprimir lista de pacientes\n4- Sair\n\n");
    scanf("%d", &selector);


    //Inserir no na raiz
    if(selector == 1)
    {

      int code_p;
      char name_p[50];
      printf("Digite o codigo e o nome do paciente:\n");
      scanf("%d %s", &code_p, &name_p);

      insert(p_origin, code_p, name_p);
    }

    if(selector == 3)
    {
      display(p_origin);
    }

    if(selector == 4)
    {
      break;
    }
  }

  free(p_origin);

  return 0;
}
