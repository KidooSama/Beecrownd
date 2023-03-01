#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){

    float r;
    float pi = 3.14159;
    float tt;



    scanf("%f", &r);
    r = pow(r, 3);
    tt = (4/3.0) * pi * r;

    printf("VOLUME = %0.3f", tt);
}