

#include<conio.h>
#include<stdio.h>

int a[]={90, 80, 40, 50 ,70, 40, 95};


void main()
{
    int i,j;
    int pivot ;
    int temp;
    pivot=6;
    i=-1;
   // printf("%d\n",a[6]);
    for(j=0;j<7;j++)
    {
        if(a[j]<=a[pivot])
        {
            i++;
           // swap(a[i],a[j]);
           temp = a[i];
           a[i]=a[j];
           a[j]=temp;

        }
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    i=-1;
   // printf("%d\n",a[6]);
    for(j=0;j<7;j++)
    {
        if(a[j]<=a[pivot])
        {
            i++;
           // swap(a[i],a[j]);
           temp = a[i];
           a[i]=a[j];
           a[j]=temp;

        }
    }




   // printf("i :%d , j : %d ,a(pivot):%d \n",i,j,a[5]);
    for(i=0;i<=6;i++){
    printf("%d\n",a[i]);
    }

}
