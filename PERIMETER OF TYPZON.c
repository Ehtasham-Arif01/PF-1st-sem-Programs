// this program is for finding the are and perimeter of Typzon...
#include<stdio.h>

int main()
{
    //variable declaration
    float a,b;
    float area,length,height,sum,perimeter;
    printf("ENTER THE LENGTH OF PARALLEL SIDES = \n");// output statement
    scanf("%f %f",&a,&b);//input statement
    printf("ENTER HEIGHT  = ");
    scanf("%f",&height);
    sum= a+b;
    area=(1.0/2.0)*(sum)*(height);//using formula
    printf("THE AREA OF TYPZON IS %f\n",area);
    perimeter=(a+b)+(a+b);//taking sum of four sides...
    printf("THE PERIMETER OF TYPZON IS %f\n ",perimeter);
    
    
    return 0;
}
