#include <stdio.h>

void intercambiar(int *a, int *b, int *Arreglo){
int tem= *a;
  *a = *b;
  *b = tem;
}
int main(void) {

  int num1=5;
  int num2=10;

  int arreglo[]={0,10,5};
  
  int *ptrArreglo=arreglo;
  
  intercambiar(&num1, &num2,ptrArreglo);

  printf("%d\n%d\n%d", num1, num2,ptrArreglo[1]);
  
  return 0;
}