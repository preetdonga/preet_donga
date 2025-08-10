#include <stdio.h>

int main() {
    int a,b, sum,sub,multi,div;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;
    printf("The sum of %d and %d is: %d\n",a,b, sum);
    printf("The substraction of %d and %d is : %d\n",a,b,sub);
    printf("The multiplication of %d and %d is : %d\n",a,b,multi);
    printf("The division of %f and %d is : %d\n",a,b,div);
}
