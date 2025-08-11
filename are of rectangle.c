#include <stdio.h>

void main()
 {
    int l,w,a,p;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &w);
    a=l*w;
    p=2*(l+w);
    printf("Area of the rectangle = %.2d\n", a);
    printf("perimeter of the rectangle =%d",p);
}
