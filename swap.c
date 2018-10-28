#include<stdio.h>
int swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("%d %d",a,b);
  return 0;
}
int main()
{
  swap(5,10);
  return 0;
}
