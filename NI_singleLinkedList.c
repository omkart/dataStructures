
#include<stdio.h>
#include<conio.h>


struct node
{
    int data;

    struct node *link;

};

struct node *root = NULL;
int len;

void main()
{
    while(1)
    {
        int choice;
        printf("1.APPEND\n2.INSERT AFTER\n3.DELETE\n4.SHOW LIST\n5.EXIT\nEnter your choice : ");
        scanf("%d",&choice);
        printf("\n");
        if(choice==5)   break;

        else{
            switch(choice)
            {
            case 1: append();   break;
            case 2: insertAfter();  break;
            case 3: deleteNode();   break;
            case 4: printList(root);    break;


            }
        }

    }



}

void printList(struct node *rootRef)
{
    while(rootRef!=NULL)
    {

        printf("%d\n",rootRef->data);
        rootRef= rootRef->link;
    }

}


///////////////////////////////////////////////////////////////////////////////////////////////

//          APPEND

///////////////////////////////////////////////////////////////////////////////////////////////

void append()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("Enter the data\n");
    scanf("%d",&temp->data);
    temp->link = NULL;

    //now the node is created , however this is the fist node
    if(root == NULL)
    {
        root = temp;
        //now root will start pointing to the first node with data that will be entered and the
        // value of first nodes link will be NULL as declared just above
        //temp is a local variable and will be destroyed once the function completes its execution

    }
    else{

            //we need to traverse from first to last location
            //as the newly connected element has to be connected to the end

            struct node *p;
            p=root ; //as root will contain the address of first node
            //now traverse
            while(p->link != NULL)
            {
                p = p->link;

                //now once we get last link value as NULL we will break out of while
                //and p will contain address to the last node and we can work on
                //appending the new node to that address
            }
            //now replace the value NULL of p to link to the temp value of the new
            //node that was created i.e the new address and ultimately its data will also be assigned to it
            p->link = temp;

    }

}


///////////////////////////////////////////////////////////////////////////////////////////////

//              LENGTH

///////////////////////////////////////////////////////////////////////////////////////////////

int getListLength()
{
    int count = 0 ;
    struct node *temp;
    temp=root ;     //counting nodes from first node;

    while(temp !=NULL)
    {
        count++;
        temp = temp->link;
    }

    return count;


}


///////////////////////////////////////////////////////////////////////////////////////////////

//         insert after

///////////////////////////////////////////////////////////////////////////////////////////////


void insertAfter()
{
        int keyValue;
        struct node *p;
        p = (struct node*)malloc(sizeof(struct node));


        printf("Enter the key value : ");
        scanf("%d",&keyValue);

        printf("\n");

        struct node *temp;

        temp = root;

        while(temp!=NULL && temp->data != keyValue)
        {
            temp = temp->link;

        }
        if(temp == NULL)
        {
            printf("Key not present in the list.\n");
            return;

        }


        printf("Enter the value of new data : ");
        scanf("%d",&p->data);
        printf("\n");



        p->link = temp->link;
        temp->link = p;



}

///////////////////////////////////////////////////////////////////////////////////////////////

//         DELETE

///////////////////////////////////////////////////////////////////////////////////////////////

void deleteNode()
{
    int keyValue;
    struct node *p;

    p= (struct node*)malloc(sizeof(struct node));

    printf("Enter the key value : ");
    scanf("%d",&keyValue);
    printf("\n");


    struct node *temp;
    temp = root;

    //if found at the root
    if(temp->data == keyValue)
    {
        root=temp->link;
        free(temp);
        return;

    }

    while(temp!= NULL && temp->data!=keyValue)
    {
        p = temp;
        temp= temp->link;


    }

    p->link=temp->link;
    free(temp);







}

