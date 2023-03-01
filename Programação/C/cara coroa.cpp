#include <stdio.h>

int main() {
    int N, i, total, X, Y;
        scanf("%i", &N);
        i = 0;
        X = 0; 
        Y = 0;       
        while (i < N) {
            scanf("%i", &total);
            
            if (total == 0){ 
                X++;
            }else{
                Y++;
            }
            i++;
        }
        
        printf("Mary won %i times and John won %i times\n", X, Y);
}