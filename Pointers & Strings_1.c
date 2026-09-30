
 /*
#include<stdio.h>  // this code works. but it have a security problem gets() 
#include<malloc.h> //  it lacks bounds checking so try not to use this
int main(){
    char *s;
    int c = 0;

    s = (char*)malloc(10*sizeof(char));
    printf("enter the value: ");   

    gets(s);
    while(*s!='\0'){
        printf("%c",*s);
        s++;
        c++;
    }
    s--;
    printf("\n");
    while(c>0){
        printf("%c",*s);
        s--;
        c--;
    }
return 0;
}
*/

            // Write a C program using pointers to traverse a string in both forward and reverse directions. 
            // Use dynamic memory allocation(malloc) to store the string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *s, *start;
    int c = 0;

    s = (char *)malloc(10 * sizeof(char));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    start = s;   

    printf("Enter a string: ");
    fgets(s, 10, stdin);
    s[strcspn(s, "\n")] = '\0';
        
    while (*s != '\0') {
        printf(" %c", *s);
        s++;
        c++;
    }
    s--;
    printf("\n");
       
    while (c > 0) {
        printf("%c", *s);
        s--;
        c--;
    }
    free(start);

    return 0;
}