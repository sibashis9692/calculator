#include<stdio.h>
#include<conio.h>
void main()
{
    float a;
    char opertion;
    float b;
    float result;
    printf("sum,substraction,multipication,divison are avalabul\n");
    printf("enter your first number: ");
    scanf("%f",&a);
    printf("enter your opertion: ");
    scanf("%s",&opertion);
    printf("enter your second number: ");
    scanf("%f",&b);
    switch (opertion)
    {
    case'+':
    result=a+b;
    printf("the sum of two number is:%f",result);
    break;
    case'-':
    result=a-b;
    printf("the substraction of two number is:%f",result);
    break;
    case'*':
    result=a*b;
    printf("the multipication of two number is:%f",result);
    break;
    case'/':
    result=a/b;
    printf("the divison of two number is:%f",result);
    break;
    }
}