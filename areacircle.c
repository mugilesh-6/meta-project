#include<stdio.h>
int area(int r){
float a;
a=3.14*r*r;
printf("%.2f",a);
}
int main()
{

    int b;
    printf("radius of the circle:");
    scanf("%d",&b);
    area(b);
    return 0;
}
