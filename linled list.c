#include<stdio.h>
#include<stdlib.h>
struct contact{
    long int number;
    struct contact *next;
};
int main(){
    struct contact *pr1=(struct contact*) malloc(sizeof(struct contact));
    struct contact *pr2=(struct contact*) malloc(sizeof(struct contact));
    struct contact *pr3=(struct contact*) malloc(sizeof(struct contact));
    printf("Enter the first contact number:");
    scanf("%ld",&pr1->number);
    printf("Enter the second contact number:");
    scanf("%ld",&pr2->number);
    printf("Enter the third contact number:");
    scanf("%ld",&pr3->number);
    pr1->next = pr2;
    pr2->next = pr3;
    pr3->next = NULL;
    struct contact *head =pr1;
    printf("Contact: \n");
    while(head != NULL){
    printf("%ld -->", head->number);
    head = head->next;
}
   printf("NULL");
    return 0;
}