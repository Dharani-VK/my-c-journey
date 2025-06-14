
#include <stdio.h>

int main()
{
    //int n =4;
    
    // for (int i = 0; i < n ; i++){
    //     for(int j=0;j< i+1 ; j++){
    //         printf("%d", j+1);
    //     }
    //     printf("\n");
    // }
    
    //3(i) +j+1
    
    // int n = 4;
    // for(int i =0 ; i < n; i++){
    //     for(int j =0;j< i+1 ; j++){
    //         printf("%d" , 3*i +i+j);
    //     }
    //     printf("\n");
    // }
    
    // int n = 4, count = 0;
    // for(int i =0 ; i < n; i++){
    //     for(int j =0;j< i+1 ; j++){
    //         printf("%d" , count);
    //         count++;
    //     }
    //     printf("\n");
    // }
    
    // int n=4;
    
    // for(int i=1;i<n;i++){
    //     for(int k =0 ; k <= n-i-1; k++){
    //         printf("-");
    //     }
        
    //     for(int j =0; j<(2*i -1) ; j++){
    //         printf("*");
            
    //     }
    //     for(int k =0 ; k <= n-i-1; k++){
    //         printf("-");
    //     }
    //     printf("\n");
    // }
    
    int n = 3;
    for (int i =1; i< n ; i++){
        for(int k = 0 ; k <= n-i-1 ; k++){
            printf("-");
        }
        for(int j =0 ; j < 2*i-1 ; j++){
            printf("*");
        }
        
        for(int k = 0 ; k <= n-i-1; k++){
            printf("-");
        }
        printf("\n");
    }
    
    
    for (int i = 0; i < n ; i++){
        for(int k = 1 ; k <= i ; k++){
            printf("-");
        }
        for(int j = 0 ; j < 2*(n-i) -1; j++){
            printf("*");
        }
        for(int k = 1 ; k <= i; k++){
            printf("-");
        }
        printf("\n");
    }
    
    
    

    return 0;
}
