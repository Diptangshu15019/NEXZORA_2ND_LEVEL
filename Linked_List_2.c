

                    // Write a program to insert 6 nodes into a linked list and display them

#include<stdio.h>
#include<malloc.h>
struct NODE
{
    int data;
    struct NODE*link;
};

int main(){
    int i;
    struct NODE *N,*head;

    N= (struct NODE*)malloc(sizeof(struct NODE));
    head=N;

    printf("enter data_1: ");   /* made first node */
    scanf("%d",&N->data);

    for(i=0;i<4;i++){
        N->link= (struct NODE*)malloc(sizeof(struct NODE));
        N=N->link;
                             
        printf("Enter data %d: ", i + 2);   /*made remaining node */
        scanf("%d",&N->data);
    }

    N->link=NULL;
    N=head;
    printf("\nLinked List: ");

    while (N!=NULL)
    {
        printf("%d",N->data);
        N=N->link;
    }

    return 0;
    
}
