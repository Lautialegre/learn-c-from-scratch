#include <stdio_ext.h>
#include <stdlib.h>

#define FILA 3
#define COLU 3

void inicializarMatriz(int *);
void mostrarMatriz(int *);

int menu(void);

int main(int argc , char * argv[])
{
   int opcion;
   int mat[FILA][COLU];
   while((opcion = menu()) != 0)
   {
     switch(opcion)
     {
        case 1 :
                  inicializarMatriz(&mat[0][0]);
                  break;
        case 2 :
                  mostrarMatriz(&mat[0][0]);
                  break;
     }
   }
   exit(0);
}

void inicializarMatriz(int * mat)
{
   int i ;
   for(i = 0 ; i < FILA*COLU ; i++)
      *(mat++) = i ;
}

void mostrarMatriz(int * mat)
{
   int i ;
   for(i = 0 ; i < FILA*COLU ; i++)
      printf(" %d ",*(mat++)) ;
   printf("\n");
}

int menu(void)
{
  int opcion;
  printf(" *** MENU DE OPCIONES ***\n");
  printf(" 1 Inicializar Matrix\n");
  printf(" 2 Mostrar Matrix\n");
  printf(" 0 SALE DE LA Matrix\n");
  printf(" Ingrese opcion --> ");
  scanf("%d",&opcion);
  __fpurge(stdin);
  return opcion;
}