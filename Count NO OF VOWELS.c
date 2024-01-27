#include<stdio.h>
#include<unistd.h>
int main(void)
{
char name[10];
int i;
int sum=0;
printf("ENTER THE VOWELS :");
fgets(name,sizeof(name),stdin);
//int b=name[10];
for(i=0;i<=9;i++)
{
if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
{
sum=sum+1;
}
}
printf("NO OF VOWELS ARE : %d\n",sum);
return 0;
}
