

#include<stdio.h>


int tos =-1;
int stack[]={};

void main()
{
    int remainder;
   int ch;

   int i;

   printf("Enter the number : \n");
   scanf("%d",&ch);
    if(ch==0)
    {

        printf("Binary equivalent is : 0 \n");
    }
else{
   while(ch!=0){
   remainder=ch%2;
    push(remainder);
    ch=ch/2;

   }
    printf("Binary equivalent is : \n");
   showStack();

   }


}


void pop(int e)
{

        printf("Stack is empty \n");
        printf("Data popped : %d \n",stack[tos]);
        tos=tos-1;



}


void push( int e)
{

     tos++;
     stack[tos]= e;




}



void showStack()
{
    int i;
    for(i=tos;i>-1;i--)
    {

        printf("%d",stack[i]);
    }
}






