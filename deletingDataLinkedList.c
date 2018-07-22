

#include<conio.h>
#include<stdio.h>

struct node
{
    int data;
    struct node *next;

};

int main()
{
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    struct node* fourth = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));



    head->data = 1;
    head->next=second;

    second->data=2;
    second->next = third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next = NULL;


    printList(head);


   // deleteNode(&head,2);

  //  printList(head);



}

void deleteNode(struct node **headRef,int key)
{
        struct node* prev= *headRef;
        struct node* temp ;



        printf("%d\n",headRef->data);





}

void deleteNode2(struct node **head_ref, int key)
{
    // Store head node
    struct node* temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted


    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }


    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL) return;

    // Unlink the node from linked list
    prev->next = temp->next;

    free(temp);  // Free memory
}




void printList(struct node* headRef)
{
    while(headRef!=0)
    {

        printf("%d\n",headRef->data);
        headRef=headRef->next;
    }
      printf("///////////////////////////////////////////////////////\n");

}
