int main(){
    int x1,x2,y1,y2,x;
    do
    {
       scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
       if (x1 + x2 + y1 + y2 == 0){
        break;
       }
       x = pow((x1 - x2),2) == pow((y1 - y2),2);
       

       if (x1 == x2 && y1 == y2){
            printf("0\n");
        }else if (x1 == x2 || y1 == y2){
            printf("1\n");      
        }else if (x) {
            printf("1\n"); 

        }else{
            printf("2\n");
        }
        
       
    } while (1);
    
}