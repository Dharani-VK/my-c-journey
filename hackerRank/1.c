/*Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of a to their sum, and b to their absolute difference. There is no return value, and no return statement is needed.
a' = a+b
b'= |a-b|
*/

#include <stdio.h>


void update(int *a,int *b) {
    // Complete this function
    int temp = *a + *b;
    if(*b > *a){
      int diff = temp - *a;
      *b = diff - *a;  
    }
    else{
        *b = *a-*b;
    }
    *a = temp;
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
