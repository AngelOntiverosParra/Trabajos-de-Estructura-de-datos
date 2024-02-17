#include <stdio.h>
#include <stdlib.h>

#define MAX_PERSONAJE 3
#define MAX_LONGITUD_NOMBRE 50

typedef struct {
  int nr;
  char nombre[MAX_LONGITUD_NOMBRE];
  char carrera[MAX_LONGITUD_NOMBRE];
  int edad;

} estudiante;

void numero_registro(estudiante Arreglo[MAX_PERSONAJE]) {
  for (int i = 0; i < MAX_PERSONAJE; i++) {

    printf("Inserte el numero de registro %d:", i + 1);
    scanf("%d", &Arreglo[i].nr);

    getchar();

    printf("Inserte el nombre de la persona %d:", i + 1);
    scanf("%[^\n]s", Arreglo[i].nombre);

    getchar();

    printf("Inserte el nombre de la carrera %d:", i + 1);
    scanf("%[^\n]s", Arreglo[i].carrera);

    getchar();

    printf("Inserte la edad %d:", i + 1);
    scanf("%d", &Arreglo[i].edad);
  }
}

int main(void) {

  estudiante x[MAX_PERSONAJE];

  /*  for (int i = 0; i < MAX_PERSONAJE; i++) {
      printf("Inserte el numero de registro %d:", i + 1);
      scanf("%d", &x[i].nr);

      getchar();

      printf("Inserte el nombre de la persona %d:", i + 1);
      scanf("%[^\n]s", x[i].nombre);

      getchar();

      printf("Inserte el nombre de la carrera %d:", i + 1);
      scanf("%[^\n]s", x[i].carrera);

      getchar();

      printf("Inserte la edad %d:", i + 1);
      scanf("%d", &x[i].edad);
    }*/

  numero_registro(x);

  estudiante *ptrEstudiantes; // Lo que realiza esto es solo un apuntador que da
                              // al arreglo

  for (ptrEstudiantes = x; ptrEstudiantes < x + MAX_PERSONAJE;
       ptrEstudiantes++) {
    printf("\nNo.Registro:%d", ptrEstudiantes->nr);//Para acceder desde el puntero a los elementos de la estructura se utliza la flecha ->

    printf("\nNombre:%s", ptrEstudiantes->nombre);

    printf("\nCarrera:%s", ptrEstudiantes->carrera);

    printf("\n Edad:%d", ptrEstudiantes->edad);
  }

  /*
  Explicacion del For con punteros, lo primero funciona como el int en una for
  normal ptrEstudiantes=x, y pro regla todos los punteros que apuntan a un
  arreglo apuntan al 0, despues lo siguente que es ptrEstudiante<x +
  MAX_PERSONAJE lo que realiza esto es como calcular automaticamente la cantidad
  de elementos que tiene ese arreglo de una misma estructura y por ultimo el
  ptrEstudiante++ lo que raliza es simplemente el aumento del puntero
  */

  /*  for (int i = 0; i < MAX_PERSONAJE; i++) {
      printf("\nEstudiante %d", i + 1);
      printf("\nNumero:%d\nNombre persona:%s\nNombre de la carrera:%s\nEdad:%d",
             x[i].nr, x[i].nombre, x[i].carrera, x[i].edad);
    }*/

  return 0;
}