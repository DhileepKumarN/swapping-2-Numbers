#include<stdio.h>
int main()
{
  int a,b;
  printf("enter first number\n");
  scanf("%d",&a);
  printf("enter second number\n");
  scanf("%d",&b);
  printf("before swapping a=%d ,b=%d\n",a,b);
  a=a+b;
  b=a-b;
  /*  here a=a+b,b=b;
      now b=a-b
          b=a+b-b
          b=a   */
  a=a-b;
  /*  here a=a+b,b=a;
      now a=a-b
          a=a+b-a
          a=b   */
 printf("after swapping a=%d ,b=%d\n",a,b);      
  return 0;
}
