#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
  int main(void) {
  setlocale(LC_ALL, "");
  
  int a;
  int b;
  int c;

  printf("Numero 1: ");
  scanf("%d", &a);
  printf("Numero 2: ");
  scanf("%d", &b);
  c = a + b;
  printf("A soma é: %d", c);
  }
