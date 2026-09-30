
                    // write a program to add two matrices of order 3x2

#include<stdio.h>
int main(){
    int a[3][2], b[3][2], c[3][2];
    int i,j;

    printf("enter the 1st array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter the 2nd array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("\noutput:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    