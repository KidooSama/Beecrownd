//verifique o maior número entre três informados, 
//assumindo queos valores são diferentes entre si
#include <stdio.h>
#include <locale.h>
int main (void){
int a;
int b;
int c;

printf("Digite numero um: ");
scanf("%d", &a);
printf("Digite numero dois: ");
scanf("%d", &b);
printf("Digite numero tres: ");
scanf("%d", &c);

if( a  != b && b != c){
    
    if (a > b and a > c)
    {
        printf("O maior numero eh: %d", a);
    }else if (b > a and b > c)
    {
        printf("O maior numero eh: %d", b);
    }else
    {
        printf("O maior numero eh: %d", c);
    }
       
}else{
    printf("Informe um numero diferente");

}printf("\nFim do programa");
}