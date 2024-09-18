#include <stdio.h>
#include <stdlib.h>

/* promedio curso.
El progrma al recibir como dato el promedio de un alumno en uncurso universitario, escribe aprobado si su promedio es mayor o igual a 6.

PRO: variable de tipo real.*/

void main(void)
{
 float PRO;
 printf("ingrese el promedio del alumno: ");
 scanf("%f" , &PRO);
 if (PRO >=6)
    printf("\nAprobado");
}
