#include<stdio.h>
int main(void)
{
char name[3][30];

for(int i=0;i<=2;i++)
{
fgets(name[i],sizeof(name[i]),stdin);
}

for(int i=0;i<=2;i++)
{
printf("%s",name[i]);
}

return 0;
}

