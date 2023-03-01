#include <stdio.h>
#include <locale.h>

int main (void){

char nome[60];
double  slfx;
double  mtt;
double  total;

printf("Digite seu nome: ");
scanf("%s", &nome);
printf("Seu salario Fixo ");
scanf("%lf", &slfx);
printf("Montante total das vendas: ");
scanf("%lf", &mtt);

total = (mtt*0.15) + slfx;

printf("TOTAL = R$ %0.2lf", total);

}