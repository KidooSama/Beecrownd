  #include <stdio.h>
  #include <locale.h>

int main(void){

int t1 = 0;
int t2 = 1;
int n, i;
int  prox = t1 +t2;


printf("Digite seu numero: ");
scanf("%d", &n);

printf("Fibonacci Series: %d, %d, ", t1, t2);

for (i = 3; i <= n; i++){
    
   printf("%d, ", prox);
    t1 = t2;
    t2 = prox;
    prox = t1 + t2;

    
}
printf("\nfim do programa ");


}

