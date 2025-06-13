#include <stdio.h>

int swapWithTemp()
{
    int a;
    int b;
    printf("Enter number1: ");
    scanf("%d" , &a);
    printf("Enter number2: ");
    scanf("%d" , &b);
    int temp;
    
    temp = a;
    a=b;
    b=temp;
    
    printf("%d %d" , a , b);

    return 0;
}
