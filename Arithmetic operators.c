#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div,rem;
    printf("enter value of a, b\n");
    scanf("%d,%d",&a,&b);
    add=a+b;//addition operation
    sub=a-b;//subtraction operation
    mul=a*b;//multiplication operation
    div=a/b;//division operation
    rem=a%b;//modulo operation
    printf("addition is=%d\n",add);
    printf("subtraction is=%d\n",sub);
    printf("multiplivation is=%d\n",mul);
    printf("division is=%d\n",div);
    printf("modulo is=5%d\n",rem);
    }
