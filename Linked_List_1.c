/*
#include<stdio.h>
#include<malloc.h>
struct NODE
{
    int data;
    struct NODE* link;
};
void main(){  
    int i,key;
    struct NODE *N,*head;
    N = (struct NODE*)malloc(sizeof(struct NODE));
    scanf("%d",&N->data);
    for(i=0;i<5;i++){
        N->link= (struct NODE*)malloc(sizeof(struct NODE));
        N= N->link;
        scanf("%d",&N->data);
        for(i=0;i<5;i++){
            if(1<4){
                N->link= (struct NODE*)malloc(sizeof(struct NODE));
                N= N->link;
                scanf("%d",&N->data);
            }
            else{
                N->link= NULL;
            }
            key =7;
            N=head;
            while (N->link!=NULL)
            {
                if(N->data ==key){
                printf("not found");
                N=N->link;
                }
            }
            
        }
    }
    
}
*/
                /*
                Write a C program to create a singly linked list with 6 nodes. 
                Accept data from the user and search for a given element in the linked list.
                 Display "Found" if the element exists, otherwise display "Not Found".
                 */
#include <stdio.h>
#include <malloc.h>

struct NODE
{
    int data;
    struct NODE *link;
};

int main()
{
    int i, key;
    struct NODE *head, *N;

    head = (struct NODE *)malloc(sizeof(struct NODE));
    N = head;

    printf("Enter 6 numbers:\n");   /* First node*/
    scanf("%d", &N->data);

    for(i = 0; i < 5; i++)
    {
        N->link = (struct NODE *)malloc(sizeof(struct NODE));
        N = N->link;

        scanf("%d", &N->data);      /* Create remaining 5 nodes*/
    }

    N->link = NULL;
    key = 7;
    N = head;

    while(N != NULL)
    {
        if(N->data == key)
        {
            printf("%d Found\n", key);
            return 0;
        }

        N = N->link;
    }
    printf("%d Not Found\n", key);

    return 0;
}
