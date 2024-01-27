#include <stdio.h>
//Calculating the partial Sum of Specified Terms.
int partial(int terms)
{
int partial_sum=0;
for(int i=1;i<=terms;i++)
{
partial_sum+=i;
}
return partial_sum;
}
//calculating Approximate value of pi.
long double value_of_pi(int terms)
{
long double a = 4.0;
long double b = 2.0;
long double first_term= 3.0;
long double k;
//Assingning the value of first term to Sum.
long double sum = first_term;
for (int i = 1; i <= terms - 1; i++)
{
k = a / (b * (b + 1) * (b + 2));
if (i % 2 != 0)
{
sum = sum + k;
}
else
{
sum = sum - k;
}
b = b + 2; // Incrementing b by 2 for the next iteration.
}
return sum;
}
//Main Function.
int main(void){
int terms;
//input no of terms from the user.
printf("ENTER THE NUMBER OF TERMS: ");
scanf("%d",&terms);
printf("\nNUMBER OF TERMS ENTERED ARE : %d\n",terms);
//If invalid Terms Entered by the user.
if(terms<1)
{
printf("\n\t\tERROR! **PLEASE ENTER VALID TERMS** \n");
}
//printing Approximate value of pi.
if(terms>0)
{
printf("APPROXIMATE VALUE OF PI IS : %Lf\n",value_of_pi(terms));
//For more precise value of pi.
printf("\nFOR MORE PRECISION VALUE OF PI IS : %.20Lf\n",value_of_pi(terms));
//printing partial sum of secified terms.
printf("\nPARTIAL SUM OF THE %d TERMS IS : %d\n",terms,partial(terms));
}
return 0;
}
