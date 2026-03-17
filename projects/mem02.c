/*

   forma de uso
   $cc mem02.c -o mem02
   $./mem02 10

*/

#include <stdio_ext.h>
#include <stdlib.h>

void inicializarMemoria(int *, int);
void mostrarMemoria(int *, int);
void verArgv(int , char * []);

int menu(void);

int main(int argc , char * argv[])
{
   if ( argc < 2 )
   {
     printf("Forma de sintaxis $./nombreEjecutable cantidad_de_enteros\n");
     exit(-1);
   }

   int opcion;
   int * memdinamica = (int *) malloc(atoi(argv[1])*sizeof(int));
   while((opcion = menu()) != 0)
    {
     switch(opcion)
     {
        case 1 :
                  inicializarMemoria(memdinamica,atoi(argv[1]) );
                  break;
        case 2 :
                  mostrarMemoria(memdinamica, atoi(argv[1]));
                  break;
        case 3 :
                  verArgv(argc , argv);
                  break;
     }
   }
   exit(0);
}

void verArgv(int argc , char * argv[] )
{
   int i ;
   for(i = 0 ; i < argc ; i++)
      printf(" argv[%d]= %s \n",i,argv[i]) ;
   printf("\n");
    
}

void inicializarMemoria(int * mem, int cnum)
{
   int i ;
   for(i = 0 ; i < cnum ; i++)
      *(mem++) = i ;
}

void mostrarMemoria(int * mem, int cnum)
{
   int i ;
   for(i = 0 ; i < cnum ; i++)
      printf(" %d ",*(mem++)) ;
   printf("\n");
}

int menu(void)
{
  int opcion;
  printf(" *** MENU DE OPCIONES ***\n");
  printf(" 1 Inicializar Memoria\n");
  printf(" 2 Mostrar Memoria\n");
  printf(" 3 Ver argv\n");
  printf(" 0 SALE DE LA Matrix\n");
  printf(" Ingrese opcion --> ");
  scanf("%d",&opcion);
  __fpurge(stdin);
  return opcion;
}