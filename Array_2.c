
/*
    Write a C program to perform a Linear Search on an array of 5 elements.
     Read the array elements and a key value from the user.
      If the key is found, display its index; otherwise, display "Element not found.
*/


#include <stdio.h>

int main() {

    int a[5], i, b, val = 0;

    printf("Enter the array: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to find: ");
    scanf("%d", &b);

    for (i = 0; i < 5; i++) {

        if (a[i] == b) {
            val = 1;
            printf("Element found at index: %d\n", i);
            break;
        }
    }

    if (val == 0) {
        printf("Element not found\n");
    }

    return 0;
}