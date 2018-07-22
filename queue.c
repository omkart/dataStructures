#include<conio.h>
#include<stdio.h>



int queue[50]={};
int MAXSIZE;
int rear =-1;
int front=0;


void main()
{
    while(1)
    {

    int e;
    int ch;
    int dequeuedValue;
    createQueue(4);

    printf(" 1.ENQUEUE\n 2.DEQUEUE\n 3.PRINT QUEUE\n 4.EXIT\n");
    scanf("%d",&ch);
    if(ch!=4)
    {


            switch(ch)
                {
                case 1: if(isFull()!=1)
                {
                    printf("Enter the number to be inserted : ");
                    scanf("%d",&e);
                    enqueue(e);

                    printf("\n");

                }
                else printf("Queue is full.\n");

                break;



            case 2: if(isEmpty()!=1){

                dequeuedValue = dequeue();
                printf("Value dequeued : %d \n",dequeuedValue);

                }
                else {printf("The queue is empty \n");
                    rear=-1;
                    front=0;

                }

                break;



            case 3: if(isEmpty()==0){

                    printQueue();

                }
                else
                {
                    printf("The queue is empty\n");
                    printf("rear :%d, front :%d \n",rear,front);
                }
                break;



                }

    }
    else if(ch==4) break;




}
}

void createQueue(int size)
{
    MAXSIZE = size;

}

void enqueue(int e)
{

    rear++;



        queue[rear] = e;



}

int dequeue()
{
    int temp;
    temp=queue[front];
    front++;
    return (temp);

}

int isEmpty()
{
    if(front >rear)
    {
        return 1;

    }
    else
    {
        return 0;

    }

}

int isFull()
{
    if(rear==(MAXSIZE-1)) return 1;
    else return 0;

}

void printQueue()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d \n",queue[i]);


    }

}

