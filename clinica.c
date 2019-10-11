#include <stdio.h>
#include <stdlib.h>

struct Patient
{
  int code;
  char *name;
  struct Patient *next;
};

typedef struct Patient patient;


int insert(patient *origin, patient *p0);

int remove_p(patient *origin, patient *p0);



int print(patient *origin)
{
  printf("Lista de Pacientes:\n");

  if(origin){
    do{
      printf("Cod: %d Nome: %s\n", origin->code, origin->name);
      origin = origin->next;
    }
    while(origin);
  }
  else
    printf("\nNao ha pacientes na fila.\n");
}



int main(void)
{

  patient *p_origin = NULL;


  p_origin= (patient*) malloc(sizeof(patient*));
  p_origin->code = NULL;
  p_origin->name = NULL;



  while(1)
  {
    printf("O que deseja fazer?\n\n1- Inserir paciente\n2- Remover paciente\n3- Imprimir lista de pacientes\n4- Sair\n");
    break;
  }

}

