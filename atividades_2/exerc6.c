#include <stdio.h>

int mult_mat(int *m1, int *m2, int *m3, int i, int j, int x, int z){
    int aux = 0, k, l;
    printf("\n");
    for(int w = 0; w < i; w++){
         for(int q = 0; q < z; q++){
                for(int e = 0; e < x; e++){
                    printf("%d %d\n", *(m1 + w * i + e), *(m2 + x * e + q));
                    aux += *(m1 + w * i + e) * *(m2 + x * e + q);
                }
                *(m3 + w*i + q) = aux;
                aux = 0;
        }
    }

    printf("\n");
    printf("Matriz gerada: \n");

    for(k = 0; k < i; k++){
        for(l = 0; l < z; l++){
            printf(" %d ", *(m3 + k*i + l));
        }
        printf("\n");
    }
}




int main(){
    int i, j, x, z;

    printf("Digite a dimensao das matrizes: ");
    scanf("%d %d %d %d",&i, &j, &x,&z);
    printf(" \n Matriz 1 [%d][%d]\n Matriz 2 [%d][%d]\n \n", i, j, x, z);

    int *mat1, *mat2, *mat3, aux;
    mat1 = malloc(sizeof(int)*(i*j));
    mat2 = malloc(sizeof(int)*(x*z));
    mat3 = malloc(sizeof(int)*(i*z));

    int k = 0, l = 0, u = 0;
    if (j == x){
        printf("Matriz 1\n");
        for(k = 0; k < i; k++){
            for(l = 0; l < j; l++){
                printf("Elemento [%d][%d]: ", k, l);
                scanf("%d", &aux);
                *(mat1 + k*i + l) = aux;
            }
        }
        printf("\n");
        //print m1
        for(k = 0; k < i; k++){
            for(l = 0; l < j; l++){
                printf(" %d ", *(mat1 + k*i + l));
            }
            printf("\n");
        }

        printf("\n");

        printf("Matriz 2\n");
        for(k = 0; k < x; k++){
            for(l = 0; l < z; l++){
                printf("Elemento [%d][%d]: ", k, l);
                scanf("%d", &aux);
                *(mat2 + k*x + l) = aux;
            }
        }
        printf("\n");

        //print m2
        for(k = 0; k < x; k++){
            for(l = 0; l < z; l++){
                printf(" %d ", *(mat2 + k*x + l));
            }
            printf("\n");
        }

        mult_mat(mat1, mat2, mat3, i, j, x, z);
    }




    else{
        printf("As matrizes nao podem ser multiplicadas.\n");
    }

}
