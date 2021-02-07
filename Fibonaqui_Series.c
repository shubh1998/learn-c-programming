#include<stdio.h>
int main()
{
    int num1=0, num2=1, total=0, i, size;
    printf("please enter size of series : ");
    scanf("%d",&size);
    for(i=0 ; i<size ; i++)
    {
        printf("%d  ",num1);
        total=num1+num2;
        num1=num2;
        num2=total;
    }
}
