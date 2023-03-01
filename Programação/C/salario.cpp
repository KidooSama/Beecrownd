#include <stdio.h>
#include <locale.h>

int main (void){

int num;
int qthr;
double salhr;
double sal;

printf("Digite seu numero: ");
scanf("%d", &num);
printf("Digite seu quantidade de horas trabalhadas: ");
scanf("%d", &qthr);
printf("Digite seu Salario/hora: ");
scanf("%lf", &salhr);

sal = qthr * salhr;

printf("NUMBER = %d", num);
printf("\nSALARY = U$ %0.2lf", sal);

}