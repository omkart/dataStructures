
#include<conio.h>
#include<stdio.h>


int numbers[]={5,14,11,3,5};
int size;

void  main()
{
   // takeInput();
    int i;
    size=5;
    selectionSort();
     for(i=0;i<size;i++)
    {
       printf("%d",numbers[i]);
       printf("\n");

    }


}


void selectionSort()
{
    int i,j;
    int pos;
    int temp;
    int min;

    for(i=0;i<size;i++)
    {
        min=numbers[i];
        pos=i;
        for(j=i+1;j<size;j++)
        {
            if(numbers[j]<min)
            {
                min=numbers[j];
                pos=j;
            }

        }
       numbers[pos]=numbers[i];
       numbers[i]=min;

    }

}



void takeInput()

{

    int i;


    printf("Enter the size \n ");
    scanf("%d",&size);
    printf("\n Enter the numbers\n");

    for(i=0;i<size;i++)
    {
       scanf("%d",&numbers[i]);
       printf("\n");

    }
}
