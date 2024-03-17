#include <stdio.h>

int main() {
   int x1,x2,y1,y2;
   float xc,yc;
   printf("Enter x1: ");
   scanf("%d",&x1);

   printf("Enter y1: ");
   scanf("%d",&y1);

   printf("Enter x2: ");
   scanf("%d",&x2);

   printf("Enter y2: ");
   scanf("%d",&y2);

   xc = (x1+x2)/2.0;
   yc = (y1+y2)/2.0;

   printf("The x midpoint coordinate is: %.1f\n",xc);
   printf("The y midpoint coordinate is: %.1f",yc);
   return 0;
}
