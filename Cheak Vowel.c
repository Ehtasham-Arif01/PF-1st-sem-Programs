#include<stdio.h>

int main(void)
{
char a;

printf("ENTER A CHARACTER :");
scanf("%c",&a);
if((a>='a' && a<='z') || (a>='A' && a<='Z'))
{
    if(a=='A' || a=='a')
    {
    printf("%c IS VOWEL\n",a);
    }
    else if(a=='E' || a=='e')
    {
    printf("%c IS VOWEL\n",a);
    }
    else if(a=='I' || a=='i')
    {
    printf("%c IS VOWEL\n",a);
    }
    else if(a=='O' || a=='o')
    {
    printf("%c IS VOWEL\n",a);
    }
    else if(a=='U' || a=='u')
    {
    printf("%c IS VOWEL\n",a);
    }
    else 
    {
    printf("%c IS CONSONANT\n",a);
    }
}
else
{
printf("INVALID INPUT\n");
}

return 0;
}
