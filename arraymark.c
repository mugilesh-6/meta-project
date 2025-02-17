#include<stdio.h>
int main()
{
int i;
    int marks[10];
    for(i=0;i<10;i++)
    {
        printf("enter the mark:");
        scanf("%d",&marks[i]);
    }
     for(i=0;i<10;i++)
    {

       printf("\nmarks: %d index:%d",marks[i],i);
    }
    printf("\n reverse array");
for(i=9;i>=0;i--)
    {

       printf("\nmarks: %d index:%d",marks[i],i);
    }
    printf("\n \tfirst and last element in array");
    printf("\n%d %d",marks[0],marks[9]);

}
