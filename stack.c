
#include<stdio.h>
#define MAXSIZE 4

int tos =-1;
int stack[]={};

void main()
{
while(1){


   int ch;
   int e;



        printf(" 1.PUSH\n 2.POP \n 3.PEEK \n 4.PRINT \n 5.EXIT \n");
        scanf("%d",&ch);
        if(ch==5)
        {
            break;
        }

        switch(ch){

                case 1:

                    push();
                    break;
                case 2:
                    printf("Popping out of the stack\n");
                    pop();
                    break;
                case 3:
                    printf("Peeking inside the stack \n");
                    peek();
                case 4:
                    showStack();
                    break;
                case 5:
                    break;

        }
    }
}


void pop(int e)
{
     if(isEmpty(tos)==1){
        printf("Stack is empty \n");
     }
     else{
        printf("Data popped : %d \n",stack[tos]);
        tos=tos-1;
     }


}


void push()
{
    int e;
    tos++;
    if(isFull(tos)==0){
        printf("Enter the number to be pushed \n");
        scanf("%d",&e);
        stack[tos]= e;

    }
    else if(isFull(tos)==1)
    {
        printf("The stack is full.\n");

    }







}

void peek()
{
    if(isEmpty(tos)==1)
    {
         printf("Stack is empty \n");

    }
    else{
    printf("Showing the top of stack : %d \n",stack[tos]);
    }
}


void showStack()
{
    int i;
    for(i=tos;i>-1;i--)
    {

        printf("%d \n",stack[i]);
    }

}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int isFull(int tosValue)
{
        if(tosValue == MAXSIZE)
        {
            return 1;

        }
        else{
            return 0;
        }
}
int isEmpty(int tosValue)
{
        if(tosValue == -1)
        {
            return 1;

        }
        else{
            return 0;
        }
}



