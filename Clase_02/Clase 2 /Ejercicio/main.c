#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Varibles
    int numeros[5];
    int contador = 0;
    int promedio;
    int i;

    for (i=0; i<5 ; i++)
    {
      printf("\nNumero %d: ", i+1);
      while(scanf("%d",&numeros[i]) != 1)
      {
        printf("\n Error - Numero %d: ", i+1);
        __fpurge(stdin);
      }
       contador = contador + numeros[i];
    }
     promedio = contador / 5;
     printf("El promedio es %d", promedio);

    return 0;
}
