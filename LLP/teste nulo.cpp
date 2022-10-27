#include <stdio.h>
 
int main() {
 
    int A, B, C, Primeiro;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    Primeiro = A > B && B > C;
        printf(" %d\n %d\n %d\n", A, B, C);
        printf(" A\n B\n C\n");
    
    if (A > C && C > B){
        printf(" A\n C\n B\n");
        printf(" A\n B\n C\n");
    }
    
    if (B > A && A > C){
        printf(" B\n A\n C\n");
        printf(" A\n B\n C\n");
    }
    if (B > C && C > A){
        printf(" B\n C\n A\n");
        printf(" A\n B\n C\n");
    }
    
    if (C > A && A > B){
        printf(" C\n A\n B\n");
        printf(" A\n B\n C\n");
    }
    if (C > B && B > A){
        printf(" C\n B\n A\n");
        printf(" A\n B\n C\n");
    }
    
    return 0;
}
