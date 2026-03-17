#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define NUMEROS 10

void inicializarMemoria(int *);
void mostrarMemoria(int *);

int menu(void);

int main(int argc , char * argv[])
{
   int opcion;
   int * memdinamica = (int *) malloc(NUMEROS*sizeof(int));
   while((opcion = menu()) != 0)
   {
     switch(opcion)
     {
        case 1 :
                  inicializarMemoria(memdinamica);
                  break;
        case 2 :
                  mostrarMemoria(memdinamica);
                  break;
     }
   }
   exit(0);
}

void inicializarMemoria(int * mem)
{
   int i ;
   for(i = 0 ; i < NUMEROS ; i++)
      *(mem++) = i ;
}

void mostrarMemoria(int * mem)
{
   int i ;
   for(i = 0 ; i < NUMEROS ; i++)
      printf(" %d ",*(mem++)) ;
   printf("\n");
}

int menu(void)
{
  int opcion;
  printf(" *** MENU DE OPCIONES ***\n");
  printf(" 1 Inicializar Memoria\n");
  printf(" 2 Mostrar Memoria\n");
  printf(" 0 SALE DE LA Matrix\n");
  printf(" Ingrese opcion --> ");
  scanf("%d",&opcion);
  __fpurge(stdin);
  return opcion;
}