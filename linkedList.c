#include<conio.h>
#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;

};
//to insert node at the beginning
void pushNode(struct node** newHeadRef , int newData)
{
   struct node* newNode = (struct node*) malloc(sizeof(struct node));
   newNode->data = newData;
   newNode->next =(*newHeadRef);

   (*newHeadRef) = newNode;

}
/*
void insertAfter(struct node** node_Ref, int newData)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data= newData;
    newNode->next =  node_Ref->next;

    node_Ref->next = newNode;

}
*/
void insertAfter(struct node* prev_node, int new_data)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)
    {
      printf("the given previous node cannot be NULL");
      return;
    }

    /* 2. allocate new node */
    struct node* new_node =(struct Node*) malloc(sizeof(struct node));

    /* 3. put in the data  */
    new_node->data  = new_data;

    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;

    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;
}

// for appending we need to traverse the entire list to find the last node and then append it over there
/*
void append(struct node** head_Ref, int newData)
{
    struct node* newNode= (struct node*)malloc(sizeof(struct node));

    struct node *last = *head_Ref;

    newNode->data= newData;



    //last node and hence the last should be null

    newNode->next = NULL;


    if(head_Ref->next==NULL)
    {
        //the list is already empty
        head_Ref->next = newNode;
        return;


    }

    while(last->next!=NULL)
    {
        last = last->next;

    }
    last->next = newNode;
}
*/
void append(struct node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct node* new_node = (struct node*) malloc(sizeof(struct node));

    struct node *last = *head_ref;  /* used in step 5*/

    /* 2. put in the data  */
    new_node->data  = new_data;

    /* 3. This new node is going to be the last node, so make next of
          it as NULL*/
    new_node->next = NULL;

    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}

void printList(struct node *n)
{
    while(n!=NULL)
        {

            printf("%d \n",n->data);
            n = n->next;
        }
}
void main()
{
    struct node* head=NULL;
    struct node* second =NULL;
    struct node* third =NULL;
    // ASSIGNING THE MEMORY IN HEAP
    head = (struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    // ASSIGNING DATA AND LINKING THE NODES
    head -> data= 1;
    head ->next = second;   //LINKED WITH THE FIRST NODE

    second -> data =2;
    second -> next= third ;  //LINKED WITH THE THIRD NODE

    third -> data = 3;
    third -> next = NULL;   //NO FURTHER LINKING

    printList(head);

    pushNode(&head,32);
    printf("after pushing in the start data:32 \n");
    printList(head);

    insertAfter(head->next,45);
    printf("Used insert after second data :45 \n");

    printList(head);

    append(&head,100);
    printf("after appending to the end data:100 \n");

     printList(head);

}
