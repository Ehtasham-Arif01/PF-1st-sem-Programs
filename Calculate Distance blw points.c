#include<stdio.h>
#include<math.h>
int main(void)
{
int x1,x2,y1,y2;
float distance;
printf("ENTER THE COORDINATES OF FIRST POINT(X1 Y1) :");
scanf("%d %d",&x1,&y1);
printf("ENTER THE COORDINATES OF FIRST POINT(X2 Y2) :");
scanf("%d %d",&x2,&y2);
distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("THE DISTANCE BETWEEN (%d,%d) and (%d,%d) is Approximately %f units \n",x1,y1,x2,y2,distance);
return 0;
}

