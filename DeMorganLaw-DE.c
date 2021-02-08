#include <stdio.h>

int AND(int a, int b) {
    return a*b;
}
int OR (int a , int b){
    return (a==0 && b== 0) ? 0: 1;
}
int NOT (int GATE){
   return GATE== 0 ?  1: 0;
}

int main() {

    int A[] = {1,0,1,0};
    int B[] = {0,1,1,1};
    int LHS[4] = {0};
    int RHS[4] = {0};
    
    printf("De Morgans Law:");
     printf("\nA | B |LHS|RHS ");
    for(int i = 0; i < 4; i++) {
        LHS[i] = NOT(OR(A[i],B[i]));
        RHS[i] = AND(NOT(A[i]), NOT(B[i]));
        printf("\n%d | %d | %d | %d",A[i],B[i],LHS[i],RHS[i]);

    }

    printf("\n\nequ 2: \n");

        for(int i = 0; i < 4; i++) {
        LHS[i] = NOT(AND(A[i],B[i]));
        RHS[i] = OR(NOT(A[i]),NOT(B[i]));
        printf("\n%d | %d | %d | %d",A[i],B[i],LHS[i],RHS[i]);

    }

    return 0;
}
