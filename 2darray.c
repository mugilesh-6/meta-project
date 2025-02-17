#include<stdio.h>
int main()
{
    int a,b;

int i, j,sum=0;
printf("row &col");
scanf("%d %d",&a,&b);
int array[a][b];
for (i=0;i<a;i++){
    for (j=0;j<b;j++){
        scanf("%d",&array[i][j]);
    }
}
for (i=0;i<a;i++){
    for (j=0;j<b;j++){
       printf("%d\t",array[i][j]);
    }
    printf("\n");
}




return 0;
}
