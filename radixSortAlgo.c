#include<stdio.h>
#include<conio.h>

int data[8]={170, 45, 75, 90, 802, 24, 2, 66};

void main()
{
    int i,j;
    int bucket[10][10]={};
    int elementCount[10]={};
    int rows,columns,count;

    for(i=0;i<10;i++)
    {
        elementCount[i]=-1;
    }

    for(i=0;i<8;i++)
    {
        rows = (data[i]%10);
        elementCount[rows]=elementCount[rows]+1;
        columns = elementCount[rows];

        bucket[rows][columns] = data[i];

    }

     count =0;

    for(i=0;i<10;i++)
    {
        if(elementCount[i]>-1)
        {

                for(j=0;j<=elementCount[i];j++)
                {
                    data[count] = bucket[i][j];
                     count++;
                }


        }


    }

    for(i=0;i<8;i++)
    {
        printf("%d\n",data[i]);

    }






}

int getUnitsPlace(int numberUnits)
{
    numberUnits = numberUnits%10;
    return numberUnits;

}


int getTensPlace(int numberTens)
{
    numberTens = ((numberTens%100) - (numberTens%10))/10;
    return numberTens;
}

int getHundredsPlace(int numberHundreds)
{
    numberHundreds = ((numberHundreds%1000) - (numberHundreds%100))/100;
    return numberHundreds;
}
