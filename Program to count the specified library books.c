//program to take sum of number of books.
#include<stdio.h>

//function to calculate sum.
int cal_sum(int start_no,int end_no,int skip_no)
{
    int sum=0;
    int i;
//using for loop.
for(i=start_no;i<=end_no;i=i+skip_no+1)
{
    sum=sum+i;
}
    return sum;//return value
}
//main function.
    int main(void)
{
    int start_no,end_no,skip_no;
    int a;
//output statement.
    printf("ENTER THE STARTING NUMBER OF BOOK :");
//output statement.
    scanf("%d",&start_no);
//input statement.
    printf("ENTER THE ENDING   NUMBER OF BOOK :");
//output statement.
    scanf("%d",&end_no);
//input statement.
    printf("ENTER THE SKIPIING NUMBER OF BOOK :");
//output statement.
    scanf("%d",&skip_no);
//calling function.
    a=cal_sum(start_no,end_no,skip_no);
//displaying sum.
    printf("TOTAL SUM IS %d\n",a);
    
    return 0;
}
