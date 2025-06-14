
#include <stdio.h>

int main()
{
     int n = 3 , i ,j;
     for(int i = 0 ; i < n ;i++){
         for (j=0;j<i+1;j++){
             printf("*");
         }
         printf("\n");
        
     }
     printf("\n");

    return 0;
}
