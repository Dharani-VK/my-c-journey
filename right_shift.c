#include <stdio.h>

int right_shift()
{
    int num;
    printf("Enter an Integer: ");
    scanf ("%d" ,&num);
    int shift =  0;
    while( num > 0){
        printf("After shift : %d of number %d \n" , shift ,num );
        num = num >> 1;
        count++;
    }
    printf("Total shift : %d" , shift );

    return 0;
}
