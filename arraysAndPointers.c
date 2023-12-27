#include <stdio.h>
int main(){
    int A [] = {2,4,5,8,1};
    printf("%p\n", A);      //Address of A [0] gets printed
    printf("%p\n", &A[0]); // Same as line 4
    printf("%d\n", A[0]);  // The real value at A[0] gets printed
    printf("%d\n", *A);   //Same as line 6
    return 0;
}