#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenarArreglo(int Arreglo[], int tamano) {
  printf("Ingrese los valores del arreglo:\n");

  for (int i = 0; i < tamano; i++) {
    scanf("%d", &Arreglo[i]);
  }
}

void ImprimirArreglo(int Arreglo[], int tamano) {
  printf("\nArreglo Original:");

  for (int i = 0; i < tamano; i++) {
    printf("%d\n", Arreglo[i]);
  }
}

void ArregloBurbUJA(int arreglo[], int tamano) {

  for (int i = 0; i < tamano; i++) {

    for (int j = 0; j < tamano - i - 1; j++) {

      if (arreglo[j] > arreglo[j + 1]) {
        int temp = arreglo[j];
        arreglo[j] = arreglo[j + 1];
        arreglo[j + 1] = temp;
      }
    }
  }

  /*
  Lo que realiza este codigo es que el primer for es para indicar la secuencia o
  la cantidad de de veces que se va a repetir y el segundo for es para hacer la
  comparativa hasta que todos los numero queden ordenados el if es solo el que
  re4aliza la comparativa  */

  printf("\nArreglo Ordenado:");
  for (int i = 0; i < tamano; i++) {
    printf("%d\n", arreglo[i]);
  }
}

void rellenarAleatorio(int arreglo[], int tamano) {

  srand(time(NULL)); // Genera una semilla de numeros aleatorios

  for (int i = 0; i < tamano; i++) {

    arreglo[i] =
        rand() %
        100; // Lo que hace es solo escoger un numero pseudo aleatorio que estam
             // disponibles en la semilla de numeros ya generadas
  }
}

int main(void) {

  int tamano;

  clock_t tiempo_inicial, tiempo_final;

  printf("Ingrese el tamaño del arreglo?\n");
  scanf("%d", &tamano);

  int ArregloOriginal[tamano]; // C es por Linea de ejecucion

  // llenarArreglo(ArregloOriginal, tamano);

  rellenarAleatorio(ArregloOriginal, tamano);

  ImprimirArreglo(ArregloOriginal, tamano);

  tiempo_inicial = clock();

  ArregloBurbUJA(ArregloOriginal, tamano);

  tiempo_final = clock();

  double segundos = ((double)(tiempo_final - tiempo_inicial)) /
                    CLOCKS_PER_SEC; /*según que estes midiendo el tiempo en
segundos es demasiado grande, para poder hacer esto es simple es que el orden,
primero va el tiempo final y se le resta el tiempo inicial*/

  printf("\nTiempo en segundos:%f", segundos);

  return 0;
}