#include <stdio.h>

int main(void) {

  float calif[] = {7, 4, 9, 0, 8, 9.2, 7.7};
  
  float decimas[] = {4, 5, 5, 2, 1, 3, 1};

  float *puntero1 = calif;

  float *puntero2 = decimas;

  float calififinal[7];

  float *ptrcalificacionfina = calififinal;

  for (int i = 0; i < 7; i++) {
    calififinal[i] = *puntero1 + (*puntero2 / 10);

    puntero1++;
    puntero2++;
    
  }

  printf("Ubicacion de memoria:%p\n", &ptrcalificacionfina);
  printf("Lo que contiene:%.1f\n", *ptrcalificacionfina);
  

  for(int i=0;i < 7; i++){
    printf("\nCalificaciones finales:%.1f\n", *ptrcalificacionfina);

    ptrcalificacionfina++;
    
  }

  
  return 0;
}