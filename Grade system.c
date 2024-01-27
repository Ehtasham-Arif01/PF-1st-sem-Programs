#include<stdio.h>
int fun(float score)
{
if (score>=60)
printf("YOU ARE PASS  \n");
else
printf("YOU ARE FAIL  \n");
}
int grade(float score)
{
if(score>=90)
printf("YOU GOT; GRADE 'A' \n");
else if(score>=80)
printf("YOU GOT ; GRADE 'B' \n");
else if(score>=70)
printf("YOU GOT ; GRADE 'C' \n");
else if(score>=60)
printf("YOU GOT ; GRADE 'D' \n");
else
printf("YOU GOT ; GRADE 'F' \n");


return 0;
}



int main (void)
{
float score;
printf("ENTER THE TEST SCORE : ");
scanf("%f",&score);
fun(score);
grade(score);

return 0;
}

