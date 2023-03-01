  #include <stdio.h>
  #include <locale.h>
  int main(void) {
  
  int vl;
  int jr;
  int dia;

  printf("Digite seu valor: ");
  scanf("%d", &vl);
  printf("Quantos dias ");
  scanf("%d", &dia);
  jr = vl * 0.005 * dia;
  vl = vl + jr;
  printf("O valor e: %d", vl);
  }