#include <stdio.h>

int main() {
    int n, i, total, m, j;
    while (1){
      scanf("%i", &n);

        if (n == 0) break;
        
        i = 0;
        m = 0;  
        j = 0;      
        while (i < n) {
            scanf("%i", &total);
            
            if (total == 0){ 
                m++;
            }else{
                j++;
            }
            i++;
        }
        
        printf("Mary won %i times and John won %i times\n", m, j);
    
    }
    
        
    return 0;
}